#include <iostream>

int add(int Number)
{
    int rev = 0, a;
    while (Number != 0)
    {
        a = Number % 10;
        rev = rev * 10 + a;
        Number = Number / 10;
    }
    std::cout << " Revers is : " << rev;
}

int main()
{
    int num, a;
    std::cout << "enter Number:";
    std::cin >> num;
    a = add(num);
    return a;
}
