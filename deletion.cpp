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
	int l;
	cin>>l;
	for(int i=l; i<n;++i)
	{
		array[i]=array[i+1];
	}
	cout<<endl;
	for(int i=0;i<n-1;++i)
	{
		cout<<array[i]<<endl;
	}
	return 0;
}