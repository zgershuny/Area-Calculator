//
// Created by zgershuny on 5/31/18.
//

#ifndef SHAPES_SHAPES_H
#define SHAPES_SHAPES_H
#include <cmath>

// Circle
class Circle
{
private:
    double radius;

public:
    void getRadius(double);
    void setRadius(double);
    double calcCircle(double);
    Circle()
    {
        radius = 1;
    }
};

// Rectangle
class Rectangle
{
private:
    double length, width;

public:
    void getMeasurements(double, double);
    void setMeasurements(double, double);
    double calcRectangle(double, double);
    Rectangle()
    {
        length = 1, width = 1;
    }
};

// Triangle
class Triangle
{
private:
    double length, height;

public:
    void getMeasurements(double, double);
    void setMeasurements(double, double);
    double calcTriangle(double, double);
    Triangle()
    {
        length = 1, height = 1;
    }
};

// Trapezoid
class Trapezoid
{
private:
    double base1, base2, height;

public:
    void getMeasurements(double, double, double);
    void setMeasurements(double, double, double);
    double calcTrapezoid(double, double, double);
    Trapezoid()
    {
        base1 = 1, base2 = 1, height = 1;
    }
};

#endif //SHAPES_SHAPES_H
