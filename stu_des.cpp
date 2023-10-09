#include<iostream>
using namespace std;

class student
{
    public:

    int dpa,cppm,maths,ic,total,per;
    string name;

    student()
    {
        cout<< "student name = ";
        cin>>name;
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

            ~student()
            {
                cout<<"student ---> "<<name<<"destructor is called "<<endl;
            }
};
int main()
{
    student s1,s2;

    s1.TOTAL();
    s1.PER();
    s2.TOTAL();
    s2.PER();
}