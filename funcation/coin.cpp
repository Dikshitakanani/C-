#include <iostream>

int add(int amount)
{
    int a[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int p;
    for (int i = 0; i < 10; i++)
    {
        if (amount >= a[i])
        {
            p = amount / a[i];
            std::cout << "\n" << a[i] << " - " << p;
            amount = amount % a[i];
        }
    }
}

int main()
{
    int a[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int amount, p;
    std::cout << "enter amount:";
    std::cin >> amount;
    add(amount);
}
