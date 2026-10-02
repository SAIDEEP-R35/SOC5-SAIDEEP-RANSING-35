#include<iostream>
using namespace std;
class employee

{
    private:
    string name;
    int empid;
    float basic_sal;
    float bonus;
    float total_sal;
    public:

employee()
{
    name="unknown"; 
    empid= 0;
    basic_sal= 0;
    bonus= 0;
    total_sal= 0;
}

employee(string n,int id,float s,float b)
{
    name=n;
    empid=id;
    basic_sal=s;
    bonus=b;
    total_sal=0;
}
float calculate()
{
    total_sal= basic_sal+bonus;
    return total_sal;
}

void display()
 {
    cout<<"Name: "<<name<<endl;
    cout<<"Employee ID: "<<empid<<endl;
    cout<<"Basic Salary: "<<basic_sal<<endl;
    cout<<"Bonus: "<<bonus<<endl;
    calculate();
    cout<<"Total Salary: "<<total_sal<<endl;
 }
};
int main()
{
    employee e1;
    e1.display();
    employee e2("John", 1234, 150000, 30000);
    e2.display();
    return 0;
}
