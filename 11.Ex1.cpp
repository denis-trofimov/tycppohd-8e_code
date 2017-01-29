/*
 * 11.Ex1.cpp You are modeling shapes—circle and triangle—and want every shape
 *  to compulsorily implement functions Area() and Print() .
 *  How would you do it?
 * 1. Demonstrate an inheritance hierarchy that implements the question in Quiz 1 for
Circle and Triangle
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
#include <cmath>
using namespace std;

class Shape
{
protected:
    virtual double Area() = 0;
    virtual void Print() = 0;
    virtual ~Shape() { cout << "Destructor Shape" << endl; }
};

class Circle : virtual protected Shape
{
    double radius;

public:
    Circle(double inputRadius) : radius(inputRadius)
    {
        cout << "Consructor Circle" << endl;
    }
    ~Circle()
    {
        cout << "Destructor Circle" << endl;
    }

    double Area() override
    {
        return 3.1415 * radius * radius;
    }
    void Print() override
    {
      cout << "Circle says hello!" << endl;
    }
};

class Triangle : virtual protected Shape
{
    double base;
    double height;

public:
    Triangle(double inputBase, double inputHeight)
        : base(inputBase), height(inputHeight)
    {
        cout << "Consructor Triangle" << endl;
    }
    Triangle(double side) : base(side), height(side * sqrt(3) / 2)
    {
        cout << "Consructor of equilateral triangle" << endl;
    }
    ~Triangle()
    {
        cout << "Destructor Triangle" << endl;
    }

    double Area() override
    {
        return base * height / 2;
    }
    void Print() override
    {
      cout << "Triangle says hello!" << endl;
    }
};

int main(int argc, char **argv)
{
    Circle myRing(5);
    Triangle myWarningTriangle(6.6, 2);
    Triangle equilateral(2);

    cout << "Area of circle: " << myRing.Area() << endl;
    cout << "Area of triangle: " << myWarningTriangle.Area() << endl;
    cout << "Area of equilateral triangle: " << equilateral.Area() << endl;

    myRing.Print();
    myWarningTriangle.Print();
    equilateral.Print();

    return 0;
}

