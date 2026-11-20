#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
	public:
	string brand;
	string car_type;
	
	void getdata()
	{
		cout<<"Enter Brand name: ";
		cin>>brand;
		cout<<"Enter Car type: ";
		cin>>car_type;
	}
	void display()
	{
		cout<<"Brand name is: "<<brand<<endl;
		cout<<"Car type: "<<car_type<<endl;
	}
};

class Car:public Vehicle
{
	public:
	string name;
	float car_id;

	void getdata1()
	{
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Car ID: ";
		cin>>car_id;
	}

	void display1()
	{
		cout<<"Name is: "<<name<<endl;
		cout<<"Car ID: "<<car_id<<endl;
	}
};
class Electrical_car:public Vehicle
{
	public:
	string car_name;
	float car_id;

	void getdata2()
	{
		cout<<"Enter Name: ";
		cin>>car_name;
		cout<<"Enter Car ID: ";
		cin>>car_id;
	}

	void display2()
	{
		cout<<"Name is: "<<car_name<<endl;
		cout<<"Car ID: "<<car_id<<endl;
	}
};

int main()
{
	Car c;
	c.getdata();
	c.display();

	c.getdata1();
	c.display1();

	Electrical_car e;
	e.getdata();
	e.getdata2();

	e.display();
	e.display2();
return 0;
}
