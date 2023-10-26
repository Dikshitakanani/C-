// HIERARCHICAL_INHE...

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
    void Addition()
    {
        cout<<"Addition of a and b is : "<<a+b<<endl;
    }
};
class Derived2 : public base
{
    protected:
    int c;
    public:
    void setC()
    {
        cout<<"Enter C : ";
        cin>>c;    
    }
    void product()
    {
        cout<<"product of a and b is : "<<a*c<<endl;
    }
};
int main()
{
    Derived1 d1;
    d1.setA();
    d1.setB();
    d1.Addition();

    Derived2 d2;
    d2.setA();
    d2.setC();
    d2.product();
}

// factorial no table