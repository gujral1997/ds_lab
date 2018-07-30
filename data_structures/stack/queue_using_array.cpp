#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node *next;
};

struct node *head =NULL;
void enqueue(int data)
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

int dequeue ()
{
	struct node *temp = head;
	if( head == NULL || head->next == NULL)
	{
		head = NULL;
		return -1;
	}
	while(temp->next->next)
	{
		temp = temp->next;
	}
	struct node *temp1 = temp->next;
	temp->next = NULL;
	free(temp1);
	return temp->data;
}

void print()
{
	if(head == NULL)
	{
		cout<<"queue is empty";
		return;
	}
	struct node *temp = head;
	while(temp)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main(int argc, char const *argv[])
{
	enqueue(5);
	enqueue(6);
	enqueue(7);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	print();
	return 0;
}