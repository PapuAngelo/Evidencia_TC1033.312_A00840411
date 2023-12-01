#pragma once

#ifndef Point_h
#define Point_h

#include <stdio.h>
#include <string>
#include <cmath>

class Point
{
private:
    double x, y;

public:
    Point();
    Point(double _x, double _y);

    double getX();
    double getY();

    void setX(double _x);
    void setY(double _y);

    double calculateD(Point p2);
    std::string str();
};

#endif