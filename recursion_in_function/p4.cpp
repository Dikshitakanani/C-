#include <iostream>

int largestno(int arr[], int num)
{
    int v = arr[0];
    for (int i = 1; i < num; i++)
    {
        if (v < arr[i])
        {
            v = arr[i];
        }
    }
    return v;
}

int smallestno(int arr[], int num)
{
    int j = arr[0];
    for (int i = 1; i < num; i++)
    {
        if (j > arr[i])
        {
            j = arr[i];
        }
    }
    return j;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int largest = largestno(arr, 10);
    int smallest = smallestno(arr, 10);
    std::cout << "Largest Number : " << largest << std::endl;
    std::cout << "Smallest Number : " << smallest << std::endl;
    return 0;
}
