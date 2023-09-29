#include<iostream>

int main()
{
    int a;
    std::cout << "Enter one odd number: ";
    std::cin >> a;
    for (a = 1; a <= 50; a += 2)
    {
        std::cout << "Number is: " << a << std::endl;
    }
    return 0;
}