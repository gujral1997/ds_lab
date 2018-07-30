#include <bits/stdc++.h>
using namespace std;

struct node {
		int i;
		struct node *next;
	};

int main(int argc, char const *argv[])
{
	struct node *head = (struct node*)malloc(sizeof(struct node));
	struct node *first = (struct node*)malloc(sizeof(struct node));
	struct node *second = (struct node*)malloc(sizeof(struct node));

	head -> i = 0;
	head -> next = first;

	first -> i = 1;
	first -> next = second;

	second -> i = 2;
	second -> next = NULL;

	// insert after any 
	cout<<"Insert the node after which you want to enter: ";
	int n;
	cin>>n; 

	struct node *t = head;

	while(t -> i != n)
	{
		t = t -> next;
	}

	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> next = t -> next;
	int no;
	cin >> no;
	new_node -> i = no;
	t -> next = new_node;
	t = head;
	while(t)
	{
		cout<<t -> i<<" ";
		t = t -> next;
	}

	return 0;
}