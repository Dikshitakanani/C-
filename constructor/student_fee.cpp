// defining the constructor within the class

#include <iostream>
using namespace std;

class student {
	int rno;
	char name[100];
	double fee;

public:
	student()
	{
		cout << "Enter the RollNo:";
		cin >> rno;
		cout << "Enter the Name:";
		cin >> name;
		cout << "Enter the Fee:";
		cin >> fee;
	}

	void display()
	{
        cout << "--------------------------------"<<endl;
		cout << endl << rno << "\t" << name << "\t" << fee<<endl;
        cout << "-------------------------------"<<endl;
	}
};

int main()
{
	student s; 
    student s2;
		
	s.display();
    s2.display();

	return 0;
}
