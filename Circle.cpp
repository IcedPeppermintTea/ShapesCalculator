/* File: Circle.cpp

 * Class: COP 3003
 * Dev: Ayleen Roque
 * Desc: Implementation File for Circle class
 */
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <vector>
#include "Shape.h"
#include "Point.h"
#include "Circle.h"

Circle::Circle(){
    points.resize(1); // make room for one point
    radius = 0;
}  // Default Constructor

Circle::Circle(Point p1, int num){
    shapeType = CIRCLE;
    radius = num;
    points.push_back(p1);
} // Property Constructor

// Accessors
void Circle::setPoint(Point p){
    points[0] = p;
}  // setter
Point Circle::getPoint() {
    return points[0];
}  // getter

void Circle::setRadius(int r){
    radius = r;
} // setter
int Circle::getRadius(){
    return radius;
}  // getter

// Methods
//***********************************************************
/* Calculate Diameter of Circle
 * @Param - none
 * @returns float variable holding diameter
 */
float Circle::calcDiameter(){
    float diameter = radius * 2;
    return diameter;
}

//***********************************************************
/* Calculate Circumference of Circle
 * @Param - none
 * @returns float variable holding circumference
 */
float Circle::calcCircumference(){
    float circ = (2 * M_PI * radius);
    return circ;
}

//***********************************************************
/* Calculate area of Circle
 * @Param - none
 * @returns float variable holding area
 */
float Circle::calcArea(){
    float area = M_PI * pow(radius, 2);
    return area;
}

// Virtual Function
//***********************************************************
/* Display Information for all circle shapes
 * @Param - none
 * @returns string holding all information for Circle Shapes
 */
std::string Circle::displayInfo() {
    std::string retInfo = "\nCircle:\n"; // return line description
    retInfo = retInfo + "Center: {(";
    retInfo = retInfo + std::to_string(points[0].getx()) + ", " + std::to_string(points[0].gety());
    retInfo += ")}\n";
    retInfo = retInfo + "Radius = " + std::to_string(getRadius()) + "\n";
    retInfo = retInfo + "Diameter = " + std::to_string(calcDiameter()) + "\n";
    retInfo = retInfo + "Circumference = " + std::to_string(calcCircumference()) + "\n";
    retInfo = retInfo + "Area = " + std::to_string(calcArea()) + "\n";

    return retInfo;
}