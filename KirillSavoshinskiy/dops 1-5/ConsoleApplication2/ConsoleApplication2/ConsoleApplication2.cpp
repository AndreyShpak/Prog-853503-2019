﻿ 
#include <iostream>
using namespace std;

void ArrChange(int *arr,int size);

int main()
{
	int change = 0;
	int size;
	cout << "Enter size of array:";
	cin >> size;
	int *array = new int[size];
	cout << "Fill array:";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
	cout << "Enter the number of changes:";
	cin >> change;

	for (int i = 0; i < change; i++)
	{
		ArrChange(array, size);
	}

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	cout << "Result:" << sum;
}

void ArrChange(int *arr, int size)
{
	int min = 0;
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		arr[i] = min - arr[i];
	}
}
