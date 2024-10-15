#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;




int main()
{
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    circle.SetDimension(20.0);
    circle.ShowArea();

    rectangle.SetDimension(10.0, 20.0);
    rectangle.ShowArea();

    triangle.SetDimension(2.0, 15.0);
    triangle.ShowArea();

    return 0;
}