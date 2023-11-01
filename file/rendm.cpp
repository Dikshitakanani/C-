#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int max = 100;
    int min = 203;
    int r ;
    r = min + rand() % (max -  min + 1);
    cout<<"rendom number --> "<<r<<endl;

    return 0;
}