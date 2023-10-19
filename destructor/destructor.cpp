#include<iostream>
using namespace std;

class  person
{


    public:

        int age;
        string name;
        string city;


    person()
    {
         int a = age;
        string n = name;
        string c = city;

         cout <<"Enter your Age = ";
         cin >> a;
         cout <<"Enter your name = ";
         cin >> n;
         cout <<"Enter your city = ";
         cin >> c;

         cout << "Age = "<<a<<endl;
         cout << "Name = "<<n<<endl;
         cout << "City = "<<c<<endl;


        
    }
    ~person()
    {
        cout<<"Destructor is running";
    }

    
};
int main()
{
     person a1;

}