#include <iostream>

using namespace std;

int main()
{
    int m=0;
    cout << "Enter subnet mask: 255.255.255.";
    cin >> m;

    switch(m)
    {

        case 255:
        cout << "1 IP address is available on this subnet :3";
        break;
        case 254:
        cout << "2 IP address is available on this subnet :3";
        break;
        case 252:
        cout << "4 IP address is available on this subnet :3";
        break;
        case 248:
        cout << "8 IP address is available on this subnet :3";
        break;
        case 240:
        cout << "16 IP address is available on this subnet :3";
        break;
        case 224:
        cout << "32 IP address is available on this subnet :3";
        break;
        case 192:
        cout << "64 IP address is available on this subnet :3";
        break;
        case 128:
        cout << "128 IP address is available on this subnet :3";
        break;
        case 000:
        cout << "256 IP address is available on this subnet :3";
        break;
        default:
        cout << "You entered a wrong subnet address";
    }
    return 0;
}
