#include <iostream>
using namespace std;


struct Node
{
	int data;
	struct Node* link;
};

struct Node* top;

void push(int data)
{
	struct Node* temp;
	temp = new Node();

	if (!temp)
	{
		cout << "\nHeap Overflow";
		exit(1);
	}
	temp->data = data;
	temp->link = top;
	top = temp;
}
int isEmpty()
{
    return top == NULL;
}

void peek()
{
    if (!isEmpty())
        cout << top->data;
    else
        exit(1);
}

void pop()
{
	struct Node* temp;

	if (top == NULL)
	{
		cout << "\nStack Underflow" << endl;
		exit(1);
	}
	else
	{
		temp = top;
		top = top->link;
		temp->link = NULL;
		free(temp);
	}
}

void display()
{
    struct Node* temp;
    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data << "-> ";
            temp = temp->link;
        }
    }
}

void linkedListUsingStacks(){
    /* 1= push; 2= print content; 3= pop; 4= peek; 000= exit */
    int input_DECISION = 0;
    int push_input = 0;
    

    do{
        cout << endl << "Enter choice: ";
        cin  >> input_DECISION;
    
    switch(input_DECISION) {
         case 1: {
            cout << "push: ";
            cin >> push_input;
            push(push_input); 
            break;
         }
         case 2: {
            display();
            break;
         }
         case 3: {
            pop();
            break;
         }
        case 4: {
            peek();
            break;
         }
         default: {
            cout<<"Exit"<<endl;
            break;
         }
      }
    }
    while(input_DECISION != 000);
}


int main(){
    linkedListUsingStacks();
	return 0;
}
