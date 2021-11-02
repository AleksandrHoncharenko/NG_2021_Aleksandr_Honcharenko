#include <iostream>
using namespace std;
int main()
{
   //introducing and enter variables
   int num = 0, sum = 0;
   cout << "Enthe number: ";
   cin >> num;

   //calculation sum
   for( ; num >= 1; num /= 10){
       sum += num % 10;
   }
   //output sum
   cout << "sum = " << sum;
}


