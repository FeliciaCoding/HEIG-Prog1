#include <iostream>
#include <cmath>
#include <cstdlib> // EXIT_SUCCESS
#include <iomanip> //setprecision


using namespace std;

void printLine() {
    cout << "--------------------------------------------------------" << endl;
}

int a = 1;

int main() {

//    /* Blocs imbriqués */
//    cout << "Global variable: " << a << endl;
//    int a = 2;
//    cout << "Variable précédente: " << a << endl;
//
//    {
//        int a = 3;
//        cout << "Variable imbriquée 1 : " << a << endl;
//
//        {
//            int a = 4;
//            cout << "Variable imbriquée 2 : " << a << endl;
//
//            {
//                int a = 5;
//                cout << "Variable imbriquée 3 : " << a << endl;
//            }
//        }
//
//        cout << "Variable imbriquée 1 : " << a << endl;
//        // once get out og the block , the variables are no more visible
//    }
//    cout << "Variable dans la meme bloc : " << a << endl;
//    printLine();


    //// if ... else
    /*  if (expression) {
        instruction 1 ;}
        else -> pas obligatoire ( lorsque choisir 1 entre 2 )
        instruction 2
    */

//    cout << "# Execice: L'ascenseur sans 13eme étage (p.14)" << endl;
//    /* Ecrivons le code permettant de calculer vraiEtage, l'étage réel, à partir de étage demandé par l'utilisateur */
//
//    // declaration
//    int floorReal, floorDisplay;

//// do ... while ... loop
//    do {
//        // user input
//        cout << "Entering the floor : ";
//        cin >> floorDisplay;
//    } while (floorDisplay == 13);
//
//    if (floorDisplay < 13) {
//        floorReal = floorDisplay;
//    }
//    else { // floor > 13
//        floorReal = floorDisplay - 1;
//    }
///// cerr << : print error messge
//// << if ... else >> loop nests in << if ... else >>
//    //user input
//    cout << "Entering the floor : ";
//    cin >> floorDisplay;
//
//    if (floorDisplay < 13) {
//        floorReal = floorDisplay;
//    } else { // floorDisplay >= 13
//        if (floorDisplay == 13) {
//            cerr << " Error: False floor" << endl;
//        } else { // floorDisplay > 13
//            floorReal = floorDisplay - 1;
//        }
//    }

//// !!!!! 不可以在if 和else 中間加if , 後面得else 會和第二個if 一起,

//if (floorDispay <= 13)
//    if (floorDisplay != 13)
//      floorReal= floorDiaplay;
//    else // floorDisplay == 13 rather than floorDisplay > 13
//      floorReal = floorDisplay -1 ;
//

////  除非用{ }做區隔
//    if (floorDisplay <= 13) {
//        if (floorDisplay != 13){
//            floorReal= floorDisplay;
//    }else // floorDisplay > 13
//        floorReal = floorDisplay -1 ;
//    }

//// Opérateur conditionnel : << condition ? valeur1 : valeur2 >>
//    floorReal = floorDisplay <= 13 ? floorDisplay : floorDisplay - 1;
//
//    // show result
//    cout << "Real floor = " << floorReal << endl;
//    printLine();



//// << if ... else if ... else >> be careful the orders
//    cout << "# Execice: l'eefet d'remblemenet de terre (p.28) -> intervalle" << endl;
//
//    //declararion
//    double level;
//
//    // user input
//    cout << "Entering seismic intensity : ";
//    cin >> level;
//
//    if (level > 8.0) {
//        cout << "La plupart des structurs tombent" << endl;
//    } else if (level >= 7.0) {
//        cout << "De nombreux bâtiments sont détruits" << endl;
//    } else if (level >= 6.0) {
//        cout << "De nombreux bâtiments sont abimés, certains s'effondrent" << endl;
//    } else if (level >= 4.5) {
//        cout << "Les bâtiments mal construits sont abimés" << endl;
//    } else { // level < 4.5
//        cout << "Pas de dégâts aux bâtiments" << endl;
//    }

//    // mauvais ordre
//
//    if (level >= 4.5) { // mauvais ordre !! cout << "Les batiments fragiles sont abimes";
//    } else if (level >= 6.0) {
//        cout << "De nombreux batiments sont abimes";
//    } else if (level >= 7.0) {
//        cout << "De nombreux batiments sont detruits";
//    } else if (level >= 8.0) {
//        cout << "La plupart des structures tombent";
//    }




//// booléenne : < bool, boolalpha, noboolalpha >

//    bool vrai = true, faux = false;
//    cout << vrai << " " << faux << endl; // 1 0
//    cout << boolalpha;
//    cout << vrai << " " << faux << endl; // true false
//    cout << noboolalpha;
//    cout << vrai << " " << faux << endl; // 1 0
//    printLine();

    //// Attention à ne pas confondre = et ==
//    int etage;
//    etage == 11; // comparaison dont on n'utilise pas la valeur retournée
//
//    if (etage = 13) { // affectation qui renvoie l'entier 13
//        cout << "etage = " << etage << endl;
//    }
//    printLine();

    //// Attention à l'égalité (==) avec les réels : la limite de précision
    cout << boolalpha;
    cout << 1.0 / 3.0 << endl; // 0.333333
    cout << "1.0 / 3.0 == 0.333333 is " << (1.0 / 3.0 == 0.333333) << endl; // false
    printLine();
    //// < EPSILON > : compare leur différence à un très petit nombre
    const double EPSILON = 1E-6; // 0.000001
    cout << ( abs(1.0 / 3.0 - 0.333333) < EPSILON ) << endl; // true
    printLine();
    //// Omettre != 0
    int p = 1 ;
    if (p) { // n != 1
        cout << p << " est non nul" << endl;
    }
    printLine();
    //// << not ! , or || , and && >>
    /*
     * ▪ (a and b) n’évalue pas b si a est faux
     * ▪ (a or b) n’évalue pas b si a est vrai
     */

//    cout << boolalpha;
//    cout << ( (5 == 5) && (3 > 6) ) << endl; // false
//    cout << ( (5 == 5) || (3 > 6) ) << endl;  // true
//    cout << ( (5 == 5) and (3 < 6) ) << endl;  // true
//    cout << ( (5 != 5) or (3 > 6) ) << endl;  // false
//    cout << !(5 == 5) << endl;  // false
//    cout << not(5 != 5) << endl;  // true
//    printLine();
//
//    //// une variable booléenne à évaluer == true, == false
//    bool test = (5 == 5) && (3 > 6);
//
//    if (test){
//        cout << " if (test == true) => if (test)" << endl;
//    } else
//        cout << " if (test == false) => if (!test) -> if (not test)" << endl;// test == false
//    printLine();

    //// Priorités des opérateurs:  (!,+,-,++,--)  (< > <= >=) (==, !=) (&&) (||)
    ////    L’opérateur not (!), opérateurs unaires préfixes (+,-,++,--)
    ////    Comparaison < > <= >=
    ////    Les opérateurs d’égalité == et !=
    ////    L’opérateur de conjonction and (&&)
    ////    L’opérateur de disjonction or (||)

    //// Lois de De Morgan :
    ///                     !(A and B) est équivalent à (!A or !B)
    ////                    !(A or B) est équivalent à (!A and !B)

    //// < SWITCH >
    /*
     * switch(expression) {
        case x:
            // code block
        break;
        case y:
            // code block
        break;
        default:
         // code block
        }
     */
//    unsigned int dayInt;
//    // Improv: using "print" instead of assigning a "variable" for the day of weeks.
//    // Question: how to stop user entering a non-integer number ??
//    // Question : how to first show error message and ask urser again to input a digit?
//    //do{
//        cout << "Entering a day of the week in digit (an interger from 1 to 7) :  " ;
//        cin >> dayInt;
//    //} while ( dayInt > 7 || dayInt < 1);

//    switch (dayInt){
//        case 1:
//            cout << "Monday" << endl;
//            break; // sortir the loop
//        case 2:
//            cout << "Tuesday" << endl;
//            break;
//        case 3:
//            cout << "Wednesday" << endl;
//            break;
//        case 4:
//            cout << "Thursday" << endl;
//            break;
//        case 5:
//            cout << "Friday" << endl;
//            break;
//        case 6:
//            cout << "Saturday" << endl;
//            break;
//        case 7:
//            cout << "Sunday" << endl;
//            break;
//        //default: // specifies some code to run if there is no case match:
//        //   cerr << "Incorrect day"<< endl;
//    }

//    // EXAMPLE 02 :  be careful < break >
//    int jourSemaine;
//
//    cout << " Saisir un jour de la semaine :  " ;
//    cin >> jourSemaine;
//
//    switch (jourSemaine) {
//        case 1 : cout << "premier ";
//        case 2 :
//        case 3 :
//        case 4 :
//        case 5 : cout << "jour de travail" << endl;
//                break;
//        case 6 :
//        case 7 : cout << "week-end" << endl;
//                break;
//        default: cerr << "jour incorrect" << endl;
//    }

    //// Les énumérations <enum> : avoiding magic numbers
//    //déclaration
//    enum Saison { PRINTEMPS, ETE, AUTOMNE, HIVER };
//    enum Saison saison1, saison2; // comme en C
//
//    //Affectation
//    saison1 = ETE; // constant, comparing with enum class
//    saison1 = saison2; // si saison2 vaut ETE;
//    saison1 = (Saison)1; // PRINTEMPS = 0, ETE = 1, ...
//    saison1 = Saison(1);
//
//    // !!! une constante d’énumération ne peut pas être réutilisée
//    enum Couleur {VERT, ROSE, BLEU};
//    enum Fleur   {MARGUERITE, ROSE, VIOLETTE};
//    // Error: Redefinition of enumerator 'ROSE'998uztrtedew
//
//    enum class Saison { PRINTEMPS, ETE, AUTOMNE, HIVER };
//    Saison saison1;
//    //  les constantes d’énumératio
//    saison1 = Saison::ETE; // il faut spécifier Saison::
//
//    enum class DirH {GAUCHE, CENTRE, DROITE};
//    enum class DirV {HAUT, CENTRE, BAS};
//    DirH horizontal = DirH::CENTRE;
//    DirV vertical   = DirV::CENTRE;

    //// <while> loop
    /*
     * while (condition)
     * instruction;
     */

    // Exemple – doubler son investissement
    /*
     *  ▪ Initialiser annee à 0 et solde à 10000.00 CHF
        ▪ Tant que le solde est plus < 20000.00 CHF, répéter
             ▪ Incrémenter annee
                ▪ Calculer les intérêts de 5% du solde
                ▪ Mettre à jour solde en y ajoutant les intérêts
        ▪ Afficher annee, le temps nécessaire pour doubler le solde
     */

//    // METHOD 1
//    int balance1 = 10000;
//    int balanceTarget = 2 * balance1;
//    int year1 = 0;
//    const double INTEREST = 0.05;
//
//    while(balance1 < 20000){
//        ++year1;
//        balance1 += balance1 * INTEREST;
//    }
//
//    cout << "Year = " << year1 << endl;
//    cout << "Balance = " << balance1 << endl;
//
//    // METHOD 2 :use CONSTANT
//    const double BALANCE_INITIAL = 10000.;
//    const double BALANCE_TARGET = 2*BALANCE_INITIAL;
//    const double RATE = 5.;
//
//    double balance2 = BALANCE_INITIAL;
//    int year2 = 0;
//
//    while(balance2 < BALANCE_TARGET){
//        ++year2;
//        double interest = balance2 * RATE / 100.;
//        balance2 = balance2 + interest;
//    }
//
//    cout << "L'investissement double apres " << year2 << " annees." << endl;
//    printLine();

    //// EXCERCICE : manually get output
    int a = 5; while (a > 0) {
        cout << a << " ";
        a--;
    } // 5 4 3 2 1
    cout << endl;

    int b = 5;
    while (b > 0) {
        b--;
        cout << b << " ";
    } // 4 3 2 1 0
    cout << endl;

    int c = 5;
    while ( c >= 0 ){
        cout << c << " ";
        c--;
    } // 5 4 3 2 1 0
    cout << endl;

    int d = 5;
    while (d < 0){
        cout << d << " ";
        d--;
    }
    cout << "la boucle n’est jamais exécutée" << endl;

    //// une boucle infinie
//     unsigned int e = 5;
//     while (e >= 0) {
//        cout << e << " ";
//        e--;
//    } // (i >= 0) vaut toujours true

    //// autre boucle infinie causée par
    //// un point-virgule mal placé (instruction vide)
    //
//    int g = 5;
//    while (g > 0);{
//        cout << g << " ";
//        g--;
//    } // empaty

    //// i n'est pas initialisé -> le passage dans la boucle est aléatoire
//    int i;
//    while (i >= 0) {
//        cout << i << " ";
//        i--; }
//    cout << " fini la boucle" << endl;

    ////EXCERCICE : SOMME DES CHIFFFRES

    //// method 01 : <while>
//    int q, digit;
//    int sum = 0;
//
//    cout << "enter a positive integer : ";
//    cin >> q ;
//
//    while (q > 0){
//        digit = q % 10;
//        sum += digit;
//        q/= 10 ;
//    }
//    cout << "Sum = " << sum << endl;
//
//
    //// method 02: < for >
    /*
     * for (initialisation; condition; action)
     *      instruction;
     */
//    int r, digitR;
//    int sumR = 0;
//
//    cout << "enter a positive integer : ";
//    cin >> r ;
//
//    for (; r > 0; r /= 10 ){
//        digitR = r % 10;
//        sumR += digitR ;
//    }
//    cout << "Sum = " << sum << endl;
//
    //// Les déclarations de variables dans la boucle
    for (int s = 5; s <= 8; ++s) {
        cout << "s = " << s << endl;
    } // 5 6 7 8
    //// error : s existe que pour la boucle et dans la boucle
    //   cout << "s =" << s << endl;
    printLine();

    //// EXCERCICE : INVESTIR PENDANT 5 ANS
    /*
        ▪ Initialiser solde à 10000.00 CHF
        ▪ Pour annee allant de 1 à 5 inclus, répéter
        ▪ Mettre à jour solde en y ajoutant 5% d’intérêts ▪ Afficher solde
     */

    const double BALANCE_INITIAL = 10000. ;
    const int DURATION = 5;
    const double RATE = 5;

    int year;
    double balance = BALANCE_INITIAL; // initial
    double interest = balance * RATE / 100.;

    for (year = 1; year <= DURATION; ++year){
        balance += interest;
        interest = balance * RATE / 100.;

        cout << fixed << setprecision(2);
        cout << year << "year: " << "balance = " << balance << endl;
    }
    printLine();

    //// EXERCICE : OUTPUT -> initial value included
    for (int i = 0; i < 9; i += 2) {
        cout << i << " ";
    } // 0 2 4 6 8
    cout << endl;

//    for (int t = 0; t != 9; t += 2) {
//        cout << t << " ";
//    } // boucle infinies

    // exponentiels
    for (int i = 1; i < 50; i *= 3) {
        cout << i << " ";
    }
    cout << endl;
    printLine();

    //// << do{ ....  }while(); >>


//    int valeur;
//
//    do {
//        cout << "Entrez un entier >= 100: ";
//        cin >> valeur;
//        //// Gestion des erreurs d’entrée
//        if (cin.fail()) { // renvoie un booléen qui indique s’il y a eu une erreur
//        // = if (not (cin >> valeur))
//            cin.clear(); // réinitilialise l’indication d’erreur
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//            //retirer jusqu’à n caractères du flux, ou jusqu’à ce qu’on rencontre le caractère delim (par défaut la fin du fichier)
//        }
//
//    } while (valeur < 100);
//    cout << "Valeur = " << valeur << endl;
//    printLine();


    /* Boucles imbriquées
     *  faire pour toutes les lignes
            faire pour toutes les colonnes
                afficher les coordonnées (ligne colonne)
            passer à la ligne
     * */

    // EXERCICE : MATRICE
    const char ESPACE = ' '; // séparations
// pour toutes les lignes
    for (char ligne = 'a'; ligne <= 'e'; ++ligne) {
        // pour toutes les colonnes
        for (int col = 1; col <= 4; ++col) {
            // afficher les termes de la matrice
            cout << ligne << col << ESPACE;
        } // for col ...
        // changer de ligne
        cout << endl;
    } // for ligne ...
    printLine();

    // EXERCICE :
    /*
     *
     * *
     * * *
     * * * *
     * * * * *
     */
    char space = ' ';
    for (int i = 1; i <= 5 ; ++i ){
        for ( int j = 1; j <= i ; ++j){
            cout << "*" << space ;
        }
        cout << endl; // change line
    }
    printLine();

    // EXCERCICE :
    /*
     *  0  1  2  3  4
     *  5  6  7  8  9
     * 10 11 12 13 14
     */
    //method 1
    int num = 0;
    char space1 = ' ';
    for ( int i = 1; i <= 3; ++i){
        for ( int j = 1; j <= 5; ++j){
            cout << setw(2)<< num << space1;
            ++num;
        }
        cout << endl;
    }

//    //method 2 : utiliser un compteur ij commun aux deux boucles en plus des compteurs i et j
//    const int COLUNM(5), LINE(3);
//    const int LENGTH(3);
//
//    for (int i = 0, ij = 0; i < LINE;++i){
//        for (int j = 0; j < COLUNM; ++i, ++ij){
//            cout << setw(LENGTH) << ij;
//        }
//        cout << endl;
//    }

    printLine();

    //// < break > : sortir d’une boucle
    // EXCERCICE :
    /*
     |==|==|==|==|==|
     */

    const int SECTION(5);
    int i = 0;
    // Error: for (int i = 0; i < SECTION ; ++i)
        // Placer une condition if dans une boucle n’est pas conseillé
    while (true){
        cout << "|" ;
        if (i == SECTION){
            break;
        }
        cout << "==";
        ++i;
    }
    printLine();

    //// < continue >
    /*
     while (EXPRESSION) {
        instructions1;
        if (CONDITION)
            continue; // = if (not CONDITION)
        instructions2;
    }
     */

    return EXIT_SUCCESS;
}




