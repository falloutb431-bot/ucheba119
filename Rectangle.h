#pragma once
#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
    Rectangle(double width, double height);

    std::string getName() const override;
};