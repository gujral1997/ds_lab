#include <bits/stdc++.h>
using namespace std;

int partition(int array[], int p,int r)
{
	int pivot = array[r], i=p-1;
	for(int j = p;j<=r-1;++j)
	{
		if(array[j]<=pivot)
		{
			i++;
			swap(array[i],array[j]);
		}
	}

	swap(array[i+1], array[r]);
	return (i+1);
}

void quickSort(int array[], int p, int r)
{
	if(p<r)
	{
		int q = partition(array,p,r);
		quickSort(array,p,q-1);
		quickSort(array,q+1,r);
	}
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
	quickSort(array,0,n-1);
	for(int i=0;i<n;++i)
	{
		cout << endl << array[i];
	}
	return 0;
}