#include <iostream>

int main()
{
    int Arr[3][3], i, j, total = 0, u, d, l;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cout << "Enter Arr[" << i << "][" << j << "] =";
            std::cin >> Arr[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            u = Arr[0][1] + Arr[0][2] + Arr[1][2];
            d = Arr[0][0] + Arr[1][1] + Arr[2][2];
            l = Arr[1][0] + Arr[2][0] + Arr[2][1];
            std::cout << Arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "upper triangle : " << u << "\n";
    std::cout << "diagonal elements total : " << d << "\n";
    std::cout << "lower triangle : " << l;
    return 0;
}
