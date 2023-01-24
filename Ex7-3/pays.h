#ifndef PAYS_H
#define PAYS_H

#include <string>

class Pays {
public:
   // Constructeur : stocker data >> meanwhile declaring in private
   Pays(const std::string& nom, double population, unsigned superficie);

   // Sélecteurs : get() const
   std::string getNom() const;
   double getPopulation() const;
   unsigned getSuperficie() const;

   // Modificateurs: set()
   void setNom(const std::string& nom);
   void setPopulation(double population);
   void setSuperficie(unsigned superficie);

   // Autres
   double densitePopulation() const;

private:
   std::string nom;     // nom du pays 
   double population;   // en mio d'habitants
   unsigned superficie; // en km2
};

#endif
