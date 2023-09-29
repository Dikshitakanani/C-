#include<iostream>

int main()
{
    int a[3][3], i, j, k=1;
    for(i=0; i < 3; i++)
    {
        for(j=0; j <3; j++)
        {
            a[i][j]=k;
            k++;
        }
    }
    for(i=0; i <3; i++)
    {
        for(j=0; j < 3; j++)
        {
            std::cout << a[j][i] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
