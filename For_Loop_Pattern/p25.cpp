#include<iostream>
using namespace std;

int main()
{    
    int x,y,z;
    for(x=1; x<=5; x++)
    {
        for(z=5; z>=x; z--)
        {
            cout << " ";
        }   
        for(y=1; y<=x; y++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
