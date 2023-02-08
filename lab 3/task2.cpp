//program to find the number of length of word

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
using namespace std;

void letterPerWord(const char* str)
{
	int len = strlen(str);
	char* string = new char[len+1];
	strcpy(string, str);
	int lentemp;

	
	char* temp = strtok(string, " ");
	lentemp = strlen(temp);
	cout << temp << "\t\t" << lentemp << endl;;
	while (temp != NULL)
	{
		temp = strtok(NULL, " ");
		lentemp = strlen(temp);
		cout << temp << "\t\t" << lentemp << endl;
	}
}


int main()
{
	//decleration of variable
	char str[] = { "ali is good boy" };

	//calculation
	letterPerWord(str);

	//showing results

	return 0;
}