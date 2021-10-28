#include <iostream>

using namespace std;

int main()
{
    int ArrayNum, pin, action, money;
    // array with cash and pin
    int pass[10] = {1111, 2222, 3333, 4444, 5555, 6666, 7777, 8888, 9999, 1010};
    int cash[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};

    //eternal work
    while (true){

    cout << endl << "Bank account: ";
    cin >> ArrayNum;

    // pin request
    cout << "Pin for " << ArrayNum << " account: ";
    cin >> pin;
    ArrayNum -= 1;
    // authetintication
    if (pin != pass[ArrayNum])
        cout << "Invalid pin";
        else

            // information about account
            cout << "Your money : " << cash[ArrayNum] << endl
            << "What I can do?" << endl
            //request action
            << "1 - add money" << endl
            << "2 - withdraw money" << endl;
            cin >> action;
            // add money
            if (action == 1){
                cout << "How much money do you want to add: ";
                cin >> money;
                cash[ArrayNum] += money;
                cout << "On ur account " << cash[ArrayNum] << " $";}
                // withdraw money
                if (action == 2){
                    cout << "How much money do you want to withdraw: ";
                    cin >> money;
                    cash[ArrayNum] -= money;
                    cout << "On ur account " << cash[ArrayNum] << " $" ;
                    }

}
}
