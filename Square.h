#pragma once
#include "Rectangle.h"

class Square : public Rectangle {
public:
    explicit Square(double side);

    std::string getName() const override;
};