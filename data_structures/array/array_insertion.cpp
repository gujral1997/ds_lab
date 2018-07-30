#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int array[n+1];
	for(int i=0;i<n;++i)
	{
		cin>>array[i];
	}
	int l, number;
	cin>>l>>number;
	//array[n]=array[n-1];
	for(int i=n; i>l;--i)
	{
		array[i]=array[i-1];
	}
	array[l]=number;
	cout<<endl;
	for(int i=0;i<=n;++i)
	{
		cout<<array[i]<<endl;
	}
	return 0;
}