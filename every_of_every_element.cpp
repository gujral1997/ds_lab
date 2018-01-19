#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, count=1;
	cin>>n;
	int array[n];
	for(int i=0;i<n;++i)
	{
		cin>>array[i];
	}
	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			if(array[i]==-1)
			{
				break;
			}
			else if(array[i]==array[j])
			{
				count++;
				array[j]=-1;
			}
		}
		if(array[i]!=-1)
		{
			cout<<"Occurance of "<<array[i]<<" is: "<<count<<endl;
		}
		count=1;
	}
	return 0;
}