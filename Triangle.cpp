#include "Triangle.h"

Triangle::Triangle() {
    vertex1 = Point(0, 0);
    vertex2 = Point(50, 30);
    vertex3 = Point(25, 10);
}

Triangle::Triangle(Point _vertex1, Point _vertex2, Point _vertex3) {
    vertex1 = _vertex1;
    vertex2 = _vertex2;
    vertex3 = _vertex3;
}

Point Triangle::getVertex1() {
    return vertex1;
}

Point Triangle::getVertex2() {
    return vertex2;
}

Point Triangle::getVertex3() {
    return vertex3;
}

void Triangle::setVertex1(Point _vertex1) {
    vertex1 = _vertex1;
}

void Triangle::setVertex2(Point _vertex2) {
    vertex2 = _vertex2;
}

void Triangle::setVertex3(Point _vertex3) {
    vertex3 = _vertex3;
}

double Triangle::perimeter() {
    return vertex2.calculateDistance(vertex1) + vertex3.calculateDistance(vertex2) + vertex1.calculateDistance(vertex3);
}

double Triangle::area() {
    return 0.5 * abs(((vertex1.getX() * vertex2.getY()) + (vertex2.getX() * vertex3.getY()) + (vertex3.getX() * vertex1.getY())) -
        ((vertex1.getX() * vertex3.getY()) + (vertex3.getX() * vertex2.getY()) + (vertex2.getX() * vertex1.getY())));
}

std::string Triangle::str() {
    return vertex1.str() + ',' + vertex2.str() + ',' + vertex3.str();
}
