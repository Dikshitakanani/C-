#include <iostream>
using namespace std;
class shape
{
public:
    int l, w, h;
    virtual void print()
    {
        cout << "print the area of difrent shap";
    }
};

class squar : public shape
{
public:
    void print() override
    {
        cout << "enter value of length :";
        cin >> l;
        cout << l * l << endl;
    }
};

class rect : public shape
{
public:
    void print() override
    {
        cout << "enter value of length :";
        cin >> l;

        cout << "enter value of width :";
        cin >> w;

        cout << "enter value of height :";
        cin >> h;
        cout <<"The area of rectangle: "<<l * w * h;
    }
};

int main()
{
    shape *s1;
    squar sq1;
    rect r1;

    s1 = &sq1;
    s1->print();

    s1 = &r1;
    s1->print();
}