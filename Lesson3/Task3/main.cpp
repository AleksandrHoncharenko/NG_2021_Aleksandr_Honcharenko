#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    //introductiaon arrays
    int First[4], Second[4], Sum = 0;

    //feeling random numbers in arrays
    srand(time(0));
    First[0] = 1 + rand () % 9;
    First[1] = rand () % 10;
    First[2] = rand () % 10;
    First[3] = rand () % 10;
    Second[0] = 1 + rand () % 9;
    Second[1] = rand () % 10;
    Second[2] = rand () % 10;
    Second[3] = rand () % 10;


    //adiition
    Sum = 1000 * (First[0] + Second[0]) +
    100 * (First[1] + Second[1]) +
    10 * (First[2] + Second[1]) +
    First[3] + Second[3];


    //output arrays and sum
    cout << "Got: " <<First[0] << First[1] << First[2] << First[3] << " + "
    << Second[0] << Second[1] << Second[2] << Second[3] << endl
    << "Result: " << Sum;

    return 0;
}
