#include <bits/stdc++.h>
using namespace std;

struct node {

	int data;
	struct node *next;

};

struct node *head = NULL;

void push(int data)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	if (new_node == NULL)
	{
		cout<<"Malloc error";
		return;
	}
	new_node->data = data;
	new_node->next = head;
	head = new_node;
}

int pop()
{
	int item;
	struct node *new_node;
	if(head == NULL)

	{
		cout << "underflow";
		return -1;
	}
	item = head -> data;
	new_node = head;
	head = head->next;
	free(new_node);
}

void print()
{
	struct node *temp = head;
	while(temp)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(int argc, char const *argv[])
{

	push(1);
	push(1);
	print();
	return 0;

}