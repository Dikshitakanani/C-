#include<iostream>

void Whileloop()
{
    int a=65;
    while(a<=90)
    {
        std::cout << " " << static_cast<char>(a) << "  ";
        a+=2;
    }
}

int main()
{
    Whileloop();
    return 0;
}
