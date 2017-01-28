#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number between 0 and 4" << endl;
    int input = 0;
    cin >> input;
    switch (input)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            cout << "Valid input" << endl;
            break;
            //inserted break to stop program flow going further to default:
        default:
            cout << "Invalid input" << endl;
    }

   return 0;
}
