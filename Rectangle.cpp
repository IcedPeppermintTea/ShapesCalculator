/* File: Rectangle.cpp

 * Class: COP 3003
 * Dev: Ayleen Roque
 * Desc: Implementation file for Rectangle Class
 */

#include "Rectangle.h"

Rectangle::Rectangle(){
    points.resize(4);
    width = 0;
    height = 0;
} // Default Constructor
Rectangle::Rectangle(Point p, int w, int h){
    shapeType = RECTANGLE;
    width = w;
    height = h;
    points.push_back(p);
} // Property Constructor

// Accessors
void Rectangle::setPoint(Point p){
    points[0] = p;
} // setter

Point Rectangle::getPoint(){
    return points[0];
} //getter

void Rectangle::setWidth(int w){
    width = w;
} // setter
int Rectangle::getWidth(){
    return width;
} // getter

void Rectangle::setHeight(int h){
    height = h;
} // setter
int Rectangle::getHeight(){
    return height;
} // getter

// Methods

//*************************************************************
/* Calculates point 2 of a rectangle based on value for point 1
 * @Param - none
 * @returns string holding information of point 2
 */
std::string Rectangle::setPoint2(){
    std::string point2 = "(";
    int p2_x = points[0].getx() + width;
    int p2_y = points[0].gety();
    points[1].setx(p2_x), points[1].sety(p2_y);
    point2 = point2 + std::to_string(points[1].getx()) + ", " + std::to_string(points[1].gety());

    return point2;
}

//********************************************************************
/* Calculates point 3 of a rectangle based on value for points 1 and 2
 * @Param - none
 * @returns string holding information of point 3
 */
std::string Rectangle::setPoint3(){
    std::string point3 = "(";
    int p3_x = points[1].getx();
    int p3_y = points[1].gety() + height;
    points[2].setx(p3_x), points[2].sety(p3_y);
    point3 = point3 + std::to_string(points[2].getx()) + ", " + std::to_string(points[2].gety());

    return point3;
}

//*********************************************************************
/* Calculates point 4 of a rectangle based on value for point 1, 2, & 3
 * @Param - none
 * @returns string holding information of point 4
 */
std::string Rectangle::setPoint4(){
    std::string point4 = "(";
    int p4_x = points[0].getx();
    int p4_y = points[2].gety();
    points[3].setx(p4_x), points[3].sety(p4_y);
    point4 = point4 + std::to_string(points[3].getx()) + ", " + std::to_string(points[3].gety());

    return point4;
}

//*******************************************************************
/* Calculates area of Rectangle
 * @Param - none
 * @returns int variable holding area
 */
int Rectangle::calcArea(){
    int area = width * height;
    return area;
}

//*******************************************************************
/* Calculates perimeter of Rectangle
 * @Param - none
 * @returns int variable holding perimeter
 */
int Rectangle::calcPerimeter(){
    int perimeter = (2 * width) + (2 * height);
    return perimeter;
}

// Virtual Function
//********************************************************************
/* Displays information for the Rectangle shape objects
 * @Param - none
 * @returns string holding all information for Rectangle shape objects
 */
std::string Rectangle::displayInfo() {
    std::string retInfo = "\nRectangle:\n"; // return line description
    retInfo = retInfo + "Width = " + std::to_string(getWidth()) + "\n";
    retInfo = retInfo + "Height = " + std::to_string(getHeight()) + "\n";
    retInfo = retInfo + "Point: {(";
    retInfo = retInfo + std::to_string(points[0].getx()) + ", " + std::to_string(points[0].gety());
    retInfo += "), ";
    retInfo = retInfo + setPoint2();
    retInfo += "), ";
    retInfo = retInfo + setPoint3();
    retInfo += "), ";
    retInfo = retInfo + setPoint4();
    retInfo += ")} \n";
    retInfo = retInfo + "Perimeter = " + std::to_string(calcPerimeter()) + "\n";
    retInfo = retInfo + "Area = " + std::to_string(calcArea()) + "\n";

    return retInfo;
}