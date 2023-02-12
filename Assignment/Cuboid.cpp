#include<iostream>
#include <string>
using namespace std;

class Cuboid
{
public:

	/*Constructors*/
	Cuboid()
	{
		height = 1;
		width = 1;
		depth = 1;
	}

	Cuboid(float h1, float w1)
	{
		setHeight(h1);
		setWidth(w1);
		depth = 1;
	}

	Cuboid(float h1, float w1, float d1)
	{
		setHeight(h1);
		setWidth(w1);
		setDepth(d1);
	}

	Cuboid(Cuboid &obj)
	{
		height = obj.height;
		width = obj.width;
		depth = obj.depth;
	}

	/*Desrtuctor*/
	~Cuboid()
	{
		cout << "destructor runs" << endl;
	}

	/*mutator*/

	void setHeight(float h1)
	{
		if (h1 > 0 && h1 < 35)
		{
			height = h1;
		}
		else
		{
			height = 1;
		}
	}
	
	void setWidth(float w1)
	{
		if (w1 > 0 && w1 < 35)
		{
			width = w1;
		}
		else
		{
			width = 1;
		}
	}
	
	void setDepth(float d1)
	{
		if (d1 > 0 && d1 < 35)
		{
			depth = d1;
		}
		else
		{
			depth = 1;
		}
	}

	/*Accesssor*/

	float getHeight()
	{
		return height;
	}

	float getWidth()
	{
		return width;
	}

	float getDepth()
	{
		return depth;
	}

	/*member functions*/

	void setCuboid(float h1, float w1, float d1)
	{
		setHeight(h1);
		setWidth(w1);
		setDepth(d1);
	}

	void getCuboid()
	{
		float h, w, d;

		cout << "Enter the height of cuboid: ";
		cin >> h;
		setHeight(h);

		cout << "Enter the width of cuboid: ";
		cin >> width;
		setWidth(w);

		cout << "Enter the depth of cuboid: ";
		cin >> depth;
		setDepth(d);

	}

	void putCuboid(float h1, float w1, float d1)
	{
		cout << h1 << "\t\t" << w1 << "\t\t" << d1 << endl;
	}

	float getSurfaceArea()
	{
		return (2 * (height * width)) + (2 * (height * depth)) + (2 * (depth * width));
	}

	float getVolume()
	{
		return height * width * depth;
	}

	float getSpaceDiagonal()
	{
		return sqrt((height * height) + (width * width) + (depth * depth));
	}

	void putCuboidInfo()
	{
		cout << "height = " << height << endl;
		cout << "width = " << width << endl;
		cout << "depth = " << depth << endl;
		cout << "Surface area = " << getSurfaceArea() << endl;
		cout << "Volume = " << getVolume() << endl;
		cout << "space diagonal = " << getSpaceDiagonal() << endl;
	}

private:

	float height, width, depth;

};



int main()
{

	Cuboid obj1(2.2, 2.2, 2.2);
	obj1.putCuboidInfo();


	Cuboid obj2;
	obj2.setHeight(2.2);
	obj2.setWidth(2.2);
	obj2.setDepth(2.2);


	cout<<"\nvalue: "<< obj2.getHeight();
	cout<<"\nvalue: "<< obj2.getWidth();
	cout<<"\nvalue: "<< obj2.getDepth();
	cout<<"\nvalue: "<< obj2.getSurfaceArea();
	cout<<"\nvalue: "<< obj2.getVolume();
	cout<<"\nvalue: "<< obj2.getSpaceDiagonal();

	cout << endl;
	return 0;
}