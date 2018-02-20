#include <bits/stdc++.h>
using namespace std;

struct node {
	int i;
	struct node *link;
};

int main(int argc, char const *argv[])
{
	struct node *head = NULL;
	struct node *first = NULL;
	struct node *second = NULL;
	struct node *third = NULL;
	head = (struct node*)malloc(sizeof(struct node));
	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	head -> i = 0;
	head -> link = first;

	first -> i = 1;
	first -> link = second;


	second -> i = 2;
	second -> link = third;

	third-> i = 3;
	third -> link = NULL;

	struct node *t;	

	t = head;
	while(t != NULL)
	{
		cout<<t->i;
		t = t -> link;
	}

	return 0;
}