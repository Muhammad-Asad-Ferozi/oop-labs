#include<iostream>
using namespace std;

class Date
{

public:

	Date()
	{
		day = 1;
		month = 1;
		year = 1900;
	}

	Date(int d, int m, int y)
	{
		setDay(d);
		setMonth(m);
		setYear(y);
	}

	Date(int m, int y)
	{
		day = 1;
		setMonth(m);
		setYear(y);
	}

	~Date()
	{
		cout << "destructor exceted!!!" << endl;
	}

	void setDay(int d)
	{
		if (d >= 1 && d <= 31)
		{
			day = d;
		}
		else
		{
			day = 1;
		}
	}

	void setMonth(int m)
	{
		if (m >= 1 && m <= 12)
		{
			month = m;
		}
		else
			month = 1;
	}

	void setYear(int y)
	{
		if (y >= 1900)
		{
			year = y;
		}
		else
			year = 1900;
	}

	int getDay() const
	{
		return day;
	}

	int getYear() const
	{
		return year;
	}

	int getMonth() const
	{
		return month;
	}

	

	Date operator++()
	{

		if (day == 31)
		{
			day = 1;
			if (month == 12)
			{
				month = 1;
				year++;
			}
			else
			{
				month++;
			}
		}
		else
		{
			day++;
		}
		return *this;
	}

	Date operator++(int te)
	{
		Date temp(day, month, year);
		
		if (day == 31)
		{
			day = 1;
			if (month == 12)
			{
				month = 1;
				year++;
			}
			else
			{
				month++;
			}
		}
		else
		{
			day++;
		}

		return temp;
	}
	
	Date operator--()
	{
		
		if (day == 1)
		{
			day = 31;
			if (month == 1)
			{
				month = 12;
				year--;
			}
			else
			{
				month--;
			}
		}
		else
		{
			day--;
		}
		


		return *this;
	}

	Date operator--(int te)
	{
		

		Date temp(day, month, year);
		
		if (day == 1)
		{
			day = 31;
			if (month == 1)
			{
				month = 12;
				year--;
			}
			else
			{
				month--;
			}
		}
		else
		{
			day--;
		}

		return temp;
	}

	int operator - (const Date& ob) const
	{

		int temp = 1;

		if (this->month == ob.month)
		{
			temp = day - ob.day;
			if (temp < 0)
			{
				temp = temp * -1;
			}
			return temp;
		}
		else
		{
			int count = month - ob.month;
			if (count < 0)
				count = count * -1;
			count = count * 31;
			temp = day - ob.day;
			if (temp < 0)
			{
				temp = temp * -1;
			}
			temp = temp + count;
			return temp;
		}

	}

	bool operator+()const
	{
		return ((day == 5 && month == 2) || (day == 23 && month == 3) || (day == 1 && month == 5) || (day == 14 && month == 7) || (day == 9 && month == 11) || (day == 25 && month == 12));
	}

	friend ostream& operator << (ostream& put, const Date &ob);

	friend istream& operator>> (istream& in, Date & ob);

private:

	int day, month, year;

};

ostream& operator << (ostream& put, const Date& ob)
{
	if (ob.month == 1)
	{
		put << "Jan " << ob.day << ", " << ob.year << endl;
	}
	else if (ob.month == 2)
	{
		put << "Feb " << ob.day << ", " << ob.year << endl;
	}
	else if (ob.month == 3)
	{
		put << "March " << ob.day << ", " << ob.year << endl;
	}
	else if (ob.month == 4)
	{
		put << "April " << ob.day << ", " << ob.year << endl;
	}
	else if (ob.month == 5)
	{
		put << "May " << ob.day << ", " << ob.year << endl;
	}
	else if (ob.month == 6)
	{
		put << "June " << ob.day << ", " << ob.year << endl;
	}
	else if (ob.month == 7)
	{
		put << "July " << ob.day << ", " << ob.year << endl;
	}
	else if (ob.month == 8)
	{
		put << "August " << ob.day << ", " << ob.year << endl;
	}
	else if (ob.month == 9)
	{
		put << "Sep " << ob.day << ", " << ob.year << endl;
	}
	else if (ob.month == 10)
	{
		put << "Oct " << ob.day << ", " << ob.year << endl;
	}
	else if (ob.month == 11)
	{
		put << "Nov " << ob.day << ", " << ob.year << endl;
	}
	else if (ob.month == 12)
	{
		put << "Dec " << ob.day << ", " << ob.year << endl;
	}

	return put;
}

istream& operator>> (istream& in, Date & ob)
{

	char temp;
	cout << "Date format\t dd/mm/yyyy" << endl;
	in >> ob.day >> temp >> ob.month >> temp >> ob.year;

	ob.setDay(ob.day);
	ob.setMonth(ob.month);
	ob.setYear(ob.year);

	return in;
}


int main()

{
	
	Date ob1(31,12,2001), ob2(22,1,1950);


	//cin >> ob1 >> ob2;
	//ob2--;
	//ob1++;
	//
	//cout << ob1<<ob2;
	

	Date ob3(1, 1, 2000);
	cout << ob3;
	cout << ob3--;
	cout << ob3;

	return 0;

}