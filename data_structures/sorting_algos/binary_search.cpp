#include <bits/stdc++.h>
using namespace std;
int binary(int array[], int start, int end, int number)
	{
		while(start<=end)
		{
			int mid=(start+end)/2;
			if(number == array[mid])
			{
				return mid;
			}
			else if(array[mid]>number)
			{
				start = mid+1;
			}
			else if(array[mid]<number)
			{
				end = mid-1;
			}
		}
		return -1;
	}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;++i)
	{
		cin >> array[i];
	}
	int x;
	cin>>x;
	int result = binary(array,0,n-1,x);
	if(result!= -1)
	{
		cout<<result<<endl;
	}
	else
	{
		cout<< "not found"<<endl;
	}
	return 0;
}