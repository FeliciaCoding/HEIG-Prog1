/*
 Exercice 3.9 Minimum de 3 entiers
    Ecrire un programme C++ qui, après avoir demandé à l'utilisateur de
    saisir (sur une même ligne) 3 entiers (de type int) détermine /
    affiche le minimum de ces 3 entiers.
 IMPORTANT
    • On suppose la saisie utilisateur correcte
    • Le problème doit être résolu sans utiliser d'autres librairies que cstdlib et iostream
 */

#include <iostream>
using namespace std;


int main() {

    int a, b, c;

    cout << " Entering 3 integers : ";
    cin >> a >> b >> c ;

    cout << "a= "<< a << ", b= "<< b << ", c= "<< c << endl;

//    // method 1 => if...else if..else
//    if ( a<b && a<c ){
//        cout << "Minimum = " <<a;
//    }
//    else if (b<c && b<a){
//        cout << "Minimum = " << b;
//    }
//    else
//        cout << "Minimum = " << c;

//    // method 2 => assigning a variable "min"
//
//    int min = a;
//
//    if (b < min) {
//        min = b;
//    }
//    if (c < min) {
//        min = c;
//    }
//
//    cout << "La plus petite valeur est " << min << endl;
    //--------------------------------------------------------------------

    // method 3 => condition ? planA : planB
    int min = a < b ? a : b ;
    min = c < min ? c : min ;
    cout << "La plus petite valeur est " << min << endl;

    //--------------------------------------------------------------------

    // method 3 => condition1 ? planA(ondition2) : planB(ondition3)
    int min = a < b ? (a < c ? a : c ) : (b < c ? b : c);
    cout << "La plus petite valeur est " << min << endl;

    return 0;

}
