#include<iostream>

int array()
{
    int a[10], i, sum = 0;
    for(i = 0; i < 10; i++)
    {
        std::cout << "enter value [" << i+1 << "] : ";
        std::cin >> a[i];
    }
    for(i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    std::cout << "sum is : " << sum << " ";
    return 0;
}

int main()
{
    array();
}
