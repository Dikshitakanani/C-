#include<iostream>
using namespace std;

int main()
{    
    int g,h,i;
    for(g=1; g<=5; g++)
    {
        for(i=1; i<=g; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(h=4; h>=1; h--)
    {
        for(i=1; i<=h; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}