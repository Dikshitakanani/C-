#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string D;
    ifstream file("C:/Users/kanan/OneDrive/Desktop/collage/file2.txt");

    if (file.is_open())
    {
        while (getline(file , D))
        {
            cout << D << endl;
        }
        file.close();
    }

    
    return 0;
}