#include<iostream>
using namespace std;

int main()
{
   int eng[5], guj[5], stat[5], total[5], per[5];
   int i;
   char grade[5];
   for(i=0; i < 5; i++)
   {
      cout << "\nEnter " << i+1 << " students marks ---->\n";
      cout << "\nEnter English marks : ";
      cin >> eng[i];
      cout << "\nEnter Gujrati marks : ";
      cin >> guj[i];
      cout << "\nEnter stat marks : ";
      cin >> stat[i];
      total[i] = eng[i] + guj[i] + stat[i];
      per[i] = (total[i] * 100) / 300;
   }
   cout << "\nNo.\teng\tguj\tstat\ttotal\tper\tgrade\t\n";
   for(i=0; i < 5; i++)
   {
      cout << "\n" << i+1 << "\t" << eng[i] << "\t" << guj[i] << "\t" << stat[i] << "\t" << total[i] << "\t" << per[i] << "\t";
      if(per[i] <= 35)
      {
         cout << "fail";
      }
      else if(per[i] >= 90)
      {
         cout << " Grade A ";
      }
      else if(80 <= per[i] && per[i] < 90)
      {
         cout << " Grade B ";
      }
      else if(per[i] >= 70 && per[i] < 80)
      {
         cout << " Grade C ";
      }
      else if(60 <= per[i] && per[i] < 70)
      {
         cout << " Grade D ";
      }
      else
      {
         cout << " Grade E ";
      }
   }
   return 0;
}
