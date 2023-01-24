#include <algorithm> // class
#include <cstdlib> //calcule
#include <iostream>
#include <vector>
#include "pays.h"

using namespace std;

bool comparSuperficie(const Pays& pays_1, const Pays& pays_2) {
   return pays_1.getSuperficie() < pays_2.getSuperficie();
}

bool comparPopulation(const Pays& pays_1, const Pays& pays_2) {
   return pays_1.getPopulation() < pays_2.getPopulation();
}

bool comparDensitePopulation(const Pays& pays_1, const Pays& pays_2) {
   return pays_1.densitePopulation() < pays_2.densitePopulation();
}

int main() {

   Pays suisse("Suisse", 8.121830, 41290),
        france("France", 66.663766, 547030),
        italie("Italie", 61.855120, 301230),
        allemagne("Allemagne", 80.854408, 357021);

   vector<Pays> pays = {suisse, france, italie, allemagne};

   // Autres variantes
//    vector<Pays> pays = {Pays("Suisse", 8.121830, 41290),
//                         Pays("France", 66.663766, 547030),
//                         Pays("Italie", 61.855120, 301230),
//                         Pays("Allemagne", 80.854408, 357021)};

//    vector<Pays> pays = { {"Suisse", 8.121830, 41290},
//                          {"France", 66.663766, 547030},
//                          {"Italie", 61.855120, 301230},
//                          {"Allemagne", 80.854408, 357021} };
   
   cout << "Pays ayant la plus grande superficie               : "
        << max_element(pays.begin(), pays.end(), comparSuperficie)->getNom()
        << endl
        << "Pays ayant le plus d'habitants                     : "
        << max_element(pays.begin(), pays.end(), comparPopulation)->getNom()
        << endl
        << "Pays ayant la densite de population la plus grande : "
        << max_element(pays.begin(), pays.end(), comparDensitePopulation)->getNom()
        << endl;
      
   return EXIT_SUCCESS;
}

// Pays ayant la plus grande superficie               : France
// Pays ayant le plus d'habitants                     : Allemagne
// Pays ayant la densite de population la plus grande : Allemagne

