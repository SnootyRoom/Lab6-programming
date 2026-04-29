#include "Point.h"
#include <iostream>
#include <cmath>

Point::Point() : x(0.0), y(0.0) {}

Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const { return this->x; }
double Point::getY() const { return this->y; }

void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }

void Point::print() const { std::cout << "(" << this->x << "; " << this->y << ")" << std::endl; }

double Point::distanceToOrigin() const { return sqrt(x * x + y * y); }