#include<iostream>
using namespace std;

class abc
{
    public:
    
      int a,b;

      abc()
      {
         int a = 10, b = 20;

         cout<<a+b<<endl;
         cout<<a<<endl;
      }

    void fun1()
    {
        cout << "Hello"<<endl;
    }
};

int main()
{
    abc a1;
    a1.fun1();
}