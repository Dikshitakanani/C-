#include<iostream>
using namespace std;

class student
{
    public:

    int dpa,cppm,maths,ic,total,per;

    student()
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

            void TOTAL()
            {
                   
                total = dpa+cppm+maths+ic;
                cout <<"TOTAL IS : "<<total << endl;
                
            }
            void  PER()
            {
                per = total/4;
                    cout <<"PER is: "<<per << endl;
            
            }
};
int main()
{
    student s1;

    s1.TOTAL();
    s1.PER();


}