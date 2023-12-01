#include <iostream>
#include "Triangulo.h"
#include "Punto.h"
using namespace std;

void displayTriangleArray(Triangulo arrTriangles[], int size) {
    for (int index = 0; index < size; index++) {
        cout << index << ". " << arrTriangles[index].str() << endl;
    }
}

void readTriangleArray(Triangulo arrTriangles[], int size) {
    double x1, y1, x2, y2, x3, y3;

    for (int index = 0; index < size; index++) {
        cout << "Enter the 3 x, y coordinates for the vertices of triangle " << index << ":";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        Punto point1{ x1, y1 };
        Punto point2{ x2, y2 };
        Punto point3{ x3, y3 };

        arrTriangles[index].setVertice1(point1);
        arrTriangles[index].setVertice2(point2);
        arrTriangles[index].setVertice3(point3);
    }
}

void calculatePerimeterArea(Triangulo arrTriangles[], int size) {
    for (int index = 0; index < size; index++) {
        cout << "Triangle " << index << ".\nPerimeter = " <<
            arrTriangles[index].perimeter() <<
            "\nArea = " <<
            arrTriangles[index].area() << endl;
    }
}

int main()
{
    Punto pointA{ -5, -5 }, pointB{ 1,3 }, pointC{ 4, -6 };
    Punto pointD{ -2, -3 }, pointE{ 5,-4 }, pointF{ -1, 3 };
    Punto pointG{ -2, -3 }, pointH{ 5,-4 }, pointI{ -1, 3 };
    Triangulo triangle1{ pointD,pointE,pointF }, triangle2{ pointA,pointB,pointC }, triangle3{ pointG,pointH,pointI };

    const int arraySize = 3; // Adjust the array size accordingly
    Triangulo arrTriangles[arraySize];

    displayTriangleArray(arrTriangles, arraySize);
    readTriangleArray(arrTriangles, arraySize);
    calculatePerimeterArea(arrTriangles, arraySize);

    return 0;
}