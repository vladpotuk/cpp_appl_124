#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

namespace Shapes {
    class Square : public Shape {
    private:
        double topLeftX, topLeftY;
        double sideLength;
    public:
        Square(double x, double y, double side);

        void Show() const override;
        void Save(std::ofstream& file) const override;
        void Load(std::ifstream& file) override;
    };
} 

#endif 

