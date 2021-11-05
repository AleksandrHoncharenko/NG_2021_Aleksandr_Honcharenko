#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  //introducing variables
  int a = 0, b = 0, c = 0;
  float x1, x2 = 0, Discriminant = 0;

  //the name of the calc
  cout << "Math calculator" << endl;

  //input a, b, c
  cout << "Enter a: "; cin >> a;
  cout << "Enter b: "; cin >> b;
  cout << "Enter c: "; cin >> c;

  //calculate discriminant
  Discriminant = b * b - 4 * a * c;

  //calculate and output x1 and x2 for D > 0
  if (Discriminant > 0){
    x1 = (- b + sqrt(Discriminant)) / (2 * a);
    x2 = (- b - sqrt(Discriminant)) / (2 * a);
    cout << "x1 = " << x1 << endl << "x2 = " << x2;
  }
  //calculate and output x for D = 0
  else
     if (Discriminant == 0){
       x1 = -b / (2 * a);
       cout << "x1 = x2 = " << b/(-2*a);
       }
         //output "No roots" if D < 0
         else
            cout << "No roots";

    return 0;
}
