#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, sum=0;
	cin>>n;
	int array[n];
	for(int i=0;i<n;++i)
	{
		cin>>array[i];
	}
	int max=0;
	for(int i=0;i<n;++i)
	{
		for(int j=i;j<n;++j)
		{
			sum+=array[j];
			if(sum>max)
				{
					max=sum;
				}
		}
		sum=0;
	}
	cout<<max;
	return 0;
}