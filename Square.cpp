#include "Square.h"
#include <iostream>

namespace Shapes {
    Square::Square(double x, double y, double side) : topLeftX(x), topLeftY(y), sideLength(side) {}

    void Square::Show() const {
        std::cout << "Square: TopLeft(" << topLeftX << ", " << topLeftY << "), Side Length: " << sideLength << "\n";
    }

    void Square::Save(std::ofstream& file) const {
        file << "Square " << topLeftX << " " << topLeftY << " " << sideLength << "\n";
    }

    void Square::Load(std::ifstream& file) {
        file >> topLeftX >> topLeftY >> sideLength;
    }
} 
