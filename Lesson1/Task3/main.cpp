#include <iostream>

using namespace std;

int main()
{
    //introducing and filling variables
    int a = 0, b = 0;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;


    b = a + b;
    a = b - a;
    b = b - a;

    //output variables
    cout << "a = " << a << endl << "b = " << b;
     return 0;
}
