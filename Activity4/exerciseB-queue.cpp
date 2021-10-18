#include<iostream>
using namespace std;

struct QNode {
	int data;
	QNode* next;
	QNode(int d)
	{
		data = d;
		next = NULL;
	}
};

struct Queue {
	QNode *front, *rear;
	Queue()
	{
		front = rear = NULL;
	}

	void push(int x)
	{
		QNode* temp = new QNode(x);

		if (rear == NULL) {
			front = rear = temp;
			return;
		}

		rear->next = temp;
		rear = temp;
	}

	void pop()
	{
		if (front == NULL)
			return;

		QNode* temp = front;
		front = front->next;

		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
	void display(){
		QNode *temp;
		temp = front;
		while(temp != NULL){
			cout << temp->data << ", ";
			temp = temp->next;
		}
		cout << endl;
	}
};

void linkedListUsingQueue(){
	/* 1= push; 2= print content; 3= pop; 4= peek; 000= exit */
	Queue q;

	int input_DECISION = 0;
    int push_input = 0;
    

    do{
        cout << endl << "Enter choice: ";
        cin  >> input_DECISION;
    
    switch(input_DECISION) {
         case 1: {
            cout << "push: ";
            cin >> push_input;
            q.push(push_input); 
            break;
         }
         case 2: {
            q.display();
            break;
         }
         case 3: {
            q.pop();
            break;
         }
        case 4: {
            cout << "Queue Front : " << (q.front)->data << endl;
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

int main()
{
	linkedListUsingQueue();
}
