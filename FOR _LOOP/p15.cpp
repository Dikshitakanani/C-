#include<iostream>

int main()
{
    int a,b;
    std::cout<<"Enter a :";
    std::cin>>b;
    for(a=1; a<=b; a++)
    {
        if(a%2==1)
        {
            std::cout<<a<<"\t";
        }
        else
        {
            std::cout<<a*a<<"\t";
        }
    }
    return 0;
}