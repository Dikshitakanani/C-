#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  int i;
  cout << "Enter value: ";
  getline(cin, str);
  for(i=0; i<str.length(); i++)
  {
    cout << "char is : " << str[i] << endl;
  }
  cout << "Length is : " << i;
  return 0;
}
