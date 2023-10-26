// hybrid inheritance
#include <iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter A : ";
        cin>>a;
    }
};
class Derived1 : public base
{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"Enter B : ";
        cin>>b;
    }
};
class Derived2 
{
    protected:
    int c;
    public:
    void setC()
    {
        cout<<"Enter C : ";
        cin>>c;
    }
};
class test : public Derived1, public Derived2
{
    public:
    void product()
    {
        cout<<"Product of a, b and c is : "<<a*b*c<<endl;

    }
};
int main ()
{
    test t;
    t.setA();
    t.setB();
    t.setC();
    t.product();
}

