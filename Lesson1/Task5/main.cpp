#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int m = 0, t = 0;
    cout << "Enter the weight of the ship: ";
    cin >> m;
    t=300*((round(m/3))-2);
    cout << "You need " << t << " fuel units.";
    cout << t;
    return 0;
}
