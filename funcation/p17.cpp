#include<iostream>

void Whileloop()
{
    float i=0.5,n,j=0.5;
    std::cout << "enter n:";
    std::cin >> n;
    std::cout << j;
    while(i<=n)
    {
        j+=i*1;
        std::cout << "\n " << std::fixed << std::setprecision(2) << j;
        i++;
    }
}

int main()
{
    Whileloop();
    return 0;
}