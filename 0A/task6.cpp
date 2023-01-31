#include <iostream>
using namespace std;
int main()
{
	float speed=0, time, distance;
	int choice;
	
	cout << "ENter the choice: ";
	cin >> choice;

	if (choice == 1)
	{
		speed = 1100;
	}
	else if (choice == 2)
	{
		speed = 4900;
	}
	else if (choice == 3)
	{
		speed = 16400;
	}
	else
	{
		cout << "invalid choice";
		return 0;
	}
	
	cout << "Enter the distance: ";
	cin >> distance;

	time = distance / speed;

	cout << "time is: " << time;


	return 0;
}