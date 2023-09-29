#include<iostream>

int main()
{
    int a[3][3], i, j;
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            if(i == j)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            std::cout << a[j][i] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
