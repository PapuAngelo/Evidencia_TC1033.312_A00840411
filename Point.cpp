#include "Point.h"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(double _x, double _y) {
    x = _x;
    y = _y;
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

void Point::setX(double _x) {
    x = _x;
}

void Point::setY(double _y) {
    y = _y;
}

double Point::calculateD(Point p2) {
    return sqrt((p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y));
}

std::string Point::str() {
    return '(' + std::to_string(x) + 'x' + std::to_string(y) + 'y';
}
