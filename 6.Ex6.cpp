#include <iostream>
using namespace std;

int main()
{
    int loopCounter = 0;
    while(loopCounter <5) //error was infinite loop while(true);
    {
        cout << loopCounter << ".";
        loopCounter++;
    }

   return 0;
}
