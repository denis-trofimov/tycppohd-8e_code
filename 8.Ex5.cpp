/*
 * 8.Ex5.cpp
 *
 * Copyright 2017 Denis Trofimov <silaradost@yandex.ru>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include <iostream>
using namespace std;
int main()
{
    int* pointToAnInt = new int; //not "int pointToAnInt" but int*
    int* pNumberCopy = pointToAnInt;
    *pNumberCopy = 30;
    cout << *pointToAnInt;
    delete pNumberCopy;
    //double delete "delete pointToAnInt;"
    return 0;
}

/*
 * g++ -Wall -c "8.Ex5.cpp" -std=c++14
8.Ex5.cpp: In function ‘int main()’:
8.Ex5.cpp:29:28: error: invalid conversion from ‘int*’ to ‘int’ [-fpermissive]
     int pointToAnInt = new int;
                            ^
8.Ex5.cpp:30:24: error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
     int* pNumberCopy = pointToAnInt;
                        ^
8.Ex5.cpp:32:14: error: invalid type argument of unary ‘*’ (have ‘int’)
     cout << *pointToAnInt;
              ^
8.Ex5.cpp:34:12: error: type ‘int’ argument given to ‘delete’, expected pointer
     delete pointToAnInt;
            ^
*/

