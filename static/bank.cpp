#include<iostream>
using namespace std;

class bankAC
{
    public:

    int amt;
    int d;
    int w;
    static int total;

    bankAC(int b)
    {
        amt = b;
        total += amt;
    }
    void withdraw(int a)
    {
        w =a;
        amt -= w;
        total -= w;
        cout<<"amount -->"<<amt<<endl;
    }
    void deposit(int c)
    {
        d = c;
        amt += d;
        total += d;
    }
    static void totalBal()
    {
        cout<<" total balance is -->"<<total;
    }
};

int bankAC :: total = 0; 
int main()
{
    bankAC b1(1000);
    bankAC b2(2000);

    b1.deposit(1000);
    b2.withdraw(500);

    bankAC :: totalBal();



}