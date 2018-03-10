#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int n)
{
	for(int i=0;i<n-1;++i)
	{
		int flag = 1;
		for(int j=0;j<n-1-i;++j)
		{
			if(array[j]>array[j+1])
			{
				swap(array[j],array[j+1]);
				flag = 0;
			}
		}
		if(flag == 1)
		{
			break;
		}
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
	bubbleSort(array, n);
	for(int i=0;i<n;++i)
	{
		cout << endl << array[i];
	}

	return 0;
}