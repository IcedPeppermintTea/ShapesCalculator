/* File: Shape.h

 * Class: COP 3003
 * Dev: Ayleen Roque
 * Desc: Specification File for Shape Class
 */
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include "Point.h"
#include <vector>


#ifndef FINAL_PROJECT_SHAPE_H
#define FINAL_PROJECT_SHAPE_H

enum typeOfShapes{
    UNKNOWN,
    LINE,
    RECTANGLE,
    CIRCLE
};

class Shape {
protected:
    std::vector<Point>points;
    typeOfShapes shapeType;
public:
    Shape(); // Default constructor

    Shape(typeOfShapes newType); // Property Constructor

    // Accessors for shapeType
    void setShape(typeOfShapes someShape); // Setter
    typeOfShapes getShape(); // Getter

    // Virtual function to be implemented in all derived classes
    virtual std::string displayInfo() {}
};


#endif //FINAL_PROJECT_SHAPE_H