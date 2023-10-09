#include<iostream>
using namespace std;

class Bankaccount
{
    public:

    int   blance,diposit,withdraw;
    string holder_name;

    Bankaccount()
    {
        cout << "Account Holder Name ---> ";
        cin >> holder_name;
        cout << " Enter Your  Blance ---> ";
        cin >> blance;
        cout << "diposit is ---> ";
        cin >> diposit;
        
    }
    void Diposit()
    {
        
        if (blance > 0)
        {
             blance += diposit;
            cout << "Deposited: " << diposit << endl;
             cout << "Total blance is : " << blance << endl;
        }
        else
        {
             cout << "Invalid deposit amount." << endl;
        }       
    }

    void Withdraw()
    {
        cout << "Enter Ammount how you want to Withdraw --->";
        cin >> withdraw;
    
        if ( withdraw > 0 &&  withdraw<= blance)
        {
              blance -=  withdraw;
            cout << "Withdrawn: " << withdraw<< endl;
            cout << "Total blance is : " << blance<< endl;

        } else
        {
            cout << "no balance." << endl;
        }
    }

};
int main()
{
    Bankaccount b1;

    b1.Diposit();
    b1.Withdraw();

}