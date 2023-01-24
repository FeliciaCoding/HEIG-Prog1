#include <cstdlib>
#include <iostream>
#include "Point.h"
using namespace std;

static void afficher(const Point& p) {
   cout << "(" << p.abscisse() << "," << p.ordonnee() << ")" << endl;
}

int main() {
   Point p(1.2f, 2.4f);
   afficher(p);
   p.deplacer(0.8f, 0.6f);
   afficher(p);

//   Point* ptr = new Point;
//   afficher(*ptr);
//   delete ptr;

   system("PAUSE");
   return EXIT_SUCCESS;
}
