#include<iostream>

void IFfunction()
{
    int age;
    std::cout << "Enter your Age :";
    std::cin >> age;
    if(age>18)
    {
        std::cout << "eligible for voting" << std::endl;
    }
    else
    {
        std::cout << "not eligible for voting" << std::endl;
    }
}

int main()
{
    IFfunction();
    return 0;
}