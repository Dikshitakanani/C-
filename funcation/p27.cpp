#include<iostream>
using namespace std;

void WPattern()
{
    int a=5,b;
    while(a>=1)
    {
        b=a;
        while(b<=5)
        {
            cout << b << " ";
            b++;
        }
        cout << endl;
        a--;
    }
}

int main()
{
    WPattern();
    return 0;
}