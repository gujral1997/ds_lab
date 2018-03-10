#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int array[], int n)
{
	for(int i= 1; i<n; i++)
	{
		int key= array[i];
		int j = i-1;
		while(j>=0 && array[j]>key)
		{
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = key;
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
	insertion_sort(array, n);
	for(int i=0;i<n;++i)
	{
		cout << endl << array[i];
	}
	return 0;
}