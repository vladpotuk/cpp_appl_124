#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

namespace Shapes {
    class Rectangle : public Shape {
    private:
        double topLeftX, topLeftY;
        double width, height;
    public:
        Rectangle(double x, double y, double w, double h);

        void Show() const override;
        void Save(std::ofstream& file) const override;
        void Load(std::ifstream& file) override;
    };
} 

#endif 

