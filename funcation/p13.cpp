#include<iostream>

void Forloop()
{
    int a,n;
    std::cout << " Enter any value : ";
    std::cin >> n;
 	for(a=1;  a<=n; a++)
	{
		std::cout << " N is : " << a << std::endl;
	}
}

int main()
{
    Forloop();
    return 0;
}
