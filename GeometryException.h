#pragma once
#include <exception>
#include <string>

class GeometryException : public std::exception {
private:
    std::string message;

public:
    explicit GeometryException(const std::string& msg) : message(msg) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};