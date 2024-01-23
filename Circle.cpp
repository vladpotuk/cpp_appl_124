#include "Circle.h"
#include <iostream>

namespace Shapes {
    Circle::Circle(double x, double y, double r) : centerX(x), centerY(y), radius(r) {}

    void Circle::Show() const {
        std::cout << "Circle: Center(" << centerX << ", " << centerY << "), Radius: " << radius << "\n";
    }

    void Circle::Save(std::ofstream& file) const {
        file << "Circle " << centerX << " " << centerY << " " << radius << "\n";
    }

    void Circle::Load(std::ifstream& file) {
        file >> centerX >> centerY >> radius;
    }
} 
