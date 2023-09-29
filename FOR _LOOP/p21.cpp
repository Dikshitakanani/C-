#include<iostream>

int main()
{
    char a;
    for(a=65; a<=90; a+=2)
    {
        if(a%4==1)
        {
            std::cout<<a<<"\t";
        }
        else
        {
            std::cout<<a+32<<"\t";
        }
    }
    return 0;
}
