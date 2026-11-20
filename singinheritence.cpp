#include<iostream>
#include<string>
using namespace std;

class Person
{
	public:
	string name;
	int age;
	
	void getdata()
	{
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Age: ";
		cin>>age;
	}
	void display()
	{
		cout<<"Name is: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
	}
};

class Student:public Person
{
	public:
	string roll_no;
	float marks;

	void getdata1()
	{
		cout<<"Enter roll no: ";
		cin>>roll_no;
		cout<<"Enter marks: ";
		cin>>marks;
	}

	void display1()
	{
		cout<<"Roll no is: "<<roll_no<<endl;
		cout<<"Marks: "<<marks<<endl;
	}
};

int main()
{
	Student s;
	s.getdata();
	s.display();

	s.getdata1();
	s.display1();
return 0;
}
