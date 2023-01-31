/*  Exercice 3.5 Qui vaut 0 ?
    On suppose disposer de deux entiers x et y.
    Ecrire (de plusieurs manières différentes) la condition permettant de tester :
    a) que nos deux entiers valent 0
    b) qu'au moins l'un de nos deux entiers vaut 0
    c) qu'un seul de nos deux entiers vaut 0
 */


#include <iostream>
using namespace std;

int main() {
    int x=0;
    int y=50;


    cout << boolalpha;
    // ATTENTION: need to use big ()
    cout << ((x == 0) && (y == 0)) << endl;
    cout << ((x == 0) || (y == 0)) << endl;
    cout << (((x == 0) || (y == 0)) && !((x == 0) && ( y == 0))) << endl;

    return 0;
}
