/* friend function
declare in class, define outside of class
directly called

    object as argument and as return
*/

#include<iostream>
using namespace std;
class rect
{
    friend rect add (rect, rect, rect, rect);
    int l,w;

    public:

        void setdata(int a, int b)
        {
            l = a, w = b;
        }
        int getarea()
        {
            return l * w;
        }
};

rect add (rect m, rect n, rect x, rect y)
{
    rect t;
    t.l = m.l + n.l + x.l - y.l;
    t.w = m.w + n.w + x.w - y.w;

    return t;
}

int main()
{
    rect a,b,c,d,e;

    a.setdata(4,5);
    cout << " area of rectangle A is -- "<<a.getarea() << endl;
     b.setdata(3,5);
    cout << " area of rectangle b is --> " << b.getarea() << endl;
     d.setdata(4,6);
    cout << " area of rectangle d is --> "<< d.getarea() << endl;

    e.setdata(4,6);
    cout << " area of rectangle e is --> "<< e.getarea() << endl;

    c = add(a,b,d,e);
    cout <<"area of rectangle c is : " << c.getarea()<< endl;


}