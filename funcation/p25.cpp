#include<iostream>

void Pattern()
{
    for(int i=1; i<=10; i+=2)
    {
        for(int j=1; j<=10; j+=2)
        {
            std::cout << " " << i << "  ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    Pattern();
    return 0;
}
