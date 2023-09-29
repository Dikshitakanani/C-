#include<iostream>

int main()
{
    char a;
    for(a='A'; a<='Z'; a+=2)
    {
        std::cout<<a<<"\t";
    }
    return 0;
}