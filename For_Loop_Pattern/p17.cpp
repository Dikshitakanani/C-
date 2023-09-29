#include<iostream>
using namespace std;

int main()
{
	int i,j,k=65;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
		   if(j%2==1)
		   {
			cout << char(k+32) << " ";
		   }	
		   else
		   {
			cout << char(k) << " ";	
		   }	
			k++;
		}
		cout << endl;
	}
	return 0;
}
