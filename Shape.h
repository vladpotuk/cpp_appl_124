#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <fstream>

namespace Shapes {
    class Shape {
    public:
        virtual void Show() const = 0;
        virtual void Save(std::ofstream& file) const = 0;
        virtual void Load(std::ifstream& file) = 0;
        virtual ~Shape() {}
    };
} 

#endif 

