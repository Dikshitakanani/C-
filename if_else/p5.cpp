#include <iostream>
using namespace std;

int main()
{
    int eng, guj, eco, Total, persentage;
    cout << "Enter your eng marks :";
    cin >> eng;
    cout << "Enter your guj marks :";
    cin >> guj;
    cout << "Enter your eco marks :";
    cin >> eco;
    Total = eng + guj + eco;
    cout << "Total marks is :" << Total <<endl;
    persentage = (Total * 100) / 300;
    cout << "persentage is :" << persentage <<endl;
    if (persentage > 33)
    {
        cout << "student is pass";
    }
    else
    {
        cout << "student is fail";
    }
    return 0;
}
