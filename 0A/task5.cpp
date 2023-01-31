#include <iostream>
using namespace std;
void main()
{
	int sec;
	cout << "ENter the seconds: ";
	cin >> sec;
	if (sec < 60)
	{
		cout << "Seconds are " << sec << endl;
	}
	else if (sec >= 60 && sec < 3600)
	{
		cout << "mintus are " << sec/float(60) << endl;
	}
	else if (sec >= 3600 && sec < 86400)
	{
		cout << "hours are " << sec / float(3600) << endl;
	}
	else if (sec >= 86400 )
	{
		cout << "days are " << sec / float(86400) << endl;
	}
}