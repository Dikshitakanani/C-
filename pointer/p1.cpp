#include<iostream>

int main()
{
    int a=10, *p;
    p=&a;
    std::cout << "value of a is : " << a << std::endl;
    std::cout << "Address of a is : " << &a << std::endl;
    std::cout << "Address of a in p is : " << p << std::endl;
    std::cout << "Address of p is : " << &p << std::endl;
    std::cout << "value of a in p is : " << *p;
}
