#include "Rhombus.h"
#include <iostream>
#include "GeometryException.h"

Rhombus::Rhombus(double side, double AVal, double BVal)
    : Parallelogram(side, side, AVal, BVal) {
}

std::string Rhombus::getName() const {
    return "Ромб";
}