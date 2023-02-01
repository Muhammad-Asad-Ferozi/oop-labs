#include "iostream"
using namespace std;

void main()
{
	float arr[10];
	float arr1[5];
	float sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		sum = arr[i] + sum;
		if (i % 2 != 0)
		{
			arr1[j] = sum;
			j++;
			sum = 0;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << endl;
	}

}