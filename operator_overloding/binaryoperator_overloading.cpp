#include<iostream>
using namespace std;
class box
{
    int l,w,h;
    public:
    void setdata(int a, int b, int c)
    {
        l = a;
        w = b;
        h = c;

    }
    int getvolume()
    {
        return l*w*h;
    }
    box operator+(box &n)
    {
        box t;
        t.l = l + n.l;
        t.w = w + n.w;
        t.h = h + n.h;
        return t;

    }
     box operator-(box &a)
    {
        box t;
        t.l = l - a.l;
        t.w = w - a.w;
        t.h = h - a.h;
        return t;

    }


};
int main()
{
    box b1,b2,b3,b4;

    b1.setdata(2,2,2);
    cout << "Volume of box b1 is :" << b1.getvolume() << endl;
    b2.setdata(3,3,3);
    cout << "Volume of box b1 is :" << b2.getvolume() << endl;

    b3 = b1 + b2;
     cout << "Volume of box b3 is :" << b3.getvolume() << endl;
      b4 = b1 - b2;
     cout << "Volume of box b3 is :" << b4.getvolume() << endl;

}