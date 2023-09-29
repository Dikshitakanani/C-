#include<iostream>
using namespace std;

void WPattern()
{
    int i=5,j;
    while(i>=1)
    {
        j=5;
        while(j>=i)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i--;    
    }
}

int main()
{
    WPattern();
    return 0;
}
