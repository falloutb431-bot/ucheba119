#include "Square.h"
#include <iostream>
#include "GeometryException.h"

Square::Square(double side) : Rectangle(side, side) {}

std::string Square::getName() const {
    return "Квадрат";
}