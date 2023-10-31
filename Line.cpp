/* File: Line.cpp

 * Class: COP 3003
 * Dev: Ayleen Roque
 * Desc: Implementation file for Line Class
 */
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "Line.h"
#include "Shape.h"
#include "Point.h"
#include <vector>

// Constructors
Line::Line() {
    points.resize(2); // make room for 2 points
} // Default Constructor

Line::Line(Point p1, Point p2) {
    shapeType = LINE;
    points.push_back(p1);
    points.push_back(p2);
}// Property Constructor

// Accessors
void Line::setPoint1(Point p1){
    points[0] = p1;
} // setter

Point Line::getPoint1() {
    return points[0];
} // getter

void Line::setPoint2(Point p2) {
    points[1] = p2;
} // setter

Point Line:: getPoint2() {
    return points[1];
} // getter

// Methods
//*******************************************************************
/* Calculate length of a line
 * @Param - none
 * @returns float variable holding length
 */
float Line::calcLength() {
    float x2_x1, y2_y1, length;
    x2_x1 = points[1].getx() - points[0].getx();
    y2_y1 = points[1].gety() - points[0].gety();
    length = sqrt(pow(x2_x1, 2) + pow(y2_y1, 2));
    return length;
}

//*******************************************************************
/* Calculate slope of a line
 * @Param - none
 * @returns float variable holding slope
 */
float Line::calcSlope() {
    float slope_calc, x2_x1, y2_y1;
    x2_x1 = points[1].getx() - points[0].getx();
    y2_y1 = points[1].gety() - points[0].gety();
    slope_calc = (y2_y1) / (x2_x1);
    return slope_calc;
}

//*******************************************************************
/* Calculate angle of a line
 * @Param - none
 * @returns float variable holding angle
 */
float Line:: calcAngle() {
    float angle_calc, x2_x1, y2_y1;
    x2_x1 = points[1].getx() - points[0].getx();
    y2_y1 = points[1].gety() - points[0].gety();
    angle_calc = atan2(y2_y1, x2_x1) * (180.0 / M_PI);
    return angle_calc;
}

//*******************************************************************
/* Display all information for line shapes
 * @Param - none
 * @returns string holding all information for line shapes in vector
 */
std::string Line::displayInfo() {
    std::string retInfo = "\nLine:\n"; // return line description
    retInfo = retInfo + "Points: {(";
    retInfo = retInfo + std::to_string(points[0].getx()) + ", " + std::to_string(points[0].gety());
    retInfo += "), (";
    retInfo = retInfo + std::to_string(points[1].getx()) + ", " + std::to_string(points[1].gety());
    retInfo += ")}\n";
    retInfo = retInfo + "Length = " + std::to_string(calcLength()) + "\n";
    retInfo = retInfo + "Slope = " + std::to_string(calcSlope()) + "\n";
    retInfo = retInfo + "Angle = " + std::to_string(calcAngle()) + "\n";

    return retInfo;
}