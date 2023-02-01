#include "iostream"
#include "string"
using namespace std;

int wordCounter(char str[100])
{
	int count = 0;
	for (int i = 0; i < 100; i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}
	count++;
	return count;
}

void main()
{
	char str[100];
	for (int i = 0; i < 100; i++)
	{
		str[i] = getchar();
		if (str[i] == 10)
		{
			str[i] = '\0';
			break;
		}
	}

	cout<< wordCounter(str);
}