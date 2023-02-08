//print the pair sum of integer array

#include<iostream>
using namespace std;
int* pairSum(const int ar[],const int size, int& newSize)
{
	
	if (size % 2 == 0)
	{
		newSize = size / 2;
	}
	else {
		newSize = size / 2;
		newSize++;
	}
	int* ptr = new int[newSize];

	int j = 0;
	int sum = 0;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		
		sum = sum + ar[i];

		if (count == 1)
		{
			ptr[j] = sum;
			sum = 0;
			count = 0;
			j++;
		}
		else
		{
			count++;
		}
		if (size % 2 != 0 && i == size-1)
		{
			ptr[j] = ar[i];
			break;
		}
	}


	
	return ptr;
}


int main()
{
	//decleration of variable
	int arr[5] = {9 };
	int newSize = 0;

	//calculation
	int *ptr = pairSum(arr, 5, newSize);

	//showing results

	for (int i = 0; i < newSize; i++)
	{
		cout << ptr[i] << "\t";
	}
	delete[] ptr;
	return 0;
}