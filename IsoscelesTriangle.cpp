#include "IsoscelesTriangle.h"
#include <iostream>
#include "GeometryException.h"

IsoscelesTriangle::IsoscelesTriangle(double aVal, double bVal, double cVal,
    double AVal, double BVal, double CVal)
    : Triangle(aVal, bVal, cVal, AVal, BVal, CVal) {
}

std::string IsoscelesTriangle::getName() const {
    return "Равнобедренный треугольник";
}