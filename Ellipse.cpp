#include "Ellipse.h"
#include <iostream>

namespace Shapes {
    Ellipse::Ellipse(double x, double y, double major, double minor) : topLeftX(x), topLeftY(y), majorAxis(major), minorAxis(minor) {}

    void Ellipse::Show() const {
        std::cout << "Ellipse: TopLeft(" << topLeftX << ", " << topLeftY << "), Major Axis: " << majorAxis << ", Minor Axis: " << minorAxis << "\n";
    }

    void Ellipse::Save(std::ofstream& file) const {
        file << "Ellipse " << topLeftX << " " << topLeftY << " " << majorAxis << " " << minorAxis << "\n";
    }

    void Ellipse::Load(std::ifstream& file) {
        file >> topLeftX >> topLeftY >> majorAxis >> minorAxis;
    }
} 
