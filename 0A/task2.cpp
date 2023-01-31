#include <iostream>
using namespace std;

void main()
{
	float num1=0, num2=0;
	cout << "Enter th number 1: ";
	cin >> num1;
	cout << "Enter the number 2: ";
	cin >> num2;

	if (num1 > num2)
	{
		cout << "number 1 is grater\n";
		cout << num2 << ",\t" << num1;
	}
	else 	if (num2 > num1)
	{
		cout << "number 2 is grater\n";
		cout << num1 << ",\t" << num2;
	}
}