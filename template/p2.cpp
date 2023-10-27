//1. write a program to return greatest value among pass arguments in a function using template.
//( be it int or double)
#include<iostream>
using namespace std;

template <class  T1, class T2>
T1 value(T1 a, T2 b)
{
    a>b?cout<<"A is Big -- > "<<a :cout<<" B is Big --> "<<b;

}
int main()
{
    int a;
    double b;

    cout<<"Enter value of A --> ";
    cin>>a;
    cout<<"Enter value of B --> ";
    cin>>b;
    value(a,b);

}