#include <iostream>

using namespace std;

int main()
{

 int Hash, Number, FirstDigit, SecondDigit;
 cout << "Enter ur number: ";
 cin >> Number;

 // assigning a value to first and second digit
 for(int x = Number; x >= 1; x /=10){
    FirstDigit = x % 10;
    SecondDigit = x / 10 % 10;

    // check the same digit
    if (FirstDigit == SecondDigit)
        Hash += FirstDigit;
 }
 // identity check first and last digit
 if (FirstDigit == Number % 10){
     Hash += FirstDigit;
 }
 cout << "Hash of ur number = " << Hash;
    return 0;
}
