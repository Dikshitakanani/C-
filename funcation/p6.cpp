#include<iostream>

void IFfunction()
{
    int a=50,b=60;
    std::cout << "Ans a = " << a << std::endl;
    std::cout << "Ans b = " << b << std::endl;
    if(a < b)
    {
        std::cout << "A is small..." << std::endl;
    }
    else
    {
        std::cout << "A is big..." << std::endl;
    }
}

int main()
{
    IFfunction();
    return 0;
}