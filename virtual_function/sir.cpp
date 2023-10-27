#include<iostream>
using namespace std;
class pet
{
    public:
    virtual void print()
    {
        cout<<"sound of pet";
    }
};
class dog : public pet
{
    public:
   void print() override
   {
        cout<<"Dog Barks"<<endl;
        
   }

};
class cat : public pet
{
    public:
    void print() override
    {
        cout<<"cat Meows";
    }
};

int main()
{
    pet* p1;

    dog d1;
    cat c1;

    p1 = &d1;
    p1->print();

    p1 = &c1;
    p1->print();

}