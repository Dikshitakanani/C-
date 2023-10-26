#include<iostream>
using namespace std;
class base1
{
    public:
    int a,n=1;
};
class base2 : public base1
{
    public:
    int i;
};
class Derived : public base2
{
    public:
    void logic()
    {

         for(i=0; i<=15;  i=a)
        {
            a=n+i;
            cout<<" "<<a<<"\t";
            n=i;
            
        }
    }
};
int main()
{
   Derived d;
   d.logic(); 
}
