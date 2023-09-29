#include<iostream>

int main()
{
    int a, sum = 0;
    std::cout << "First 10 numbers are: ";
    for (a = 1; a <= 10; a++)
    {
        sum = sum + a;
        std::cout << a << ", ";
    }
    std::cout << "\nThe sum is: " << sum << std::endl;
    return 0;
}
