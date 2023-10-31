/* File: Circle.h

 * Class: COP 3003
 * Dev: Ayleen Roque
 * Desc: Specification file for Circle Class
 */
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include "Shape.h"
#include "Point.h"

#ifndef FINALPROJECT_CIRCLE_H
#define FINALPROJECT_CIRCLE_H

class Circle : public Shape {
private:
    // one point derived from shape class
    int radius;
public:
    Circle();  // Default Constructor
    Circle(Point p1, int num); // Property Constructor

    // Accessors
    void setPoint(Point p);  // setter
    Point getPoint();  // getter
    void setRadius(int r); // setter
    int getRadius(); // getter

    // Methods
    float calcDiameter(); // calculate diameter
    float calcCircumference(); // calculate circumference
    float calcArea();  // calculate area

    // Virtual Function implemented for circle shapes
    std::string displayInfo();
};


#endif //FINALPROJECT_CIRCLE_H
