// static variable
#include<iostream>
using namespace std;
class car
{
    public:

    static int a;
    int i=0;

    car()
    {
        i++;
        a++;
    }

    void display()
    {
        cout << "display function call...."<< i << endl;
    }

    static void Display()
    {
        cout << "static function call...."<<a<<endl;
    }

};
int car :: a = 0;

int main()
{
    car c1;
    c1.display();
    c1.Display();

     car c2;
    c1.display();
    c1.Display();

     car c3;
    c1.display();
    c1.Display();

    cout<<"Number of object call is ... "<< car :: a<<endl;
}