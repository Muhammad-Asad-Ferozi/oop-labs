#include "iostream"
#include<string>
using namespace std;

void main()
{
	char arr[20];

	cout << "ENter the passward: ";
	cin >> arr;

	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;
	int count = 0;
	for (int i = 0; i < 20; i++)
	{
		if (arr[i] == '\0')
		{
			break;
		}
		count++;
		if (arr[i] >= 65 && arr[i] <= 90)
		{
			flag1 = 1;
		}
		if (arr[i] >= 97 && arr[i] <= 122)
		{
			flag2 = 1;
		}
		if (arr[i] >= 48 && arr[i] <= 57)
		{
			flag3 = 1;
		}
	}

	if (count < 7 || flag1 == 0 || flag2 == 0 || flag3 == 0)
	{
		cout << "invalid password";
	}
	else
	{
		cout << "Valid password";
	}
}