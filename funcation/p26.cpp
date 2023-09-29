#include<iostream>
using namespace std;

void WPattern()
{
    int i=1,j,k=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            cout << k%2 == 1 << " ";
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
