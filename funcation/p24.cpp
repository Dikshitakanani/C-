#include<iostream>

void Pattern()
{
    for(int i=65; i<=69; i++)
    {
        for(int j=65; j<=69; j++)
        {
            std::cout << " " << char(i) << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    Pattern();
    return 0;
}
