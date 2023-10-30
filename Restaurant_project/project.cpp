#include <iostream>
using namespace std;

class RESTAURANTS
{
   public:

   const double TAX_RATE = 0.06;
   int mealCost=0, taxAmount=0, totalCost=0, discount=0,Total=0;
   int choice = 0;
   string n;
   int m;
   
   RESTAURANTS()
   {
   cout<<"\nWelcome to the OUR RESTAURANTS " << endl;

   cout<<"\nEnter your name : ";
   cin>>n;
   cout<<"Enter your mobile no. : ";
   cin>>m;
  
   cout<<"\n=======================MENU======================="<<endl;
   cout<<"1. PANEER TIKA - 300 \t 4.  ROTLI- 14" << endl;
   cout<<"2. KAJU KARI - 400 \t\t 5.  CHAS- 20" << endl;
   cout<<"3. SALAD - 50 \t\t 6.  PAPAD- 15" << endl;
   cout<<"7. Exit" << endl;
   }
   void choice1()
   {
      do {
      cout <<"\nSelect items from 1 to 7: ";
      cin >> choice;

      switch (choice) 
      {
         case 1:
            mealCost += 300;
            cout<<"PNEER TIKA\t";
            break;
         case 2:
            cout<<"KAJU KARI\t\t";
            mealCost += 400;
            break;
         case 3:
            mealCost += 50;
            cout<<"SALAD\t\t";
            break;
         case 4:
            mealCost += 14;
            cout<<"ROTLI\t\t";
            break;
         case 5:
            mealCost += 20;
            cout<<"CHAS\t\t";
            break;
         case 6:
            mealCost += 15;
            cout<<"PAPAD\t\t";
            break;
        case 7:
            break;
         default:
            cout<<"Invalid choice. Please try again." << endl;
            break;
      }
   }
    while(choice != 7);



   taxAmount = mealCost * TAX_RATE;
   totalCost = mealCost + taxAmount;
   
   cout << "\nCustomer name : "<<n<<endl;
   cout << "Customer mobile no. : "<<m<<endl;
   cout << "Cost of Meal: " << mealCost << endl;
   cout << "Tax Amount: " << taxAmount << endl;
   cout << "Total Cost: " << totalCost << endl;

   if(totalCost>300)
      {
         cout<<"\nCongrats! You'll get 10% discount";
         discount = (totalCost*10)/100;
         Total = totalCost-discount;
      }
     
     cout<<"\nDiscount is :----------> "<<discount << endl;
     cout<<"Your total with discount is : "<<Total << endl;

      cout<<"---------------------BIL--------------------------"<<endl;
      cout<<"       ------ Dixu's Restorant ------      "<<endl;
      cout<<"=================================================="<<endl;
      cout<<endl;
      cout<<"Customer Name ---> "<<n<<endl;
      cout<<"Customer Number --->"<<m<<endl;
      cout<<endl;
      cout<<"=================================================="<<endl;
      cout<<endl;
      cout<<"==================================================="<<endl;
      cout<<"YOUR ACCTUAL BIL       :"<<mealCost<<endl;
      cout<<"YOUR TAX_RATE          :"<<taxAmount<<endl;
      cout<<"TOTAL BIL              :"<<totalCost<<endl;
      cout<<"YOUR DISCOUNT IS --->  :"<<discount<<endl;
      cout<<"YOUR BIL AFTER DISCOUNT :"<<Total<<endl;
      cout<<"==================================================="<<endl;
      cout<<"            THANKS FOR VISITING           "<<endl;
      cout<<" ---------------- VISIT AGAIN -------------------"<<endl;
      
   }
};
int main()
{
   RESTAURANTS R;

   R.choice1();
   

}
/*



*/