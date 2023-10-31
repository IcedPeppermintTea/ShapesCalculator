/* File: Rectangle.h

 * Class: COP 3003
 * Dev: Ayleen Roque
 * Desc: Specification file for Rectangle Class
 */
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include "Shape.h"
#include "Point.h"

#ifndef FINALPROJECT_RECTANGLE_H
#define FINALPROJECT_RECTANGLE_H

class Rectangle : public Shape {
private:
    // point inherited from Shape class
    // can calculate other three points
    int width;
    int height;
public:
    Rectangle(); // Default Constructor
    Rectangle(Point p, int w, int h); // Property Constructor

    // Accessors
    void setPoint(Point p); // setters
    Point getPoint();  // getters

    void setWidth(int p); // setters
    int getWidth();  // getters

    void setHeight(int h); // setters
    int getHeight();  // getters

    // Methods
    std::string setPoint2();
    std::string setPoint3();
    std::string setPoint4();

    int calcArea(); // calculate area
    int calcPerimeter(); // calculate perimeter

    //  Virtual Function implemented for rectangles
    std::string displayInfo();

};


#endif //FINALPROJECT_RECTANGLE_H
