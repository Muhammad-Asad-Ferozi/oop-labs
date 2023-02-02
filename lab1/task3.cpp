#include<iostream>

using namespace std;

void arrayByPointer(const float* arr,const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "the adress of " << i << "element of array is: " << (arr + i) << "\t\tthe value in it is: " << *(arr + i)<<endl;
	}
}

int main()
{
	//decleration of variable
	float arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	
	//showing results

	arrayByPointer(arr, 10);

	return 0;
}