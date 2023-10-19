#include<iostream>
using namespace std;

class rectangle
{
    private:

      int lenght, height;

    public:
       
        int l=lenght, h=height;

        int area(int l, int h)
        {
            return l*h;
        }
        int circ(int l, int h)
        {
            return 2*(l+h);
        }
}; 

int main()
{
 int a,b;

    cin>>a>>b;

    rectangle re;

    cout << re.area(a,b) << endl;
    cout << re.circ(a,b);

    return 0;

}