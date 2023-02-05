#include <iostream>
#include <string>


void printLine(){
    std::cout << "-------------------------------------------------" << std::endl;
}

void fV(int p1, char p2){
    std::cout <<  "p1 = "<< p1 << ", ";
    std::cout <<  "p2 = "<< p2 << std::endl;
}

void fRC(const int& p1, const char& p2){
    std::cout <<  "p1 = "<< p1 << ", ";
    std::cout <<  "p2 = "<< p2 << std::endl;
}

void fR(int& p1, char& p2){
    std::cout <<  "p1 = "<< p1 << ", ";
    std::cout <<  "p2 = "<< p2 << std::endl;
}

bool estImpair (int valeur){
    return valeur % 2;
}

bool estImpairE (int valeur){
    return bool(valeur % 2);
}

int& plusPetit(int& plusPetitA, int& plusPetitB){
    return plusPetitA < plusPetitB ? plusPetitA : plusPetitB;
}

int main() {

    int a = 2;
    int b = a; //// unless using affection =, otherwise a changes, b will not change
    //// b changes , a will not changes
//// par référance:    & c et a sont synonymes
    int& c = a;
    int d = 6;

    // error : int& e= 9;
    std::cout << a << b << c << d << std::endl;

    c = 4;
    std::cout << a << b << c << d << std::endl;

    b = 3;
    std::cout << a << b << c << d << std::endl;

    a = 5;
    std::cout << a << b << c << d << std::endl;

    d= 8;
    std::cout << a << b << c << d << std::endl;

    //  e = 9;
    //  std::cout << a << b << c << d << e << std::endl;
    printLine();

    const int CI = 65;
    const char CC = 'B';
    int vi = 67;
    char vc = 'D';

    fR(vi, vc);
    //// cannot pass CONSTANT
    // fR(CI, CC);
    //// pas de converion implicit
    // fR(vc, vi);
    //// doit être une variable
    // fR(67, vc);
    printLine();

    fV(vi, vc);
    fV(CI, CC);
    fV(vc, vi);
    fV(67, vc);
    printLine();


    fRC(vi, vc);
    //// can be CONSTANT
    fRC(CC, CI);
    //// can do converion implicit
    fRC(vc, vi);
    //// can be a value
    fRC(67, vc);
    printLine();

    std::cout << std::boolalpha << estImpair(3) << std::endl;
    std::cout << std::boolalpha << estImpairE(4) << std::endl;
    printLine();

    //// return par référance
    // PAS RETOURNER DE RéFéFENCE à UNE VARIABLE LOCALE

    int globalA = 5;
    int globalB = 6;
    int localC = plusPetit(globalA, globalB);       // 5
    std::cout << "globalA :" << globalA << std::endl;      // 5
    std::cout << "globalB :" << globalB<< std::endl;       // 6
    std::cout << "plusPetitC = plusPetit(globalA, globalB) :" << localC << std::endl;    // 5
    std::cout << std::endl;

    localC = 10;  // affect que localC
    std::cout << "Après localC = 10 : "<< std::endl;
    std::cout << "globalA :" << globalA << std::endl;       // NO EFFECT = 5
    std::cout << "globalB :" << globalB << std::endl;       // 6
    std::cout << "plusPetitC :" << localC << std::endl;    // 10
    std::cout << std::endl;

    plusPetit(globalA, globalB) = 15;  // globalA & globalB
    std::cout << "Après plusPetit(globalA, globalB) = 15 : "<< std::endl;
    std::cout << "globalA :" << globalA << std::endl;      // A = 15
    std::cout << "globalB :" << globalB << std::endl;
    std::cout << "plusPetitC :" << localC << std::endl;    // NO EFFECT
    std::cout << std::endl;

    localC = plusPetit(globalA, globalB) = 16; // globalA & globalB & localC
    std::cout << "Après localC = plusPetit(globalA, globalB) = 16:" << std::endl;
    std::cout << "globalA :" << globalA << std::endl;      // A =
    std::cout << "globalB :" << globalB << std::endl;      // 16
    std::cout << "plusPetitC :" << localC << std::endl;    // 16
    std::cout << std::endl;
    printLine();


    std::string s1("Hello");
    char c1 = s1.at(0); // .at() à droite
    std::cout << "c1 = " << c1 << std::endl;

    s1.at(0) = (char)tolower(c1); // à gauche
    std::cout << "s1.at(0) = " <<  s1.at(0) << std::endl;
    std::cout << "s1 = " << s1 << std::endl;

    printLine();

    //  Enchaîner d'opérateur d'affectation
    int a_enchainer = 5;
    int b_enchainer = 4;
    int c_enchainer = 3;
    int d_enchainer = 2;
    int e_enchainer = 1;
    int f_enchainer = a_enchainer;
    std:: cout<< a_enchainer << " "<<
              b_enchainer << " " <<
              c_enchainer << " "<<
              d_enchainer << " " <<
              e_enchainer << " " <<
              f_enchainer << std::endl;  //5

    //// right to left
    a_enchainer = b_enchainer = c_enchainer = 6; // AFFECT PAS f
    std:: cout<< a_enchainer << " "<<       //6
              b_enchainer << " " <<      //6
              c_enchainer << " "<<       //6
              d_enchainer << " " <<
              e_enchainer << " " <<
              f_enchainer << std::endl;  //5

    f_enchainer = 7;
    std:: cout<< a_enchainer << " "<<    //6
              b_enchainer << " " <<      //6
              c_enchainer << " "<<       //6
              d_enchainer << " " <<      //2
              e_enchainer << " " <<      //1
              f_enchainer << std::endl;  //7

    printLine();

    //constexpr
    // 1. retourner une valeur constexpr
    // être évaluable à la compliation : des valeur, pas des variabels
    // p.39




}

