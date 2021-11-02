#include <iostream>

using namespace std;

int main()
{
   //introducing size
   int Size, High, Lenght;
   cout << "Size:";
   cin >> Size;

   //output columns
   for (High = 1; High <= Size; High++){
        //output lines
        for (Lenght = 1; Lenght <= Size; Lenght++){
            //output empithess
            if((High > 1 && High < Size) && (Lenght > 1&& Lenght < Size))
             cout << " ";
            //output "*"
            else
             cout << "*";
       }
   cout << endl;
   }
    return 0;
}
