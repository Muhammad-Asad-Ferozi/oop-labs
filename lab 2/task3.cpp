#include<iostream>
using namespace std;

int* getPositiveNumber(const int ar[], const int size, int& newSize)
{
	for (int i = 0; i < size; i++)
	{
		if (ar[i] >= 0)
		{
			newSize++;
		}
	}

	int j = 0;
	if (newSize == 0)
	{
		return NULL;
	}
	else
	{
		int* ptr = new int[newSize];
		for (int i = 0; j < newSize; i++)
		{
			if (ar[i] >= 0)
			{
				*(ptr + j) = ar[i];
				j++;
			}
		}
		return ptr;
	}
}

int main()
{

	//decleration of variable

	int arr[10] = { -3,3,5,0,0,0,2,5,-2,-5 };
	int newSize = 0;
	
	//calculation

	int* ptr = getPositiveNumber(arr, 10, newSize);

	//showing results
	if (ptr != NULL)
	{
		for (int i = 0; i < newSize; i++)
		{
			cout << *(ptr + i) << "\t";
		}
	}
	else
	{
		cout << "No positive number exists in array:";
	}

	delete[] ptr;
	return 0;
}