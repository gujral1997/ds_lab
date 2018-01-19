#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;++i)
	{
		cin>>array[i];
	}
	int number;
	cout<<"Enter the number you want to search: ";
	cin>>number;
	for(int i=0;i<n;++i)
	{
		if(array[i]==number)
		{
			cout<<"The location is: "<<i<<endl;
			break;
		}
		else
		{
			cout<<-1<<endl;
			break;
		}
	}
	return 0;
}