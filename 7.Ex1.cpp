/*
 * 7.Ex1.cpp
 * 1. Write overloaded functions that calculate the volume of a sphere and a cylinder.
The formulas are the following:
Volume of sphere = (4 * Pi * radius * radius * radius) / 3
Volume of a cylinder = Pi * radius * radius * height
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

const double Pi = 3.14159265;
//VolumeSphere
inline auto Volume(const auto& radius)
{
    return (4 * Pi * radius * radius * radius) / 3;
}
//VolumeCylinder
inline auto Volume(const auto& radius, const auto& height)
{
    return Pi * radius * radius * height;
}

int main(int argc, char **argv)
{
    cout << "This app calculates the volume of a sphere and a cylinder.\n"
    "Enter c for Cylinder, s for Sphere: ";
    char userSelection = 's';
    cin >> userSelection;

    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    if (userSelection == 'c')
    {
      cout << "Enter height: ";
      double height = 0;
      cin >> height;

      // Invoke overloaded variant of Volume for Cyclinder
      cout << "Volume of cylinder is: " << Volume(radius, height) << endl;
    }
    else
      cout << "Volume of sphere is: " << Volume(radius) << endl;

    return 0;
}

