#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fp;
    fp.open("file_data.txt");
    fp << "Welcome to skill qode, Decode your skill hear...\n";
    fp << "You are entering luring c language now...\n";
    fp << "We are enjoying every thing...\n";
    fp.close();
    return 0;
}
