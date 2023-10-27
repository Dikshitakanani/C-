// write a program that returns sum of an elements of an array usnig template.
#include <iostream>
using namespace std;

template <class  T1, class T2>
T1 value(T1 a, T2 b)
{
    cout<<" Sum is --> "<<a+b;
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

//( it must with different datatypes of an array)