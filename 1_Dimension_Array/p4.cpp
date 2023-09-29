#include<iostream>

int main()
{
    int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int even = 0, odd = 0;
    for(i = 0; i < 20; i++)
    {
        if(i % 2 == 0)
        {
            even += i;
        }
        else
        {
            odd += i;
        }
    }
    std::cout << "sum of odd number: " << odd << std::endl;
    std::cout << "sum of even number: " << even << std::endl;
    return 0;
}
