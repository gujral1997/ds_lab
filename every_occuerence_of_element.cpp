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
	int number, count=0;
	cin>>number;
	for(int i=0;i<n;++i)
	{
		if(array[i]==number)
		{
			count++;
			cout<<i<<" ";
		}
	}
	if(!count)
	{
		cout<<"The number is not present"<<endl;
	}
	else
	{
		cout<<"is the location(s)"<<endl<<"Total number of occurence: "<<count<<endl;
	}
	return 0;
}