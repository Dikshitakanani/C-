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
        total = TOTAL();
        per = PER();
        cout <<"TOTAL IS : "<<total << endl;
        cout <<"PER is: "<<per << endl;
    }

            int TOTAL()
            {
                   
                total = dpa+cppm+maths+ic;
                //cout <<"TOTAL IS : "<<total << endl;
                return total;
            }
            int  PER()
            {
                per = total/4;
                   // cout <<"PER is: "<<per << endl;
                    return per;
            }

            ~student()
            {
                cout<<"student ---> "<<name  <<"  destructor is called "<<endl;
            }

            void showdata()
            {
                cout <<"\nStudent Name : " << name;
                cout <<"\nName\tDPA\tCPPM\tMATHS\tIC\tTOTAL\tPER";
                cout << "\n"<< name << "\t" << dpa << "\t" << cppm << "\t" << maths << "\t" << ic << "\t" << total << "\t" << per<<endl;

            }
};
int main()
{
    student s1,s2;

    s1.TOTAL();
    s1.PER();
    s2.TOTAL();
    s2.PER();

    s1.showdata();
    s2.showdata();
}

// out put
/*
student name = Bhavik
DPA : 95
CPPM : 85
MATHS : 75
IC : 97
TOTAL IS : 352
PER is: 88
student name = Darshan
DPA : 75
CPPM : 85
MATHS : 67
IC : 95
TOTAL IS : 322
PER is: 80

Student Name : Bhavik
Name    DPA     CPPM    MATHS   IC      TOTAL   PER
Bhavik  95      85      75      97      352     88

Student Name : Darshan
Name    DPA     CPPM    MATHS   IC      TOTAL   PER
Darshan 75      85      67      95      322     80
student ---> Darshan  destructor is called
student ---> Bhavik  destructor is called
*/