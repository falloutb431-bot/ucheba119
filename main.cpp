#include <iostream>
#include <vector>
#include <memory>
#include <limits>
#include "GeometryException.h"
#include "Shape.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

int main() {
    std::setlocale(LC_ALL, "");

    
    auto tryCreate = [](const char* label, auto createFunc) {
        std::cout << label << ":\n";
        try {
            auto ptr = createFunc();
            ptr->print();
        }
        catch (const GeometryException& e) {
            std::cout << e.what() << "\n";
        }
        std::cout << "\n";
        };

    

    tryCreate("Прямоугольный треугольник (правильный)", []() {
        return std::make_unique<RightTriangle>(3.0, 4.0, 5.0, 30.0, 60.0);
        });

    tryCreate("Равнобедренный треугольник (правильный)", []() {
        return std::make_unique<IsoscelesTriangle>(5.0, 7.0, 5.0, 50.0, 80.0, 50.0);
        });

    tryCreate("Равносторонний треугольник (правильный)", []() {
        return std::make_unique<EquilateralTriangle>(4.0);
        });

    tryCreate("Четырёхугольник (правильный)", []() {
        return std::make_unique<Quadrilateral>(3.0, 4.0, 5.0, 6.0, 80.0, 100.0, 70.0, 110.0);
      
        });

    tryCreate("Прямоугольник (правильный)", []() {
        return std::make_unique<Rectangle>(5.0, 3.0);
        });

    tryCreate("Квадрат (правильный)", []() {
        return std::make_unique<Square>(4.0);
        });

    tryCreate("Параллелограмм (правильный)", []() {
        return std::make_unique<Parallelogram>(5.0, 3.0, 70.0, 110.0);
       
        });

    tryCreate("Ромб (правильный)", []() {
        return std::make_unique<Rhombus>(4.0, 60.0, 120.0);
        });


   

    tryCreate("Прямоугольный треугольник (НЕПРАВИЛЬНЫЙ: сумма острых углов не 90)", []() {
 
        return std::make_unique<RightTriangle>(3.0, 4.0, 5.0, 40.0, 45.0);
        });

    tryCreate("Равнобедренный треугольник (НЕПРАВИЛЬНЫЙ: стороны не равны)", []() {
       
        return std::make_unique<IsoscelesTriangle>(5.0, 7.0, 6.0, 50.0, 80.0, 50.0);
        });

    tryCreate("Треугольник (НЕПРАВИЛЬНЫЙ: сумма углов не 180)", []() {
        return std::make_unique<Triangle>(3.0, 4.0, 5.0, 50.0, 60.0, 60.0);
       
        });

    tryCreate("Четырёхугольник (НЕПРАВИЛЬНЫЙ: сумма углов не 360)", []() {
        return std::make_unique<Quadrilateral>(3.0, 4.0, 5.0, 6.0, 90.0, 90.0, 90.0, 80.0);
       
        });

    return 0;
}
