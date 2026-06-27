#include "Quadrilateral.h"
#include <iostream>
#include "GeometryException.h"

Quadrilateral::Quadrilateral(double aVal, double bVal, double cVal, double dVal,
    double AVal, double BVal, double CVal, double DVal)
    : a(aVal), b(bVal), c(cVal), d(dVal),
    A(AVal), B(BVal), C(CVal), D(DVal) {
}

void Quadrilateral::setSides(double aVal, double bVal, double cVal, double dVal) {
    a = aVal; b = bVal; c = cVal; d = dVal;
}

void Quadrilateral::setAngles(double AVal, double BVal, double CVal, double DVal) {
    A = AVal; B = BVal; C = CVal; D = DVal;
}

std::string Quadrilateral::getName() const {
    return "Четырёхугольник";
}

void Quadrilateral::print() const {
    std::cout << getName() << ":\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}