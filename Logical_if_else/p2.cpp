#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter Value of X: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    
    if (x < 2000 || x > 3000)
    {
        cout << "this value is: " << x << endl;
    }
    
    if (y > 100 && y < 500)
    {
        cout << "this value is: " << y << endl;
    }
    
    return 0;
}