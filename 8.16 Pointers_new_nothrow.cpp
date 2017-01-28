#include <iostream>
using namespace std;

int main()
{
   // Request LOTS of memory space, use nothrow
   int* pointsToManyNums = new(nothrow) int [0x1fffffff];

   if (pointsToManyNums) // check pointsToManyNums != NULL
   {
      // Use the allocated memory
      delete[] pointsToManyNums;
   }
   else
      cout << "Memory allocation failed. Ending program" << endl;

   return 0;
}

/*terminate called after throwing an instance of 'std::bad_array_new_length'
  what():  std::bad_array_new_length
Aborted
* ------------------
(program exited with code: 134)
*/
