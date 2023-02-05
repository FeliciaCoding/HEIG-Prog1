/*
 *  Exercice 4.4 Année bissextile
    Ecrire un programme C++ affichant à l'écran si les années 1900, 2000, 2010 et 2020 sont bissextiles ou non.
    Pour ce faire, écrire une fonction booléenne estBissextile prenant en paramètre l'année à tester.
    Rappel:
        Une année est bissextile si elle est divisible par 400 ou alors par 4 mais pas par 100.
 *
 */



#include <iostream>
using namespace std;


bool estBissextile( int year);
void test(int year);



int main() {

    test(1900);
    test(2000);
    test(2010);
    test(2020);
    return 0;
}
//// ATTENTION: bool return (conditions)
bool estBissextile( int year){
    return ( year%400==0 ) || (year%4==0 && year%100!=0);
//    if (year%4==0 || year%400==0){
//        cout<< " Elle est Bissextile";
//    } else
//        cout<< " Elle n'est pas Bissextile";

}

//// ATTENTION: print < estBissextile(year) > , not < estBissextile >
void test(int year) {
    cout << year << " : " << boolalpha << estBissextile(year) << endl;
}