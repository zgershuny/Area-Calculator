//
// Created by zgershuny on 6/1/18.
//

#include <iostream>
#include "shapes.h"
using namespace std;

// Display Shapes for Selection
void displayShapes()
{
    cout << "\nPick a shape to calculate the area of.\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "4. Trapezoid\n";
    cout << "5. Quit\n";
}

// Shape Selection Validation

int shapeValid(int choice)
{
    do
    {
        cout << "Please select the option 1 through 5.\n";
        cout << "Shape: \n";
        cin >> choice;
    } while(choice < 1 or choice > 5);

}

// Circle Functions
void Circle::getRadius(double radius) {

    do {
        cout << "Radius: ";
        cin >> radius;
    } while (radius <= 0);

    setRadius(radius);
}

void Circle::setRadius(double r)
{
    radius = r;
    calcCircle(radius);
}
double Circle::calcCircle(double radius)
{
    double area;
    area = 3.14 * pow(radius, 2);
    cout << "The area of the circle is: " << area << endl;
}

// Rectangle Functions
void Rectangle::getMeasurements(double length, double width)
{
    do
    {
        cout << "Length: ";
        cin >> length;
        cout << "Width: ";
        cin >> width;
    } while (length <= 0 or width <= 0);
    setMeasurements(length, width);
}

void Rectangle::setMeasurements(double l, double w)
{
    length = l;
    width = w;
    calcRectangle(length, width);
}

double Rectangle::calcRectangle(double length, double width)
{
    double area;
    area = length * width;
    cout << "The area of the rectangle is: " << area << endl;
}

// Triangle Functions
void Triangle::getMeasurements(double length, double height)
{
    do
    {
        cout << "Length: ";
        cin >> length;
        cout << "Width: ";
        cin >> height;
    } while (length <= 0 or height <= 0);
    setMeasurements(length, height);
}

void Triangle::setMeasurements(double l, double w)
{
    length = l;
    height = w;
    calcTriangle(length, height);
}

double Triangle::calcTriangle(double length, double height)
{
    double area;
    area = (length * height) / 2;
    cout << "The area of the triangle is: " << area << endl;
}

// Trapezoid
void Trapezoid::getMeasurements(double base1, double base2, double height)
{
    do
    {
        cout << "First Base: ";
        cin >> base1;
        cout << "Second Base: ";
        cin >> base2;
        cout << "Height: ";
        cin >> height;
    } while (base1 <= 0 or base2 <= 0 or height <= 0);
    setMeasurements(base1, base2, height);
}

void Trapezoid::setMeasurements(double one, double two, double h)
{
    base1 = one;
    base2 = two;
    height = h;
    calcTrapezoid(base1, base2, height);
}

double Trapezoid::calcTrapezoid(double base1, double base2, double height)
{
    double area;
    area = (base1 + base2) * height / 2;
    cout << "The area of the trapezoid is: " << area << endl;
}