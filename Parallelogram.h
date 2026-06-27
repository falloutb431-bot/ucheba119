#pragma once
#include "Quadrilateral.h"


class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double aVal, double bVal,
        double AVal, double BVal);

    std::string getName() const override;
};