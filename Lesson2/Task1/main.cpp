#include <iostream>
using namespace std;
int main()
{
   int num, sum, a;
   cout << "Enthe number: ";
   cin >> num;
   if (num < 0)
       num = -num;
   for(a = num; a >= 1; a /= 10){
       sum += a % 10;
   }
   cout << "sum = " << sum;
}


