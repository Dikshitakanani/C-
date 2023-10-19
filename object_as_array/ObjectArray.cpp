#include<iostream>
using namespace std;

class  test{

    int MATHS,IC,DPA;
    public:

    void setdata(int,int,int);
    void getTotal()
    {
        cout << "Total is : " << MATHS + IC + DPA << endl;
    }
    void getper()
    {
        cout << " per is : "<< (MATHS + IC + DPA )/3 << endl;
    }
     
};
void test :: setdata(int a, int b,int c)
{
    MATHS = a, IC = b, DPA = c ;
}
int main()
{
    test t[5];
    int i,a,b,c;

    for(i=0; i < 3; i++)
    {
        cout << "Enter MATHS Marks -->";
        cin >> a;
        cout << "Enter IC Marks --> ";
        cin >> b;
        cout <<"Enter DPA marks -->"<< endl;
        cin >> c;

        t[i].setdata(a,b,c);
    }

    cout << endl;

   for(i=0; i < 3; i++)
    {
       
            t[i].getTotal();
            t[i].getper();
         
    }
    
   /* for(i=0; i < 3; i++)
    {
        if(i == 2)
            t[i].getTotal();
        else
            t[i].getsub();  
    }*/
}
