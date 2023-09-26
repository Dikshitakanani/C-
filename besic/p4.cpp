#include <iostream>
using namespace std;

int main() {
    int a = 8;
    int b = 6;
    int c = 4;
    int d;
    d = a + (b - c) * a / c;
    
    cout << "The value of d is: " << d << endl;
    return 0;
}