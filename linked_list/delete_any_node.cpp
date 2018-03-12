#include <bits/stdc++.h>
using namespace std;

struct node {
	int i;
	struct node *next;
};

int main(int argc, char const *argv[])
{

	struct node *head = (struct node*)malloc(sizeof(struct node));
	struct node *t;
	struct node *first = (struct node*)malloc(sizeof(struct node));
	struct node *second = (struct node*)malloc(sizeof(struct node));
	struct node *third = (struct node*)malloc(sizeof(struct node));

	head -> next = first;

	first -> i = 1;
	first -> next = second;


	second -> i = 2;
	second -> next = third;

	third-> i = 3;
	third -> next = NULL;
	t = head;

	while(t != NULL) // while(t) will work too
	{
		cout<<t->i;
		t = t -> next;
	}
	cout<<endl;

while (1)
{
		cout<<"Enter n: ";
	int n;
	cin >>n;
	cout<<endl;

	t = head;

	while(t -> next -> i != n && n != head -> i)

	{
		t = t -> next;
	}

	if(n != head -> i)
	{
		struct node *t1 = t -> next;
		t -> next = t1 -> next;
		free(t1);
	}

	else if (t -> next == NULL)
	{
		free (head);
		cout<<"a";
	}

	else
	{
		head = t->next;
		free(t);
	}

	t = head;

	if(t != NULL)
	{
		while(t != NULL) // while(t) will work too
		{
			cout<<t->i;
			t = t -> next;
		}
	}
	else
	{
		cout<<"Linked List Emptied";
	}
}


	return 0;

}