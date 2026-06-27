#include "Parallelogram.h"
#include <iostream>
#include "GeometryException.h"

Parallelogram::Parallelogram(double aVal, double bVal,
    double AVal, double BVal)
    // противоположные стороны и углы равны
    : Quadrilateral(aVal, bVal, aVal, bVal, AVal, BVal, AVal, BVal) {
}

std::string Parallelogram::getName() const {
    return "Параллелограмм";
}