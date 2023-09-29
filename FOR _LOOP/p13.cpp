#include<iostream>

int main()
{
    int a;
    std::cout << "Enter one even number: ";
    std::cin >> a;
    for (a = 0; a <= 7; a += 2)
    {
        std::cout << "Number is: " << a << std::endl;
    }
    return 0;
}