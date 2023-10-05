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
      abc(string name)
      {
        cout<<"Hello"<<" "<<name;
      }
    
};

int main()
{
    abc a1;
    abc a2("sum");
    return 0;
}