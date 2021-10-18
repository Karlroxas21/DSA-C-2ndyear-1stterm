#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
using namespace std;
struct Node* head = NULL;
struct Node* tail = NULL;
struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};
void insert(int new_data)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;
}
void PUSH()
{
	int number{};
	cout << "Enter 999 to STOP" << endl;
	while (number != 999)
	{
		cout << "Enter a number: ";
		cin >> number;
		if (number == 999)
		{
			break;
		}
		insert(number);
	}
	system("CLS");
}
void display_Stack() {
	struct Node* ptr;
	ptr = head;
	cout << "\nLinked List: ";
	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout << endl;
	system("PAUSE");
}
void display_Queue() {
	struct Node* ptr;
	ptr = head;
	cout << "\nLinked List: ";
	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout << endl;
	system("PAUSE");
}
int main()
{
	int choices, choose;
	while (true)
	{
		cout << "Choose From the Following: " << endl;
		cout << "1. Stack\n2. Queue\n3. Exit\n" << endl;
		cout << "Enter your Choice: ";
		cin >> choose;
		system("CLS");
		if (choose == 1)
		{
			while (true)
			{
				cout << "Choose the following: " << endl;
				cout << "1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n" << endl;
				cout << "Enter the Function: ";
				cin >> choices;
				system("CLS");
				if (choices == 1)
				{
					PUSH();
				}
				else if (choices == 2)
				{
					continue;
				}
				else if (choices == 3)
				{
					display_Stack;
				}
				else if (choices == 4)
				{
					return 0;
				}
				else
				{
					cout << "Invalid Input" << endl;
					system("PAUSE");
				}
				system("CLS");
			}
		}
		else if (choose == 2)
		{
			while (true)
			{
				cout << "Choose the following: " << endl;
				cout << "1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n" << endl;
				cout << "Enter the Function: ";
				cin >> choices;
				system("CLS");
				if (choices == 1)
				{
					PUSH();
				}
				else if (choices == 2)
				{
					continue;
				}
				else if (choices == 3)
				{
					display_Queue();
				}
				else if (choices == 4)
				{
					return 0;
				}
				else
				{
					cout << "Invalid input.\nPlease Try Again." << endl;
					system("PAUSE");
				}
				system("CLS");
			}
		}
		else if (choose == 3)
		{
			return 0;
		}
		else
		{
			cout << "Invalid input.\nPlease Try Again." << endl;
			system("PAUSE");
		}
		system("CLS");
	}
	return 0;
}