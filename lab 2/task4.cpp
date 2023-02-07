#include<iostream>

using namespace std;

void getEvenOdd(const int ar[], const int sizeAr, int* &even, int& sizeEven, int* &odd, int& sizeOdd)
{

	for (int i = 0; i < sizeAr; i++)
	{
		if (ar[i] % 2 == 0)
		{
			sizeEven++;
		}
		else
		{
			sizeOdd++;
		}
	}

	even = new int[sizeEven];
	odd = new int[sizeOdd];

	int j = 0, k = 0;
	for (int i = 0; j < sizeEven || k < sizeOdd ; i++)
	{
		if (ar[i] % 2 == 0)
		{
			*(even + j) = ar[i];
			j++;
		}
		else
		{
			*(odd + k) = ar[i];
			k++;
		}
	}
	if (sizeEven == 0)
	{
		even = NULL;
	}
	if (sizeOdd == 0)
	{
		odd = NULL;
	}
}

int main()
{
	//decleration of variable
	int arr[10] = { 1,23,33,44,-53,-3,7,83,9,13 };
	
	int* ptrEven = NULL, * ptrOdd = NULL;
	int sizeEven = 0, sizeOdd = 0;

	//calculation

	getEvenOdd(arr, 10, ptrEven, sizeEven, ptrOdd, sizeOdd);

	//showing results
	if (ptrEven != NULL)
	{
		for (int i = 0; i < sizeEven; i++)
		{
			cout << *(ptrEven + i) << "\t";
		}
	}
	else
	{
		cout << "No even number in array";
	}

	cout << endl;
	
	if (ptrOdd != NULL)
	{
		for (int i = 0; i < sizeOdd; i++)
		{
			cout << *(ptrOdd + i) << "\t";
		}
	}
	else
	{
		cout << "No odd number in array";
	}


	delete[] ptrEven;
	delete[] ptrOdd;
	return 0;
}