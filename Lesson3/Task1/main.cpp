#include <iostream>
#include <random>

using namespace std;

int main()
{
    int Array[10], Number = 0, Addition = 0;
    cout << "Enter number in array:" << endl;

    //Enter number of array
    for (int i = 0; i < 10; i++){
        cin >> Array[i];
    }

    //input addition and added it to array numbers
    cout << "Enter addition: ";
    cin >> Addition;


    //output new array
    cout << "Ur new array:" << endl;
    for (int i = 0; i < 10; i++)
        cout << Array[i] + Addition  << endl;

    return 0;
}
