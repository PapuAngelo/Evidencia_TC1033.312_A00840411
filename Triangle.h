#pragma once

#ifndef Triangle_h
#define Triangle_h

#include <stdio.h>
#include "Point.h"

class Triangle
{
private:
    Point vertex1, vertex2, vertex3;

public:
    // Constructors
    Triangle();
    Triangle(Point _vertex1, Point _vertex2, Point _vertex3);

    // Get methods
    Point getVertex1();
    Point getVertex2();
    Point getVertex3();

    // Set methods
    void setVertex1(Point _vertex1);
    void setVertex2(Point _vertex2);
    void setVertex3(Point _vertex3);

    // Other methods
    double perimeter();
    double area();
    std::string str();
};

#endif
