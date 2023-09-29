#include <iostream>
#include <cstring>

int main()
{
    char a[50], b[50], c[100];
    int j, i, r = 0;
    std::cout << "Enter First string value: ";
    std::cin >> a;
    std::cout << "\nEnter Second string value: ";
    std::cin >> b;
    for (j = 0; a[j] != '\0'; j++)
    {
        c[j] = a[j];
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        c[j] = b[i];
        j++;
    }
    c[j] = '\0';
    std::cout << "\nRe String is: " << c;
    return 0;
}
