#include<iostream>

int data(int c, int d, char r)
{
    std::cout << "value of c is : " << c << std::endl;
    std::cout << "value of d is : " << d << std::endl;
    std::cout << "value of r is : " << r << std::endl;
    return 45;
}

int main()
{
    int a;
    a = data(5, 10, 'A');
    data(10, 15, 'B');
    std::cout << "Value of main a is : " << a;
    return 0;
}
