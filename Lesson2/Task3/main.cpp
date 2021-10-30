#include <iostream>

using namespace std;

int main()
{
   //introducing size
   int Size, High, Lenght;
   cout << "Size:";
   cin >> Size;

   //warning size <=0
   if (Size <= 0)
    cout << "Invalid size";
   else
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
