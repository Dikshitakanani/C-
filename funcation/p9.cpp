
#include<iostream>

void IFfunction()
{
    int a;
    std::cout << "Enter Any year : ";
    std::cin >> a;
    if(a%4==0)
    {
        std::cout << "leap year" << std::endl;
    }
    else
    {
        std::cout << "not leap year" << std::endl;
    }
}

int main()
{
    IFfunction();
    return 0;
}
