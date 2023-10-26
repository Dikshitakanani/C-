#include<iostream>
using namespace std;
class base1
{
        public:
		int n;
};
class base2 
{
        public:
        int i;
};
class Derived :  public base1 , public base2
{
   public:
     void setB()
        {
            cout<<"Enter value of n--> ";
            cin>>n;
            for(int i=0; i<=n; i++)
			{
				cout<<" squre of  is : "<<(i*i*i)<<endl;
			}
        }

};
int main()
{
   Derived d;
   d.setB();
}