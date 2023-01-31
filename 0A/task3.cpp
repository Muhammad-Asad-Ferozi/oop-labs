#include <iostream>
using namespace std;
void mian()
{
	int num = 0;
	while (num < 0 || num>10)
	{
		cout << "Enter the number: ";
		cin >> num;
		if (num < 0 || num>10)
		{
			cout << "INalid number!" << endl;
		}
	}


	cout << "Roman number of entered number is: ";
	switch (num)
	{
	case 1:
		cout << "i";
		break;
	case 2:
		cout << "ii";
		break;
	case 3:
		cout << "iii";
		break;
	case 4:
		cout << "iv";
		break;
	case 5:
		cout << "v";
		break;
	case 6:
		cout << "vi";
		break;
	case 7:
		cout << "vii";
		break;
	case 8:
		cout << "viii";
		break;
	case 9:
		cout << "ix";
		break;
	case 10:
		cout << "x";
		break;
	default:
		break;
	}
}