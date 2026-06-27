
#include "EquilateralTriangle.h"
#include <iostream>
#include "GeometryException.h"

EquilateralTriangle::EquilateralTriangle(double side)
    : Triangle(side, side, side, 60.0, 60.0, 60.0) {
}

std::string EquilateralTriangle::getName() const {
    return "Равносторонний треугольник";
}