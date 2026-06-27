#pragma once
#include "Triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(double aVal, double bVal, double cVal,
        double AVal, double BVal); // C всегда 90

    std::string getName() const override;
};