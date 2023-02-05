//#include <iostream>
//#include <iomanip> // setpreicion
//#include <cstdlib>
//
//using namespace std;
//
///**
// * @brief Retourne le volume d'une pyramide à base rectanulaire
// * @param longueur  la longueur de la pyramide
// * @param largeur   la largeur de la pyramide
// * @param hauteur   la hauteur de la pyramide
// */
//
//// prototype
//void volumnePyramide(double longueur, double largeur, double hauteur);
//
//
//int main() {
//
//    volumnePyramide(10, 3.5, 12);
//    volumnePyramide(3.6, 2.4, 2.7);
//
//    return EXIT_SUCCESS;
//}
//
//// definition
//void volumnePyramide(double longueur, double largeur, double hauteur){
//    double volume;
//    volume=longueur * largeur  * hauteur * 1/3;
//    cout << fixed<<setprecision(1);
//    cout << "Volumn : " << volume << endl;
//}

// Corrigé

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

/**
* @brief Retourne le volume d'une pyramide à base rectanqulaire
* @param longueur la longueur de la pyramide
* @param largeur  la largeur de la pyramide
+ @param hauteur  la hauteur de la pyramide
+ @return le volume de la pyramide à base rectangulaire
*/

double volumePyramide (double longueur, double largeur, double hauteur);

/**
* Abrief Affiche à l'écran <code›texte‹/code> suivi de <code›valeur</code>.
* <р>
* <code›valeur</code> est affichée en mode fixed avec une précision
* (nombre de chiffres après la virgule) fixée par le paramètre
* <code›precision</code>.
+ @param texte
le texte à afficher
+ @param valeur
la valeur à afficher
+ @param precision la précision souhaitée
*/

void afficher (const string& texte, double valeur, int precision);


int main () {
    afficher("volume pyramide 1 = ", volumePyramide(10, 3.5, 12), 1);// 140.0
    afficher("volume pyramide 2 = ", volumePyramide(3.6, 2.4, 2.7), 1); // 7.8
    return EXIT_SUCCESS;
}

double volumePyramide (double longueur, double largeur, double hauteur) {
return longueur * largeur * hauteur / 3.0;
}

//// put setprecision into a part of the fonction
void afficher (const string& texte, double valeur, int precision) {
    cout << fixed << setprecision(precision) << texte << valeur << endl;
}

