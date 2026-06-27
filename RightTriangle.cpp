#include "RightTriangle.h"
#include <iostream>
#include "GeometryException.h"

RightTriangle::RightTriangle(double aVal, double bVal, double cVal,
    double AVal, double BVal)
    : Triangle(aVal, bVal, cVal, AVal, BVal, 90.0) {
}

std::string RightTriangle::getName() const {
    return "Прямоугольный треугольник";
}