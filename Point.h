/* File: Point.h

 * Class: COP 3003
 * Dev: Ayleen Roque
 * Desc: Specification file for Point Class
 */
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

#ifndef FINAL_PROJECT_POINT_H
#define FINAL_PROJECT_POINT_H


class Point {
private:
    int x;
    int y;
public:
    // Constructors
    //_______________________________________________________________________________________________
    Point(); // Default Constructor
    Point(int x, int y); // Property Constructor

    // Setters and Getters
    //_______________________________________________________________________________________________
    int setx(int value);
    int getx();

    int sety(int value);
    int gety();
};


#endif //FINAL_PROJECT_POINT_H