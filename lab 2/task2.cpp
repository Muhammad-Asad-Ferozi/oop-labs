#include<iostream>
using namespace std;

int main()
{
	//decleration of variable
	int num = 0;
	int* ptr = NULL;
	int sum = 0;

	//calculation
	
	cout << "Enter the array size: ";
	cin >> num;
	if (num < 0)
	{
		return 0;
	}
	else
	{
		ptr = new int[num];
	}
	for (int i = 0; i < num; i++)
	{
		cout << "Enter the number of " << i << " idex of array: ";
		cin >> *(ptr + i);
		sum = sum + *(ptr + i);
	}

	delete[] ptr;
	//showing results

	cout << "The sum of entered element are: " << sum;

	return 0;
}