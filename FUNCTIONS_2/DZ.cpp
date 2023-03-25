#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


void main()
{
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = (1+ rand() % 100);
		cout << arr[i] << "\t";
	}
}