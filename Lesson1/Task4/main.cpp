#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float x1, x2, D, kD, a, b, c;

  cout << "Math calculator" << endl;

  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "Enter c: ";
  cin >> c;

  D=b*b-4*a*c;
  kD=sqrt(D);

  if (D > 0){
    x1=(-b+kD)/(2*a);
    x2=(-b-kD)/(2*a);
    cout << "x1=" << x1 << endl;
    cout << "x2=" << x2;
  }
  else
        if (D == 0){
        x1=(-b)/(2*a);
        cout << "x1=x2=" << x1;
        }
        else
            cout << "No roots.";

    return 0;
}
