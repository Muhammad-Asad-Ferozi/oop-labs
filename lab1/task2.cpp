#include<iostream>

using namespace std;

void subByPointer(const double* a,const double* b, double* c)
{
	*c = *a - *b;
}

int main()
{
	//decleration of variable
	double a, b, c = 0;
	cout << "Enter the value of a: ";
	cin >> a;

	cout << "Enter the value of b: ";
	cin >> b;

	//calculation
	subByPointer(&a, &b, &c);

	//showing results
	cout << "the answer of a-b is: " << c;

	return 0;
}