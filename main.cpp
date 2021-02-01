#include <iostream>

using namespace std;

int main()
{
   int array1[2], array2[2], array3[2];
   int a;

   for (a=0; a<2; a++)
   {
       cout << "\nMasukkan array 1 indeks ke-" << a << ": ";
       cin >> array1[a];
   }

   for (a=0; a<2; a++)
   {
       cout << "\nMasukkan array 2 indeks ke-" << a << ": ";
       cin >> array2[a];
   }

   cout << "\nArray 1:\n";
   for (a=0; a<2; a++)
   {
       cout << array1[a] << "\n";
   }

   cout << "\nArray 2:\n";
   for (a=0; a<2; a++)
   {
       cout << array2[a] << "\n";
   }

   cout << "\nAray 1 + Array 2\n";
   for (a=0; a<2; a++)
   {
       array3[a] = array1[a]+array2[a];
       cout << array3[a] << "\n";
   }


}
