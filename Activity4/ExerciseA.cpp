#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};

void push(Node **head_ref, int new_data)
{

	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void insertAfter(Node *prev_node, int new_data)
{

	if (prev_node == NULL)
	{
		cout << "the given previous node cannot be NULL";
		return;
	}

	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = prev_node->next;

	prev_node->next = new_node;
}

void append(Node **head_ref, int new_data)
{

	Node *new_node = new Node();

	Node *last = *head_ref;

	new_node->data = new_data;

	new_node->next = NULL;

	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return;
}

void printList(Node *node)
{
	while (node != NULL)
	{
		cout << " " << node->data;
		node = node->next;
	}
}
Node *removeLastNode(struct Node *head)
{
	if (head == NULL)
		return NULL;

	if (head->next == NULL)
	{
		delete head;
		return NULL;
	}

	Node *second_last = head;
	while (second_last->next->next != NULL)
		second_last = second_last->next;

	delete (second_last->next);

	second_last->next = NULL;

	return head;
}

int main()
{
	Node *head = NULL;

	int input = 0;

	while (input != 999)
	{
		cout << "Enter num: ";
		cin >> input;
		if (input >= 10)
		{
			append(&head, input);
		}
		else if (input < 10)
		{
			push(&head, input);
		}
		if (input == 999)
		{
			insertAfter(head->next, input);
		}
	}
	removeLastNode(head);

	cout << "Linked List contains: ";
	printList(head);

	return 0;
}
