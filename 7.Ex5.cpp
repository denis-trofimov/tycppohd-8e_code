/*
 * 7.Ex5.cpp
 *5. Write a function with return type void that still helps the caller calculate the area
and circumference of a circle when supplied the radius.
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

const double Pi = 3.1416;

// area, circumference are output parameters by reference
void AreaCircumference(const auto& radius, auto& area, auto& circumference)
{
    area = Pi * radius * radius;
    circumference = 2 * Pi * radius;
}

int main(int argc, char **argv)
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;
    double area = 0, circumference = 0;
    // Call function AreaCircumference
    AreaCircumference(radius, area, circumference);
    cout << "Area is: " << area << endl;
    cout << "Circumference is: " << circumference << endl;

    return 0;
}
