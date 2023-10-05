#include<iostream>
using namespace std;

class triangle
{


    public:

    triangle()
    {
        int b,h;

         cout<<"Enter L = ";
         cin>>b;
         cout<<"Enter H = ";
         cin>>h;

         cout << 0.5*b*h<<endl;
         cout << 3*b<<endl;
    }

    
};
int main()
{
    triangle a1;

}