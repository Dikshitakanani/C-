// write a program to return greatest value among three variables using template.
//( it must work with different datatypes)
#include<iostream>
using namespace std;

template <class  T1, class T2, class T3>
T1 value(T1 a, T2 b, T3 c)
{
    a>b? a>c?cout<<"A is Big -- > " : " C is Big --> ": b>c? "B is Big": "C is Big";

}

int main()
{
    int a,c;
    double b;

    cout<<"Enter value of A --> ";
    cin>>a;
    cout<<"Enter value of B --> ";
    cin>>b;
    cout<<"Enter value of C --> ";
    cin>>c;
    value(a,b,c);

}