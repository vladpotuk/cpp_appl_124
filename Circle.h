#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

namespace Shapes {
    class Circle : public Shape {
    private:
        double centerX, centerY;
        double radius;
    public:
        Circle(double x, double y, double r);

        void Show() const override;
        void Save(std::ofstream& file) const override;
        void Load(std::ifstream& file) override;
    };
} 

#endif 

