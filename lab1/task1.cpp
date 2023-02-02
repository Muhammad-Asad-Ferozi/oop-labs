#include<iostream>

using namespace std;

int main()
{
	//decleration of variable
	int x = 2;
	int y = 8;

	int* ptrx = &x;
	int* ptry = &y;

	//calculation

	//showing results
	cout << "this adress of x is: " << &x << "\nthe value of x is: " << x << endl;
	cout << "this adress of ptrx is: " << &ptrx << "\tthe value of ptrx is: " << ptrx <<"\tthe value of memory location is: "<< *ptrx << endl;
	cout << "this adress of y is: " << &y << "\nthe value of y is: " << y << endl;
	cout << "this adress of ptry is: " << &ptry << "\tthe value of ptry is: " << ptry << "\tthe value of memory location is: " << *ptrx << endl;

	return 0;
}