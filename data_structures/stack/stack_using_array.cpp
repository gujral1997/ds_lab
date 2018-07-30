#include <bits/stdc++.h>
using namespace std;
#define max 5

int array[max], top = -1;

void push (int value)
{
	if(top == max-1)
	{
		cout<<"Stack Overflow";
		return;
	}

	array[++top] = value;
}

int pop()
{
	if(top == -1)
	{
		cout<<"Stack Underflow";
		return -1;
	}

	return array[top--]; 
}

void print()
{
	if(top == -1)
	{
		return;
	}

	for(int i = 0; i <top;++i)
	{
		cout<<array[i]<<" ";
	}
}

int main(int argc, char const *argv[])
{
	push(1);
	push(1);
	push(1);
	push(1);
	push(1);
	print();
	return 0;
}