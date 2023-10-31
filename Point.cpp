/* File: menu.cpp

 * Class: COP 3003
 * Dev: Ayleen Roque
 * Desc: Menu for the Shapes classes
 */
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
#include "Point.h"

// Constructors
//_______________________________________________________________________________________________
Point::Point(){ // Default Constructor
    x = 0;
    y = 0;
}
Point::Point(int x, int y) { // Property Constructor
    this->x = x;
    this->y = y;
}

// Setters and Getters
//_______________________________________________________________________________________________
int Point::setx(int value) {
    x = value;
}
int Point::getx(){
    return x;
}

int Point::sety(int value){
    y = value;
}
int Point::gety(){
    return y;
}