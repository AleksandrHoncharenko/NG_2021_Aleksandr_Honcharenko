#include <iostream>
#include <random>

using namespace std;

int main()
{
    int Array[10], Number, Addition, Digital;
    cout << "Enter number in array:" << endl;

    //Enter nomber of array
    for (Digital = 0; Digital < 10; Digital++){
        cin >> Number;
        Array[Digital] = Number;
    }

    //input addition and added it to array numbers
    cout << "Enter addition: ";
    cin >> Addition;

    for (Digital = 0; Digital < 10; Digital++)
        Array[Digital] += Addition;

    //output new array
    cout << "Ur new array:" << endl;
    for ( Digital = 0; Digital < 10; Digital ++)
        cout << Array[Digital] << endl;

    return 0;
}
