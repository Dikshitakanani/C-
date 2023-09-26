#include <iostream>

int main()
{
    int a, b;
    std::cout << "enter A: ";
    std::cin >> a;
    std::cout << "enter B: ";
    std::cin >> b;
    if (a < b)
    {
        std::cout << "A is the smallest number." << std::endl;
    }
    else
    {
        std::cout << "A is not the smallest number." << std::endl;
    }
    return 0;
}
