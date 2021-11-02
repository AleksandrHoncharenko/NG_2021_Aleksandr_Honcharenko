#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int mass = 0;
    cout << "Enter the weight of the ship: "; cin >> mass;
    cout << "You need " << 300*((mass/3)-2) << " fuel units.";
    return 0;
}
