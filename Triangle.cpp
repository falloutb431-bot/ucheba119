#include "Triangle.h"
#include <sstream>
#include <iostream>
#include "GeometryException.h"

Triangle::Triangle(double aVal, double bVal, double cVal,
    double AVal, double BVal, double CVal)
    : a(aVal), b(bVal), c(cVal), A(AVal), B(BVal), C(CVal) {
}

void Triangle::setSides(double aVal, double bVal, double cVal) {
    a = aVal; b = bVal; c = cVal;
}

void Triangle::setAngles(double AVal, double BVal, double CVal) {
    A = AVal; B = BVal; C = CVal;
}

std::string Triangle::getName() const {
    return "Треугольник";
}

void Triangle::print() const {
    std::cout << getName() << ":\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
}