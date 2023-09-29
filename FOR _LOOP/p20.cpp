#include<iostream>

int main()
{
    float i,n,j=0.5;
    std::cout<<"enter n:";
    std::cin>>n;
    std::cout<<j;
    for(i=0.5;i<=n;i++)
    {
        j+=i*1;
        std::cout<<"\n "<<j;
    }
    return 0;
}