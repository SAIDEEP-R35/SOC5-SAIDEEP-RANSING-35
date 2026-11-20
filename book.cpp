#include<iostream>
using namespace std;

class Book
{
	public:

	int book_id;
	string book_name;


	void display()
	{
		cout<<"The Book Name Is : "<<book_name<<endl;
		cout<<"The Book ID Is : "<<book_id<<endl;
	}


	Book(int b_id, string b_n)
	{
		book_id=b_id;
		book_name=b_n;
	}

	Book(Book &b)
	{
		book_id=b.book_id;
		book_name=b.book_name;
	}
};

int main()
{
	Book i(268, "Bleach");
	Book k(i);

	i.display();

	k.display();

	return 0;
}
