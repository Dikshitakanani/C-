#include <iostream>

int main()
{
   float a;
   std::cout << "Enter positive or negative value: ";
   std::cin >> a;
   
   if (a > 0)
   {
      std::cout << "It's a positive value";
   }
   else
   {
      std::cout << "It's a negative value";
   }
   
   return 0;
}
