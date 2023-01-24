#include <iostream>
#include "Point.h"
using namespace std;
// class :: constructor : variables {}
Point::Point(float x, float y) : x(x), y(y) {
}
// Fonction number
// returnType class:: fonctionName( variable 1, variable 2 ){definition}
void Point::deplacer(float dx, float dy) { // x3 = x1 + x2
   x += dx;
   y += dy;
}

void Point::afficher() const {
   cout << "(" << x << "," << y << ")" << endl;
}
