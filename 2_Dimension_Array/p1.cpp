#include <iostream>

int main()
{
    int Arr[5][5], i, j, total = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            std::cout << "Enter Arr[" << i << "][" << j << "] =";
            std::cin >> Arr[i][j];
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            total += Arr[i][j];
            std::cout << Arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Total is : " << total << std::endl;
    return 0;
}
