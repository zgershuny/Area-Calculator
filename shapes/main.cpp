/* Receives input for the area of shapes:
 * rectangle, triangle, circle, and trapezoid.
 * Use class with data and function members.*/
#include <iostream>
#include <string>
#include "shapes.h"
using namespace std;


void displayShapes();
int shapeValid(int);


int main()
{
    // Call Class functions from shapes.h
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;
    Trapezoid trapezoid;

    int shape, choice;

    do
    {
        displayShapes();
        shape = shapeValid(choice);
        switch(shape)
        {
            case 1: circle.getRadius(shape);
                break;
            case 2: rectangle.getMeasurements(shape, shape);
                break;
            case 3: triangle.getMeasurements(shape, shape);
            case 4: trapezoid.getMeasurements(shape, shape, shape);
        }
    } while (shape != 5);
    return 0;
}

