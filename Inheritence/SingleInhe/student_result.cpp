// Student Result
#include<iostream>
using namespace std;
class base
{
    public:
    int dpa,cppm,maths,ic,total,per;
    void setDataA()
    {
        cout <<"DPA : ";
         cin>>dpa;
         cout <<"CPPM : ";
         cin>>cppm;
         cout <<"MATHS : ";
         cin>>maths;
         cout <<"IC : ";
         cin>>ic;

    }
};
class drived:public base
{
    public:

    void Total()
    {
                total = dpa+cppm+maths+ic;
                cout <<"TOTAL IS : "<<total << endl;    
    }
    void Per()
    {
        per = total/4;
        cout <<"PER IS : "<<per << endl;  
    }
               
};
int main()
{
    drived r;
    r.setDataA();
    r.Total();
    r.Per();
}