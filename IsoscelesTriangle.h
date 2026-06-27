#pragma once
#include "Triangle.h"


class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double aVal, double bVal, double cVal,
        double AVal, double BVal, double CVal);

    std::string getName() const override;
};