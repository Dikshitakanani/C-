#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string D="Dikshita";
    ofstream file("file_write.txt",ios::app);
    if(file.is_open())
    {
        file<<"MY NAME IS DIKSHITA";
        file.close();
    }
    else
    {
        cout<<"File Opening Is Fail...";
    }
   
    return 0;
}