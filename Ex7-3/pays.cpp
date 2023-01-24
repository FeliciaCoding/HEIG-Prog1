#include "pays.h"

using namespace std;

Pays::Pays(const string& nom, double population, unsigned superficie)
: nom(nom), population(population), superficie(superficie) {
}

// gettetr : return variable
string Pays::getNom() const {
   return nom;
}

double Pays::getPopulation() const {
   return population;
}

unsigned Pays::getSuperficie() const {
   return superficie;
}

// setter : affaction
void Pays::setNom(const string& nom) {
   this->nom = nom;
}

void Pays::setPopulation(double population) {
   this->population = population;
}

void Pays::setSuperficie(unsigned superficie) {
   this->superficie = superficie;
}

//
double Pays::densitePopulation() const {
   return population * 1E6 / superficie;
}
