#include<iostream>

using namespace std;

void getMinMax(const int* ptr,const int size, int* min, int* max)
{
	*min = *ptr;
	*max = *ptr;
	for (int i = 0; i < size; i++)
	{
		if (*min > *(ptr + i))
		{
			*min = *(ptr + i);
		}
		if (*max < *(ptr + i))
		{
			*max = *(ptr + i);
		}
	}
}

int main()
{
	//decleration of variable
	int arr[10] = { 200,-34,23,3,23,2,2,55,100,0 };
	int min=0, max=0;
	//calculation
	getMinMax(arr, 10, &min, &max);

	//showing results
	cout << "minimum number is: " << min << endl;
	cout << "maximum number is: " << max;
	return 0;
}