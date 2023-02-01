#include "iostream"
using namespace std;

float Celcius(float far)
{
	float cel = ((5.0 / 9.0)*(far - 32));
	return cel;
}
void main()
{
	for (int i = 0; i < 20; i++)
	{
		cout << Celcius(i) << endl;
	}
	
}