#include<iostream>

void IFfunction()
{
    float a;
    std::cout << "Enter possitive or negative value :";
    std::cin >> a;
    if (0<a)
    {
        std::cout << "Positive value" << std::endl;
    }
    else
    {
        std::cout << "negative value" << std::endl;
    }
}

int main()
{
    IFfunction();
    return 0;
}