#include<iostream>

using namespace std;

int main()
{

	//decleration of variable

	float* ptrx = NULL, * ptry = NULL;
	
	//calculation

	ptrx = new float(4.5);
	ptry = new float(9.3);
	
	//showing results

	cout << &ptrx << "\t" << *ptrx << endl;
	cout << &ptry << "\t" << *ptry;

	delete ptrx, ptry;

	return 0;
}