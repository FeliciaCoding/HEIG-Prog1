/*
 * Exercice 3.20 Affichage de nombres par lots
   Ecrire un programme C++ qui affiche les nombres de 20 à 1 par lots de trois comme suit :
        20 19 18
        17 16 15
        14 13 12
        11 10  9
         8  7  6
         5  4  3
         2  1

    Résoudre le problème de deux manières différentes :
        1) En utilisant une boucle while
        2) En utilisant une boucle for
 */

#include <iostream>
#include <iomanip> // setw
#include <cmath> // log

using namespace std;

void printLine(){
    cout << "----------------------------------------------------" << endl;
}

int main() {
    const int NB_START(20);
    const int NB_END(1);
    const int NB_COLUMN(3);
    const int LENGTH(log10(NB_START) + 1);

    int i = NB_START;
    int noColumn = 1;
    // boucle while

//    while (i >= NB_END ){
//        cout << setw(LENGTH);
//        cout << i ;
//        //how to jump to next line?
//            //// set counter for columns
//        if (noColumn == NB_COLUMN){
//            cout << endl; // change line
//            noColumn = 0;
//        }else {
//            if (i != NB_END){
//                cout << " "; // space between numbers
//            }
//        }
//        noColumn++;
//        --i;
//    }
//    cout << endl;
//    printLine();

    // boucle for
    for (unsigned i = NB_START, noColumn = 1; i >=NB_END; ++noColumn, --i){
        // print numbers
        cout << setw(LENGTH) << i;
        // change line, when column = 3
        if (noColumn==NB_COLUMN){
            cout << endl;
            noColumn = 0;
        }else{ // otherwise print space between numbers
            if (i !=NB_END){ // last number does not need to print spcace
                cout << " ";
            }
        }

    }
    cout << endl;
    return 0;
}
