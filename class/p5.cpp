#include<iostream>
using namespace std;

class student
{
   private:

    int dpa,cppm,maths,ic,total,per;
    

   public:

   void setdpa(int d)
   {
        dpa=d;
   }
   void setcppm(int c)
   {
        cppm=c;
   }
   void setmaths(int m)
   {
        maths=m;
   }
   void setic(int i)
   {
        ic=i;
   }
   void settotal(int t)
   {
        total=t;
        t = total;
   }
   void setper(int p)
   {
        per = p;
        p = per;
   }
   void getdpa()
   {
       cout <<"DPA : "<<dpa << endl;
   }
   void getcppm()
   {
        cout <<"CPPM : "<<cppm << endl;
   }
   void getmaths()
   {
        cout <<"MSTHS: "<<maths << endl;
   }
   void getic()
   {
        cout <<"IC : "<<ic<< endl;
   }
   void gettotal()
    {
        cout <<"TOTAL IS : "<<total << endl;
    }
   void getper()
   {
        cout <<"PER is: "<<per << endl;
   }


};

int main()
{
    student s;

    s.setdpa(90);
    s.setcppm(95);
    s.setmaths(90);
    s.setic(80);
    s.settotal(90+95+90+80);
    s.setper((90+95+90+80)/4);

    s.getdpa();
    s.getcppm(); 
    s.getmaths();
    s.getic();
    s.gettotal();
    s.getper();


    
    return 0;
}