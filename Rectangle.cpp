#include "Rectangle.h"
#include <iostream>
#include "GeometryException.h"

Rectangle::Rectangle(double width, double height)
    : Quadrilateral(width, height, width, height, 90.0, 90.0, 90.0, 90.0) {
}

std::string Rectangle::getName() const {
    return "Прямоугольник";
}