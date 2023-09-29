#include<iostream>
using namespace std;

void WPattern()
{
    int i=65,j,k=65;
    while(i<=69)
    {
        j=65;
        while(j<=i)
        {
            cout << char(k) << " ";
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}

int main()
{
    WPattern();
    return 0;
}