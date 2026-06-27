#pragma once
#include "Shape.h"


class Quadrilateral : public Shape {
protected:
    double a, b, c, d;
    double A, B, C, D;

public:
    Quadrilateral(double aVal, double bVal, double cVal, double dVal,
        double AVal, double BVal, double CVal, double DVal);

    void setSides(double aVal, double bVal, double cVal, double dVal);
    void setAngles(double AVal, double BVal, double CVal, double DVal);

    std::string getName() const override;
    void print() const override;
};