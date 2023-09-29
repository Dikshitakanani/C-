#include<iostream>
using namespace std;
void arr(string str, string str1, int i, int j, int length)
{
    for(i=0 ; i<str.length(); i++)
    {
        length=i;
    }
    for(i=length; i>=0; i--)
    {
        str1[j]=str[i];
        j++;
    }
    cout << "str";
}
int main()
{
    int i,j=0,length;
    string str,str1;
    cout << "enter str value:";
    cin >> str;
    arr(str,str1,i,j,length);
}