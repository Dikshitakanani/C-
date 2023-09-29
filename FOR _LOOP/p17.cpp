#include<iostream>

int main()
{
    int a,b=1;
    for(a=1; a<=200; a*=2)
    {
        std::cout<<a*b<<"\t";
        b++;
    }
    return 0;
}