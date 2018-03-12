#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

void push(struct node **head_ref, int new_data)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = new_data;
	new_node -> next = (*head_ref);
	(*head_ref) = new_node;
}

void delete(struct node **head_ref, int new_data)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = new_data;

	while()

	new_node -> next = (*head_ref);
	(*head_ref) = new_node;
}

void print(struct node *Node)
{
	if(Node)
	{
		cout<<Node->data<<" ";
		print(Node->next);
	}
}

int main(int argc, char const *argv[])
{
	struct node *head = NULL;
	push(&head, 7);
	push(&head, 7);
	push(&head, 7);
	print(head);
	return 0;
}