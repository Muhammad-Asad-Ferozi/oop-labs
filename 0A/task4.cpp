#include <iostream>
using namespace std;
void main()
{
	float l1, l2, w1, w2;
	float a1, a2;

	cout << "Enter the length of reactanle 1: ";
	cin >> l1;
	cout << "Enter the width of reactanle 1: ";
	cin >> w1;
	cout << "Enter the length of reactanle 2: ";
	cin >> l2;
	cout << "Enter the width of reactanle 2: ";
	cin >> w2;

	a1 = l1 * w1;
	a2 = l2 * w2;

	cout << "area 1 of rectangle 1: " << a1<<endl;
	cout << "area 2 of rectangle 2: " << a2 << endl;

	if (a1 < a2) {
		cout << "area 1 < area 2";
	}
	else if (a1 > a2) {
		cout << "area 1 > area 2";
	}
	else if (a1 == a2) {
		cout << "area 1 = area 2";
	}
	
}