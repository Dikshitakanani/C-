#include<iostream>

int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int showArray(int a)
{
    std::cout << arr[a] << ", ";
    if (a == 9)
    {
        return 0;
    }
    return showArray(++a);
}

int main()
{
    showArray(0);
}
