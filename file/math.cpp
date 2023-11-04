#include<iostream>
#include<cmath>

using namespace std;
int main()
{

    int a = 15 , b=2.123 ,result2;
    double c = 2.98 ,result,  result3 , result4, result5 , result6;

    result = pow(a,b);          // use for ghatt.
    result2 = sqrt(8);          // print  square root of given number.          
    result3 = ceil(c);          // print roundfiger number if 2.98 is= 3.
    result4 = floor(c);         // print roundefiger number if 2.98 is= 2.
    result5 = round(c);         // print roundfiger number if 2.98 is= 3 , if 2.45 is= 2. 
    result6 = abs(-10);         // print positive number if -10 is= 10.

    cout <<"result pow   " << result  << endl;
    cout <<"result sqrt  " << result2 << endl;
    cout <<"result ceil  " << result3 << endl;
    cout <<"result floor " << result4 << endl;
    
    cout <<"result round " << result5 << endl;
    cout <<"result abs   " << result6 << endl;

    return 0;
}