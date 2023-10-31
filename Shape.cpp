/* File: Shape.cpp

 * Class: COP 3003
 * Dev: Ayleen Roque
 * Desc: Implementation file for the Shapes classes
 */
#define _USE_MATH_DEFINES
#include "Shape.h"
#include <vector>

Shape::Shape() {
    shapeType = UNKNOWN;
} // Default Constructor

Shape::Shape(typeOfShapes newType) {
    shapeType = newType;
} // Property Constructor

void Shape::setShape(typeOfShapes someShape) {
    shapeType = someShape;
} // Setter

typeOfShapes Shape::getShape() {
    return shapeType;
} // Setter