#include<iostream>
using namespace std;
class Array
{
    int a[5];
    public:
    void accept()
    {
        cout<<"enter 5 numbers:";
    for(int i=0; i<5; i++)
{ 
    cin>>a[i];

}
    }
void display()
{
    cout<<"4th number is:"<<a[3];
}
};
int main()
{
    Array ar;
    ar.accept();
    ar.display();
    return 0;
}
