#include<iostream>
using namespace std;

class triangle
{

    public:
       
        int a,b,c;

        int area(int b, int h)
        {
            return 0.5*b*h;
        }
        int circ(int b,int h)
        {
            return 3*b;
        }
}; 

int main()
{
 int a,c;

    cin>>a>>c;

    triangle t;

    cout << t.area(a,c) << endl;
    cout << t.circ(a,c);

    return 0;
}
