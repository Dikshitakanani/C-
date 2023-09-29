#include<iostream>

void Pattern()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            std::cout << " " << i << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    Pattern();
    return 0;
}