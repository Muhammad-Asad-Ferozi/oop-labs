#include<iostream>
using namespace std;

class Circle
{
public:

	//parameterized constructor
	Circle(int x, int y, float radius)
	{
		setX(x);
		setY(y);
		setRadius(radius);
	}

	Circle(int x, int y)
	{
		setX(x);
		setY(y);
		this->radius = 5;
	}

	Circle(int x, float radius)
	{
		setX(x);
		this->y = 0;
		setRadius(radius);
	}


	//Default constructor
	
	Circle()
	{
		this->x = 0;
		this->y = 0;
		this->radius = 5;
	}

	//copy constructor

	Circle(const Circle& obj)
	{
		this->x = obj.x;
		this->y = obj.y;
		this->radius = obj.radius;
	}

	//destructor

	~Circle()
	{
		cout << "Destructor Excecuded..." << endl;
	}

	//setters

	void setX(int x)
	{
		if (x >= -50 && x <= 50)
			this->x = x;
		else
			this->x = 0;
	}
	
	void setY(int y)
	{
		if (y >= -50 && y <= 50)
			this->y = y;

		else
			this->y = 0;
	}

	void setRadius(float radius)
	{
		if (radius >= 1 && radius <= 10)
		{
			this->radius = radius;
		}
		else
			this->radius = 5;
	}

	//getters

	int getX() const
	{
		return this->x;
	}

	int getY() const
	{
		return this->y;
	}

	float getRadius() const
	{
		return this->radius;
	}

	//Member fuctions

	void setCircle(int x, int y, float radius)
	{
		setX(x);
		setY(y);
		setRadius(radius);
	}

	void getCircle()
	{
		int x, y;
		float ra;

		cout << "ENter the x coordinate: ";
		cin >> x;
		cout << "Enter the y coordinate: ";
		cin >> y;
		cout << "ENter the radius: ";
		cin >> ra;

		setX(x);
		setY(y);
		setRadius(ra);

	}

	void putCircle() const
	{
		cout << "x = " << this->x << "\ty = " << this->y << "\tradius = " << this->radius << endl;
	}

	double getArea() const
	{
		return (Circle::PI)*(this->radius * this->radius);
	}

	int getDiameter() const
	{
		return this->radius * 2;
	}

	double getCircumference() const
	{
		return PI * 2 * radius;
	}

	Circle addCircle(const Circle& ob) const
	{
		
		return Circle(this->x + ob.x, this->y + ob.y, this->radius + ob.radius);
	}

	bool isEqual(const Circle & ob) const
	{
		if (this->x == ob.x && this->y == ob.y && this->radius == radius)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int findCircle(Circle ob[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			if (ob[i].isEqual(*this))
			{
				return size;
			}
		}

		return -1;
	}

	void updateCircle(Circle ob[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			if (ob[i].isEqual(*this))
			{
				ob[i].radius = this->radius;
				ob[i].x = this->x;
				ob[i].y = this->y;
			}
		}
	}

	static const double PI;

private:

	int x;
	int y;
	float radius;

};

const double Circle::PI = 3.141593;


int main()
{
	//decleration of variable
	Circle obj1(2, 3,7);
	Circle obj3(-100, 14, 11);
	obj3.putCircle();
	Circle obj2(2, 4, 9);
	obj2.putCircle();
	Circle added = obj1.addCircle(obj3);
	cout << "Aded circle: ";
	added.putCircle();

	Circle a[5] = { Circle(1,2,3),Circle(2,4,3) ,Circle(0,0,0) ,Circle(2,8,9) ,Circle(2,10,9) };
	cout <<endl<< obj2.findCircle(a, 5) << endl;
	for (int i = 0; i < 5; i++)
	{
		a[i].putCircle();
	}
	cout << "\nAfter Calling Update Object: ";
	obj2.updateCircle(a, 5);
	for (int i = 0; i < 5; i++)
	{
		a[i].putCircle();
		cout << "area=" << a[i].getArea();
		cout << "\tcircumference=" << a[i].getCircumference();
		cout << "\t diameter=" << a[i].getDiameter() << endl;
	}


	//calculation



	//showing results

	return 0;
}