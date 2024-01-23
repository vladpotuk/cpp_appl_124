#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Shape.h"

namespace Shapes {
    class Ellipse : public Shape {
    private:
        double topLeftX, topLeftY;
        double majorAxis, minorAxis;
    public:
        Ellipse(double x, double y, double major, double minor);

        void Show() const override;
        void Save(std::ofstream& file) const override;
        void Load(std::ifstream& file) override;
    };
} 

#endif 

