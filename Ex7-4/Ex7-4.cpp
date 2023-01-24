#include <cstdlib>
#include <iostream>
#include "Robot.h"
using namespace std;


int main() {
   Robot r1, r2(10);
   cout << "position courante de r2: " << r2.getPosition() << endl;
   r1.deplacer();
   cout << "position courante de r1: " << r1.getPosition() << endl;
   r1.deplacer(2);
   cout << "position courante de r1: " << r1.getPosition() << endl;
   r1.faireDemiTour();
   r1.deplacer(4);
   cout << "position courante de r1: " << r1.getPosition() << endl;
   return EXIT_SUCCESS;
}

//position courante de r2: 10
//position courante de r1: 1
//position courante de r1: 3
//position courante de r1: -1
