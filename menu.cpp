/* File: menu.cpp

 * Class: COP 3003
 * Dev: Ayleen Roque
 * Desc: Menu for the Shapes Calculator
 */
#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include "Shape.h"
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"

// Function Prototypes
Line* getNewLine();
Circle* getNewCircle();
Rectangle* getNewRectangle();

int main() {
    // Variables
    char choice;

    // create dynamic array of shapes
    std::vector<Shape*> shapes;

    // Loop main menu
    do {
        std::cout << "\nEnter 1st character: " // options
                  << "\n\tLine"
                  << "\n\tRectangle"
                  << "\n\tCircle"
                  << "\n\tPrint"
                  << "\n\tExit" << std::endl;
        std::cout << ">";
        std::cin >> choice;

        // Choosing options
        if (choice == 'L') // line
        {
            Line* newline = getNewLine(); // load new line
            shapes.push_back(newline); // push into vector shapes
        }
        else if (choice == 'R') // rectangle
        {
            Rectangle* newRectangle = getNewRectangle();
            shapes.push_back(newRectangle);  // push into vector shapes
        }
        else if (choice == 'C') // circle
        {
            Circle* newCircle = getNewCircle();
            shapes.push_back(newCircle);  // push into vector shapes
        }
        else if (choice == 'P') // printing
        {
            for (int i = 0; i < shapes.size(); i++) {
                std::cout << shapes[i]->displayInfo();
            }
        }

    } while (choice != 'E'); // exit

    return 0;
}

//***********************************************************
/* Asks user for two point values for line
 * @Param - none
 * @returns new line with user values
 */
Line* getNewLine() {
    int x1, y1, x2, y2; // points for the line
    std::cout << "Enter two points for a line..." << std::endl;

    // Set point 1
    Point point1;
    std::cout << "\nEnter a point (x space y enter):";
    std::cin >> x1 >> y1;
    point1.setx(x1), point1.sety(y1);

    // Set point 2
    Point point2;
    std::cout << "\nEnter a point (x space y enter):";
    std::cin >> x2 >> y2;
    point2.setx(x2), point2.sety(y2);

    return new Line(point1, point2);
}

//***********************************************************
/* Asks user for center point,and radius for circle
 * @param - none
 * @return new circle with user values
 */
Circle* getNewCircle() {
    int x1, y1; // point for the circle
    std::cout << "\nEnter a center point of a circle..." << std::endl;

    // set point
    Point circle_point;
    std::cout << "\nEnter a point (x space y enter):";
    std::cin >> x1 >> y1;
    circle_point.setx(x1), circle_point.sety(y1);

    // set radius
    int radius_val;
    std::cout << "\nEnter radius of the circle: ";
    std::cin >> radius_val;

    return new Circle(circle_point, radius_val);
}

//***********************************************************
/* Asks user for point, width, and height for rectangle
 * @param - none
 * @returns new rectangle with user input
 */
Rectangle* getNewRectangle() {
    int x1, y1, w, h; // point for the rectangle
    std::cout << "\nEnter top left point of a rectangle..." << std::endl;

    // set point
    Point rect_point;
    std::cout << "\nEnter a point (x space y enter):";
    std::cin >> x1 >> y1;
    rect_point.setx(x1), rect_point.sety(y1);

    // set height and width
    std::cout << "\nEnter width of the rectangle:";
    std::cin >> w;

    std::cout << "\nEnter height of the rectangle:";
    std::cin >> h;

    return new Rectangle(rect_point, w, h);
}