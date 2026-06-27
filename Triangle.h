#pragma once
#include "Shape.h"

class Triangle : public Shape {
protected:
    double a, b, c;
    double A, B, C;

public:
    Triangle(double aVal, double bVal, double cVal,
        double AVal, double BVal, double CVal);

    void setSides(double aVal, double bVal, double cVal);
    void setAngles(double AVal, double BVal, double CVal);

    std::string getName() const override;
    void print() const override;
};