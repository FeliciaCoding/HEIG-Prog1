#include "Point.h"
// definition of operator : class
Point operator +(const Point& p1, const Point& p2) { // "friend" declared in header file
   return Point(p1.x + p2.x, p1.y + p2.y);
}

Point::Point(float x, float y) : x(x), y(y) { // definition of constructor & fonction -> "class::"
}

void Point::deplacer(float dx, float dy) { // fonction need to showed "returnType"
   x += dx;
   y += dy;
}

float Point::abscisse() const {
   return x;
}

float Point::ordonnee() const {
   return y;
}

//Point Point::operator +(const Point& p) const {
//   return Point(this->x + p.x, this->y + p.y); // this-> pas strict. nécess.
//}

