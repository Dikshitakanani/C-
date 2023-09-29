#include<iostream>
using namespace std;

int main()
{    
    int d,e,f;
    for(d=1; d<=5; d++)
    {
        for(f=1; f<=d; f++)
        {
            cout << " *";
        }
        cout << endl;
    }
    for(e=4; e>=1; e--)
    {
        for(f=1; f<=e; f++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}