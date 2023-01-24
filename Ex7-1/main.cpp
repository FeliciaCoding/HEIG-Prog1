#include <cstdlib>
#include "Point.h"
using namespace std;

int main() {
   Point p(1.2f, 2.4f);
   p.afficher();
   p.deplacer(0.8f, 0.6f);
   p.afficher();
   
   system("PAUSE");
   return EXIT_SUCCESS;
}

