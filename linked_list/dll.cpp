#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node *next;
	struct node *prev;
};

void push(struct node **head, int new_data)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = new_data;
	
	new_node -> next = (*head);
	new_node -> prev = NULL;

	if((*head)!=NULL)
	{
		(*head)->prev = new_node;
	}

	(*head) = new_node;
}

void print(struct node *Node)
{
	struct node *last = NULL;

	while(Node)
	{
		cout<<Node->data;
		last = Node;
		Node = Node->next;
	}

	cout<<endl;

	while (Node)
	{
		Node = Node -> next;
	}

	while(last)
	{
		cout<<last->data;
		last = last->prev;
	}
}

int main(int argc, char const *argv[])
{
	struct node *head = NULL;
	push(&head,1);
	push(&head,2);
	push(&head,3);
	push(&head,4);
	print(head);
	return 0;
}