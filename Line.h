/* File: Line.h

 * Class: COP 3003
 * Dev: Ayleen Roque
 * Desc: Specification file for Line Class
 */
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include "Shape.h"
#include "Point.h"
#ifndef FINAL_PROJECT_LINE_H
#define FINAL_PROJECT_LINE_H

#endif //FINAL_PROJECT_LINE_H

class Line : public Shape {
private:
    // inherited point vector and shapeType from Shape class
public:
    // Constructors
    Line(); // Default Constructor
    Line(Point p1, Point p2); // Property Constructor

    // Setters and Getters
    void setPoint1(Point p1); // setter
    Point getPoint1();  // getter

    void setPoint2(Point p2); // setter
    Point getPoint2(); // getter

    // Methods
    float calcLength(); // calculate length
    float calcSlope(); // calculate slope
    float calcAngle(); // calculate angle

    // Virtual Function for line shapes
    std::string displayInfo();
};