#include <bits/stdc++.h>
using namespace std;
struct node {
	int i;
	struct node *next;
};
int main(int argc, char const *argv[])
{

	struct node *head = (struct node*)malloc(sizeof(struct node));
	head -> i =0;
	head -> next = NULL;
	struct node *t = head;
	// inserting a new element in start
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> next = head;
	head = new_node;
	new_node -> i = 1;
	t = head;
	while(t)
	{
		cout<<t -> i;
		t = t -> next;
	}
	return 0;
}