#include<iostream>
using namespace std;

class Rectangle
{
	private:
	float l,b;
	
	public:
	void getdata()
	{
		cout<<"Length of the Rectangle: ";
		cin>>l;
		cout<<"Breadth of the Rectangle: ";
		cin>>b;
	}

	float area();
	float perimeter();

	void display()
	{
		cout<<"Area of the Rectangle is: "<<area()<<endl;
		cout<<"Perimeter of the Rectangle is: "<<perimeter()<<endl;
	}
};

	float Rectangle::area()
	{
		return l*b;
	}
	
	float Rectangle::perimeter()
	{
		return 2*(l+b);
	}


int main()
{
	
  Rectangle r;
  r.getdata();
  r.display();
 return 0;
}
