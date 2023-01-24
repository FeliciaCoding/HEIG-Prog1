#include <cstdlib>
#include <iostream>
#include "Point.h"
using namespace std;

static void afficher(const Point& p) {
   cout << "(" << p.abscisse() << "," << p.ordonnee() << ")" << endl;
}

int main() {
   const Point P1(1,2);
   const Point P2 = Point(3,4); // autre manière d'écrire les choses
   afficher(P1 + P2);
   return EXIT_SUCCESS;
}
