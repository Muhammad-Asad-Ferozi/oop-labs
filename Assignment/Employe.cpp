#include<iostream>
using namespace std;


class Employee
{
public:

	//Constructors

	Employee(string name1, int id1,string department1, string position1)
	{
		name = name1;
		id = id1;
		department = department1;
		position = position1;
	}

	Employee(string name1, int id1)
	{
		name = name1;
		id = id1;
		department = "";
		position = "";
	}

	Employee()
	{
		name = "";
		id = 0;
		department = "";
		position = "";
	}

	Employee(Employee &obj)
	{
		name = obj.name;
		id = obj.id;
		department = obj.department;
		position = obj.position;
	}

	//destructor
	~Employee()
	{
		cout << "Dectructor exceuted" << endl;
	}
	
	//property method SET

	void setName(string n1)
	{
		name = n1;
	}

	void setId(int id1)
	{
		id = id1;
	}

	void setDepartment(string n1)
	{
		department = n1;
	}
	
	void setPosition(string n1)
	{
		position = n1;
	}


	//property method GET

	string getName()
	{
		return name;
	}

	int getId()
	{
		return id;
	}

	string getDepartment()
	{
		return department;
	}

	string getPosition()
	{
		return position;
	}


	//member function

	void setinfo(string name1, int id1, string department1, string position1)
	{
		name = name1;
		id = id1;
		department = department1;
		position = position1;
	}

	void getinfo()
	{
		string name1, department1, position1;
		int id1;

		cout << "ENter the name of Employee: ";
		cin >> name1;

		cout << "ENter the ID of Employee: ";
		cin >> id1;

		cout << "ENter the department of Employee: ";
		cin >> department1;

		cout << "ENter the position of Employee: ";
		cin >> position1;


		name = name1;
		id = id1;
		department = department1;
		position = position1;
	}

	void putinfo()
	{
		cout << name << "\t" << id << "\t" << department << "\t" << position << endl;
	}

private:
	string name;
	int id;
	string department;
	string position;
};



int main()
{
	//decleration of objects

	Employee em1;
	em1.setName("Naveed Ali");
	em1.setId(1230);
	em1.setDepartment("Computer Science");
	em1.setPosition("A.P");

	Employee em2("Nouman Abdullah", 1231, "Softwere Enginner", "Lecturer");
	Employee em3("Asad Ferozi", 536, "Full stack devopler", "CEO");
	Employee em4("Naeem Ahmed", 1241, "Computer science", "Lecturer");
	Employee em5("Nadia Waheed", 1242, "Information technology", "A.S");


	em1.putinfo();
	em2.putinfo();
	em3.putinfo();
	em4.putinfo();
	em5.putinfo();



	return 0;
}