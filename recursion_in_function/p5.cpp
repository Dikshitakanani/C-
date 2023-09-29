#include<iostream>

int array()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int total = 0;
    for(int i = 0; i < 10; i++)
    {
        total += arr[i];
    }
    return total;
}

int main()
{
    int runningTotal = array();
    std::cout << "running total is: " << runningTotal << std::endl;
    return 0;
}
