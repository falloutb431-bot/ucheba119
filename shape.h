#pragma once
#include <string>

class Shape {
public:
    virtual ~Shape() = default;
    virtual std::string getName() const = 0;
    virtual void print() const = 0;
};