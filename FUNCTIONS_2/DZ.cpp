#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


void main()
{
	int i;
	int arr[10];
	srand(time(NULL));
	for (i = 0; i < 10; i++);
	{
		arr[i] = (1+ rand() % 100);
		cout << arr[i] << "\n";
	}
	return;
}