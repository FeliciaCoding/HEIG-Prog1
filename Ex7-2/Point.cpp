#include "Point.h"

Point::Point(float x, float y) : x(x), y(y) {
}

void Point::deplacer(float dx, float dy) {
   x += dx;
   y += dy;
}

float Point::abscisse() const {
   return x;
}

float Point::ordonnee() const {
   return y;
}
