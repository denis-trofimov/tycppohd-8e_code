#include <iostream>
using namespace std;

int main()
{
   const double Pi = 3.1416;

   cout << "Enter circle's radius: ";
   double Radius = 0;
   cin >> Radius;

   cout << "Area = " << Pi * Radius * Radius << endl;
   cout << "Circumference = " << 2 * Pi * Radius << endl;

   cout << "Integer Area = " << int(Pi * Radius * Radius) << endl;
   cout << "Integer Circumference = " << int(2 * Pi * Radius) << endl;

   return 0;
}
