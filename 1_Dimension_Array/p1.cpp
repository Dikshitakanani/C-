#include<iostream>

int main()
{
    int a[] = {5, 4, 3, 2, 1};
    int b[] = {1, 2, 3, 4, 5};
    int i, j;
    std::cout << "Array 1 is :";
    for(i = 0; i < 5; i++)
    {
        std::cout << " a[" << i << "]\t";
    }
    std::cout << "\nArray 2 is :";
    for(j = 0; j < 5; j++)
    {
        std::cout << " b[" << j << "]\t";
    }
    return 0;
}
