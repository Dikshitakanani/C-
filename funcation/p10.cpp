#include<iostream>

void IFfunction()
{
    int a;
    std::cout << "Enter Any Nomber :";
    std::cin >> a;
    if(a%15==0)
    {
        std::cout << "its divisible by 5 and 3" << std::endl;
    }
    else
    {
        std::cout << "its not divisible by 5 and 3" << std::endl;
    }
}

int main()
{
    IFfunction();
    return 0;
}
