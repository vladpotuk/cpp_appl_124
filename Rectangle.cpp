#include "Rectangle.h"
#include <iostream>

namespace Shapes {
    Rectangle::Rectangle(double x, double y, double w, double h) : topLeftX(x), topLeftY(y), width(w), height(h) {}

    void Rectangle::Show() const {
        std::cout << "Rectangle: TopLeft(" << topLeftX << ", " << topLeftY << "), Width: " << width << ", Height: " << height << "\n";
    }

    void Rectangle::Save(std::ofstream& file) const {
        file << "Rectangle " << topLeftX << " " << topLeftY << " " << width << " " << height << "\n";
    }

    void Rectangle::Load(std::ifstream& file) {
        file >> topLeftX >> topLeftY >> width >> height;
    }
} 
