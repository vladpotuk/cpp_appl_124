#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Ellipse.h"
#include <fstream>

int main() {
    using namespace Shapes;

    const int maxShapes = 4;
    Shape* shapes[maxShapes];

    
    shapes[0] = new Square(1.0, 2.0, 3.0);
    shapes[1] = new Rectangle(2.0, 3.0, 4.0, 5.0);
    shapes[2] = new Circle(3.0, 4.0, 6.0);
    shapes[3] = new Ellipse(4.0, 5.0, 7.0, 8.0);

    for (int i = 0; i < maxShapes; ++i) {
        shapes[i]->Show();
    }

   
    std::ofstream outFile("shapes.txt");
    for (int i = 0; i < maxShapes; ++i) {
        shapes[i]->Save(outFile);
    }
    outFile.close();

    
    Shape* loadedShapes[maxShapes];
    std::ifstream inFile("shapes.txt");
    std::string type;
    for (int i = 0; i < maxShapes && inFile >> type; ++i) {
        if (type == "Square") {
            loadedShapes[i] = new Square(0, 0, 0);
        }
        else if (type == "Rectangle") {
            loadedShapes[i] = new Rectangle(0, 0, 0, 0);
        }
        else if (type == "Circle") {
            loadedShapes[i] = new Circle(0, 0, 0);
        }
        else if (type == "Ellipse") {
            loadedShapes[i] = new Ellipse(0, 0, 0, 0);
        }
        loadedShapes[i]->Load(inFile);
    }
    inFile.close();

    
    for (int i = 0; i < maxShapes; ++i) {
        loadedShapes[i]->Show();
    }

    
    for (int i = 0; i < maxShapes; ++i) {
        delete shapes[i];
        delete loadedShapes[i];
    }

    return 0;
}
