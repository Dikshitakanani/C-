// MultiLevel Inheritence

#include<iostream>
using namespace std;
class base1
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
class base2 : public base1
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
class Derived : public base2
{
    public:
    void product()
    {
        cout<<"product of a and b is :"<<a*b<<endl;
    }
};
int main()
{
    Derived d;
    d.setA();
    d.setB();
    d.product();
}

//  fibonacci seris