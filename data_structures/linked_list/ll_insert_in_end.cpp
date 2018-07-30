#include <bits/stdc++.h>
using namespace std;

struct node {
	int i;
	struct node *next; 
};

int main(int argc, char const *argv[])
{
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head -> i = 0;
	head -> next = NULL;	
	// insert in end
	struct node *end = (struct node*)malloc(sizeof(struct node));
	end -> i = 1;
	end -> next = NULL;
	struct node *t = head;
	while(t -> next)
	{
		t = t -> next;
	}
	t -> next = end;
	t = head;
	while(t)
	{
		cout << t -> i;
		t = t -> next;
	}
	return 0;
}