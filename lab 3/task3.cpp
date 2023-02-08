//peorgram to revese the string and also lower case to upper case

#include<iostream>

using namespace std;

char* reverseCase(const char* str)
{
	int len = strlen(str);

	char* newString = new char[len + 1];
	int j = 0;
	char temp;
	for (int i = len - 1; i >= 0; i--)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			temp = str[i] - 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			temp = str[i] + 32;
		}
		else
		{
			temp = str[i];
		}


		newString[j] = temp;
		j++;
	}
	newString[j] = '\0';
	return newString;
}


int main()
{
	char str[] = { "this is good DAY123" };
	char* temp = reverseCase(str);

	cout << temp;

	delete[] temp;
	return 0;
}