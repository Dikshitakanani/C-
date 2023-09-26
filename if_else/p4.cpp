#include <iostream>

int main()
{
    int a;
    std::cout << "Enter Any Number: ";
    std::cin >> a;
    
    if (a % 15 == 0)
    {
        std::cout << "it's divisible by 5 and 3";
    }
    else
    {
        std::cout << "it's not divisible by 5 and 3";
    }
    
    return 0;
}
