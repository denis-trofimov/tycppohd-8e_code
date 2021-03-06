/*
 * 8.Ex3.cxx 3. How would you change the declaration of pNum1 in Exercise 1 at Line 1 so as to
make the assignment at Line 3 invalid? (Hint: It has something to do with ensuring
that pNum1 cannot change the data pointed to.)
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

int main(int argc, char **argv)
{
    int number = 3;
    const int* pNum1 = &number;
    *pNum1 = 20;
    int* pNum2 = pNum1;
    number *= 2;
    std::cout << *pNum2;
    return 0;
}
