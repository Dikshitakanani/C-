#include <iostream>

int main()
{
    int num;
    int a = 1;
    std::cout << "Enter number: ";
    std::cin >> num;
    switch (num)
    {
        case 1 + 6:
            std::cout << "user enter 1 value";
            break;
        case 'A':
            std::cout << "user enter 2 value";
            break;
        case 12:
            std::cout << "user enter 3 value";
            break;
        case 4:
            std::cout << "user enter 4 value";
            break;
        default:
            std::cout << "user enter wrong value";
            break;
    }
    return 0;
}
