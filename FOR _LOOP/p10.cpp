#include<iostream>

int main()
{
    char a;
    for (a = 65; a <= 90; a++)
    {
        std::cout << a << " = " << static_cast<char>(a + 32) << "\t";
    }
    return 0;
}