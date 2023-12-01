#include <iostream>
#include "Triangle.h"
#include "Point.h"
using namespace std;

void displayTriangleArray(Triangle arrTriangles[], int size) {
    for (int index = 0; index < size; index++) {
        cout << index << ". " << arrTriangles[index].str() << endl;
    }
}

void readTriangleArray(Triangle arrTriangles[], int size) {
    double x1, y1, x2, y2, x3, y3;

    for (int index = 0; index < size; index++) {
        cout << "Ingresa las 3 coordenadas x, y de los vertices del triangulo 1: " << index << ":";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        Point point1{ x1, y1 };
        Point point2{ x2, y2 };
        Point point3{ x3, y3 };

        arrTriangles[index].setVertex1(point1);
        arrTriangles[index].setVertex2(point2);
        arrTriangles[index].setVertex3(point3);
    }
}

void calculatePerimeterArea(Triangle arrTriangles[], int size) {
    for (int index = 0; index < size; index++) {
        cout << "Triangulo " << index << ".\nPerimetro = " <<
            arrTriangles[index].perimeter() <<
            "\nArea = " <<
            arrTriangles[index].area() << endl;
    }
}

int main()
{
    Point pointA{ -5, -5 }, pointB{ 1,3 }, pointC{ 4, -6 };
    Point pointD{ -2, -3 }, pointE{ 5,-4 }, pointF{ -1, 3 };
    Point pointG{ -2, -3 }, pointH{ 5,-4 }, pointI{ -1, 3 };
    Triangle triangle1{ pointD,pointE,pointF }, triangle2{ pointA,pointB,pointC }, triangle3{ pointG,pointH,pointI };

    const int arraySize = 3;
    Triangle arrTriangles[arraySize];

    displayTriangleArray(arrTriangles, arraySize);
    readTriangleArray(arrTriangles, arraySize);
    calculatePerimeterArea(arrTriangles, arraySize);

    return 0;
}