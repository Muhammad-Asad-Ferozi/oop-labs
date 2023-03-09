#include"iostream"
#include"string"
using namespace std;

class Item
{
private:
	int id;
	string name;
	int quality;
	float cost;

public:

	//mutator
	void setId(int id)
	{
		if (id > 0)
		{
			this->id = id;
		}
		else
			this->id = 0;
	}

	void setQuality(int quality)
	{
		if (quality > 0)
		{
			this->quality = quality;
		}
		else
			this->quality = 0;
	}
	void setCost(int cost)
	{
		if (cost > 0)
		{
			this->cost = cost;
		}
		else
			this->cost = 0;
	}

	void setName(string name)
	{
		this->name = name;
	}

	//accessor
	int getId() const
	{
		return this->id;
	}

	int getQuality() const
	{
		return this->quality;
	}

	string getName() const
	{
		return this->name;
	}

	float getCost() const
	{
		return this->cost;
	}


	//constructor


	Item()
	{
		this->id = 0;
		this->name = "";
		this->quality = 0;
		this->cost = 0;
	}

	Item(int id, int quality, string name, float cost)
	{
		setId(id);
		setName(name);
		setQuality(quality);
		setCost(cost);
	}

	Item(int id, int quality, string name)
	{
		setId(id);
		setName(name);
		setQuality(quality);
		cost = 0;
	}

	Item(int id, string name, float cost)
	{
		setId(id);
		setName(name);
		setCost(cost);
		quality = 0;
	}

	Item(const Item & obj)
	{
		this -> id = obj.id;
		this->name = obj.name;
		this->quality = obj.quality;
		this->cost = obj.cost;
	}


	//Destructor
	~Item()
	{
		cout << "destructor"<<endl;
	}


	//Member function
	void setItem(int id, int quality, string name, float cost)
	{
		setId(id);
		setQuality(quality);
		setName(name);
		setCost(cost);
	}
	void getItem()
	{
		
		cout << "Enter the id: ";
		cin >> this->id;
		setId(this->id);
		cout << "Enter the name: ";
		cin.ignore();
		getline(cin, this->name);
		setName(this->name);
		cout << "Enter the Quality: ";
		cin >> this->quality;
		setQuality(this->quality);
		cout << "Enter the cost: ";
		cin >> this->cost;
		setCost(this->cost);
	}

	void putItem() const
	{
		cout << "Id = " << this->id << "\tName = " << this->name << "\tquality = " << this->quality << "\tcost = " << this->cost << endl;
	}

	float getTotalCost(const Item arr[], int size) const
	{
		float sum = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i].quality >= 1)
			{
				sum = sum + arr[i].cost;
			}
		}

		if (sum != 0)
		{
			return  sum;
		}
		else
		{
			return 0;
		}
	}

	bool isEqual(const Item& obj) const
	{
		return (this->id == obj.id) && (this->name == obj.name) && (this->quality == obj.quality) && (this->cost == obj.quality);
	}


	void updateName(Item arr[], int size) const
	{

		for (int i = 0; i < size; i++)
		{
			if (arr[i].id == this->id)
			{
				arr[i].name = this->name;
			}
		}

	}

	Item getMinimumCostitem(const Item arr[], int size) const
	{
		float minimum = arr[1].cost;
		for (int i = 1; i < size; i++)
		{
			if (arr[i].cost < minimum)
			{
				minimum = arr[i].cost;
			}
		}
		for (int  i = 0; i < size; i++)
		{
			if (arr[i].cost == minimum)
			{
				return arr[i];
			}
		}
	}

	void getAveragePrice(const Item arr[], int size) 
	{
		float sum=0;
		for (int i = 0; i < size; i++)
		{
			sum = sum + arr[i].cost;
		}
		this->cost = sum / size;		
	}


};


int main()
{
	Item obj;
	obj.getItem();
	obj.putItem();

	
	return 0;
}