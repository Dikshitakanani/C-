#include<iostream>

void Pattern()
{
    for(int i=5; i>=1; i--)
    {
        for(int j=5; j>=1; j--)
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