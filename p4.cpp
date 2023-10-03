#include<iostream>
using namespace std;

class person
{

    private:

        int age;
        string name;
        string city;

    public:

       void setage(int a)
       {
           age=a;
       }
       void setname(string n)
       {
            name=n;
       }
       void setcity(string c)
       {
            city=c;
       }
       void getage()
       {
            cout <<"Age : "<<age << endl;
       }
       void getname()
       {
            cout <<"Name : "<< name << endl;
       }
       void getcity()
       {
            cout <<"City : "<< city << "\n";
       }
};       

int main()
 {

    person p1;
    p1.setage(17);
    p1.setname("Dikshita");
    p1.setcity("surat");

    p1.getage();
    p1.getcity();
    p1.getname();
    return 0;
 }   
