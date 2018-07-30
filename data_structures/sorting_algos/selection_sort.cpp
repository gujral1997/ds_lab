#include <bits/stdc++.h>
using namespace std;

void selectionSort(int array[], int n)
{
	for(int i=0;i<n-1;++i)
	{
		int min=i;
		for(int j=i+1;j<n;++j)
		{
			if(array[j]<array[min])
			{
				min = j;
			}
		}
		swap(array[min],array[i]);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int array[n];
	for(int i = 0;i<n;++i)
	{
		cin >> array[i];
	}
	selectionSort(array, n);
	for(int i = 0;i<n;++i)
	{
		cout << endl << array[i];
	}
	return 0;
}