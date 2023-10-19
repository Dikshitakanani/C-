#include<iostream>
using namespace std;

class rectangle
{


    int lenght, height;;

    public:

    rectangle()
    {
        int l=lenght, h=height;

         cout<<"Enter L = ";
         cin>>l;
         cout<<"Enter H = ";
         cin>>h;

         cout << l*h<<endl;
         cout << 2*(l+h)<<endl;
    }

    
};
int main()
{
    rectangle a1;

}