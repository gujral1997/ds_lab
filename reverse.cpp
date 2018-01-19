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
	for(int i=0;i<n/2;++i)
	{
		swap(array[i],array[n-i-1]);
	}
	for(int i=0;i<n;++i)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}