#pragma once
#include "Parallelogram.h"

class Rhombus : public Parallelogram {
public:
    Rhombus(double side, double AVal, double BVal);

    std::string getName() const override;
};