#include<iostream>

void Forloop()
{
     char a;
	for(a='A'; a<='Z'; ++a)
	{
		std::cout << a << " :";
	}
}

int main()
{
    Forloop();
    return 0;
}