#include<iostream>

int main()
{
    char a;
    for (a = 65; a <= 90; a++)
    {
        std::cout << a << " = " << static_cast<int>(a) << "\t ";
    }
    return 0;
}