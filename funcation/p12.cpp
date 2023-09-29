#include<iostream>

void Forloop()
{
    int a;
    for(a=10;  a>=1; a--)
	{
		std::cout << "A : " << a << std::endl;
	}
}

int main()
{
    Forloop();
    return 0;
}