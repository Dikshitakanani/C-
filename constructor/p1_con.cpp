#include<iostream>
using namespace std;

class cricle
{


    int redius;

    public:

    cricle()
    {
         int r = redius;

         cout<<"Enter R = ";
         cin>>r;

         cout << 3.14*r*r<<endl;
         cout << 2*3.14*r<<endl;

    }

    
};
int main()
{
    cricle a1;

}