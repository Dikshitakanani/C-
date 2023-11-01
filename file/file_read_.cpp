#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string D;
    ifstream file("file1.txt");

    if (file.is_open())
    {
        while (getline(file , D))
        {
            cout << D << endl;
        }
        file.close();
    }
    else
    {
        cout<<"File Opening Is Fail...";
    }

    
    return 0;
}