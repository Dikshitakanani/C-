#include<iostream>

void Forloop()
{
    char a;
	for(a=65; a<=90; a++)
	{
		std::cout << a << " = " << static_cast<int>(a) << "\t ";
	}    
}

int main()
{
    Forloop();
    return 0;
}
