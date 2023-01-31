/*
 * Exercice 3.11 Multiple de 3 et/ou de 5

   Ecrire un programme C++ qui, après avoir demandé à l'utilisateur de
   saisir un entier n ≥ 0, affiche, en fonction de la valeur de n,
   l'une des 4 réponses ci-dessous :

        • <n> est un multiple de 3
        • <n> est un multiple de 5
        • <n> est un multiple de 3 et de 5
        • <n> n'est ni un multiple de 3 ni un multiple de 5

    IMPORTANT
        • On suppose la saisie utilisateur correcte
 *
 */

#include <iostream>
using namespace std;


int main() {

    // ATTENTION 1 : == for condition
    // ATTENTION 2 : only != 0 can be ignored
    // ATTENTION 3 : Be careful the order
    unsigned int n;
    cout << "Enrter a positive integer : ";
    cin >> n;

    if (n%15==0){
        cout << "n is a multiple of both 3 and 5";
    }
    else if (n%3==0) {
        cout << "n is a multiple of 3";
    }
    else if (n%5==0){
        cout << "n is a multiple of 5";
    }
    else
        cout << "n is nither a multiple of 3 nor a multiple of 5";



    return 0;
}
