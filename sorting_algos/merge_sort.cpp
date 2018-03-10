#include <bits/stdc++.h>
using namespace std;

void merge(int array[], int p, int q, int r)
{
	int n1 = q-p+1;
	int n2 = r-q;
	int left[n1+1], right[n2+1];
	for(int i=0;i<n1;++i)
	{
		left[i]=array[p+i];
	}
	for(int i=0;i<n2;++i)
	{
		right[i]=array[q+i+1];
	}
	array[n1]=100000;
	array[n2]=100000;
	int i = 0, j= 0;

	for(int k = p;k<=r;++k)
	{
		if(left[i]<=right[i])
		{
			array[k]=left[i];
			i++;
		}
		else
		{
			array[k]=right[i];
			j++;
		}
	}

}

void mergeSort(int array[], int p, int r)
{
	int q;
	if(p<r)
	{
		q = (p+r)/2;
	}
	mergeSort(array, p, q);
	mergeSort(array, q+1, r);
	merge(array, p, q, r);
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
	mergeSort(array,1,n);
	for(int i=0;i<n;++i)
	{
		cout << endl << array[i];
	}
	return 0;
}