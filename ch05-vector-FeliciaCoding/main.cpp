/*
 *
 * Date: 22. Nov. 2022
 * Professor: Fanna
 * Chapitre : 05
 * Subjet : Vector
 * Ecole : Haute Ecole d'ingerniere et Gestion
 *
 */


#include <iostream> // input & output
#include <iomanip>
#include <vector> // la liste

using std::vector, std::cout, std::endl, std::string, std::setw;

void printVector(const vector<int> &v, string vName);

void printVector(const vector<double> &v, string vName);

void printVector(const vector<string> &v, string vName);

void printSectionSeparator();

const int V_NAME_W = 10;
const int V_SIZE_W = 3;

int main() {
    // pointers
    int a  = 5;
    int *b = &a; // saving 5 into address memory
    cout << b << " --> " << *b << endl; // 0x16d8eb5a8 --> 5

    printSectionSeparator();

    // declaration et initialization :
    //// -->  Vector < data type > identifier ( #elements, value)
    vector<int> vInt(10, -1); // 10 fois -1 : (times, value)
    printVector(vInt, "vInt");

    //// -->  Vector < data type > identifier = {value1, value2,value3};
    //ERROR: vector<int> v(3) = {1, 2, 3};
    // tableux déclaration : tab[size]={ ,  ,  };
    vector<double> vDouble = {1.5, 2, 3.2, 4.1, 6}; // taille = 5
    printVector(vDouble, "vDouble");

    vector<string> vString(3); // vector en string par défaut : rien
    printVector(vString, "vString");

    vector<int> vInt2(vInt); // paramètre: un vector --> changer d'identifier
    printVector(vInt2, "vInt2");
    printVector(vInt, "vInt");

    printSectionSeparator();
//
//
//    // assignment, different dimensions, modification of element after modification
    //// --> .at(position)
    vector<int> vInt3(5); // taille = 5, valeur integer par défaut = 0, string par défaut = rien
    printVector(vInt3, "vInt3");
    vInt3 = vInt; // remplacement tout le vector
    printVector(vInt3, "vInt3");
    vInt3.at(0) = 10; // remplacer une valeur dans un vector
    printVector(vInt3, "vInt3");
    printVector(vInt, "vInt");

    printSectionSeparator();
//
//
//  // range constructor
    //// --> vector<dataType> identifier(from A , to B-1)
    int         tabInt[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // --> table: dataType identifier [capacité] = { valeurs }
    vector<int> vInt4(tabInt, tabInt + 4); // pos4 is not included
    printVector(vInt4, "vInt4");
    vector<int> vInt5(tabInt + 5, tabInt + 7); // de pos5 à la pos7(not included)
    printVector(vInt5, "vInt5");

    printSectionSeparator();
//
    //// v.begin, v.end
    // -->  vector.begin = pos0, vector.end = last pos
    printVector(vInt4, "vInt4");
    cout << "*(vInt4.begin() + 1) : " << *(vInt4.begin() + 1) << ", " << endl;
    cout << "*(vInt4.begin() + 3) : " << *(vInt4.begin() + 3) << ", " << endl;
    cout << "*Int4.end() : " << *vInt4.end() << endl;                                // ????? *Int4.end() : 5
    vector<int> vInt6(vInt4.begin() + 1, vInt4.begin() + 3); // not include last pos
    printVector(vInt6, "vInt6");

    printSectionSeparator();
//
//    // v.size, v.at, v.front, v.back != *v.end()
    cout << "Taille de vInt6 : " << vInt6.size() << endl;
    printVector(vInt, "vInt");
    vInt.at(0)               = 111; //replacement
    vInt.at(4)               = 444;
    vInt.at(vInt.size() - 1) = 999; // End
    printVector(vInt, "vInt");

    // synm : at.(pos) = [pos] = .front() ou back()
    cout << "vInt.at(0) = " << vInt.at(0) <<
         ", vInt[0] = " << vInt[0] <<
         ", vInt.front() = " << vInt.front() << endl;
    cout << "vInt.at(4) = " << vInt.at(4) <<
         ", vInt[4] = " << vInt[4] << endl;
    cout << "vInt.at(vInt.size() - 1) = " << vInt.at(vInt.size() - 1) <<
         ", vInt[vInt.size() - 1] = " << vInt[vInt.size() - 1] <<
         ", vInt.back() = " << vInt.back() <<
         ", *vInt.end() = " << *vInt.end() << endl;             // ?????? *vInt.end() = 0

    printSectionSeparator();
//
//    // for special, value copy and reference example
    printVector(vInt, "vInt");
    for (int val: vInt) { // par valeur: parcour tous les éléments
        val += 1;
        cout << val << " ";
    }
    cout << endl;
    printVector(vInt, "vInt");

    for (int &val: vInt) { // par référence : modifier le contenu
        val += 1;
        cout << val << " ";
    }
    cout << endl;
    printVector(vInt, "vInt");

    printSectionSeparator();
    //// parcour <:>
//  // iterator, v.begin = pos0 , v.end = .size()+1 = dé, auto
    int      tab[] = {0, 1, 2, 3, 4, 5, 6}; // doit déclarer la tableau pour utiliser avec les boucles
    // for (:) avec les tableux classiques
    for (int val: tab) {
        val += 5; // chaque valeur est indépendent
        cout << val << " ";
    }
    cout << endl;


    //// parcour <iterator i>
    // quand le vector n'es pas déclaré : iterator, v.begin(), v.end(), pointer*
    int                        counter = 0;
    for (vector<int>::iterator i       = vInt.begin(); // La variable de boucle i est un itérateur sur un vecteur d'entiers
        // !!!! iterator i commence par position 0 !!!!
         i != vInt.end(); ++i) { // just'à la fin
        *i = counter++; // !!!! pointer !!!! accède à l'élément sur lequel itère i
        cout << *i << " "; // ??????
    }
    cout << endl;
    /* auto : indique au compilateur d'inférer le type de la variable à partir du type de son initialisation */
    for (auto i = vInt.begin(); i != vInt.end(); ++i) // auto i = vector<dataType>:: iterator i
        cout << *i << " ";  //*i accède (en lvalue) à l’élément sur lequel itère i
    cout << endl;


    //// parcour <auto>
    for (auto i = vInt.begin() + 2; i != vInt.end() - 1; ++i)
        cout << *i << " ";
    cout << endl;

//    // rbegin, rend, cbegin, cend
    printVector(vInt, "vInt");
    cout << "vInt.begin() = " << *vInt.begin() << ", vInt.rbegin() = " << *vInt.rbegin() << endl;
    cout << "vInt.end() = " << *(vInt.end() - 1) << ", vInt.rend() = " << *(vInt.rend() - 1) << endl;

    counter = 0;
    for (auto i = vInt.begin(); i != vInt.end(); ++i) {
        *i = counter++;
    }
    printVector(vInt, "vInt");

    counter = 0;
    for (auto i = vInt.rbegin(); i != vInt.rend(); ++i) {
        *i = counter++;
    }
    printVector(vInt, "vInt");
////    cbegin & cend cannot be assigned
////    counter = 0;
////    for (auto i = vInt.cbegin(); i != vInt.cend() - 1; ++i){
////        *i = counter++;
////    }
////    printVector(vInt, "vInt");

////     counter = 0;
////     for (auto i = vInt.crbegin() + 2; i != vInt.crend(); ++i){
////         *i = counter++;
////     }
////     printVector(vInt, "vInt");

    printSectionSeparator();
//
//
//    // v.resize, v.clear, v.empty
    printVector(vInt, "vInt");
    vInt.resize(5);
    printVector(vInt, "vInt");
    vInt.resize(7); // par défaut 0
    printVector(vInt, "vInt");
    vInt.resize(10, -1); // remplir -1
    printVector(vInt, "vInt");

    vInt.clear(); // la tille deviens 0, action pour redimensionner
    printVector(vInt, "vInt");

    if (vInt.empty()) { // la tille = 0, status pour vérifier, peut l'utiliser comme une condition
        cout << "vInt est vide, taille = " << vInt.size() << endl;
    } // v.empty() = (v.size() == 0)

    printSectionSeparator();

    // v.push_back (valeur) ---> ajouter la valeur en dernière position, la taille +1
    // v.pop_back (不能放值，必為空) ---> surplimer la valeur en dernière position, la taille -1
    printVector(vInt, "vInt"); // incrémenter la taille de 1, et copier la valeur x
    vInt.push_back(0);
    printVector(vInt, "vInt");
    vInt.push_back(1);
    printVector(vInt, "vInt");
    vInt.pop_back(); // décrémenter la taille de 1 et détruiter l'élément en dernière position
    printVector(vInt, "vInt");
    vInt.pop_back();
    printVector(vInt, "vInt");

    printSectionSeparator();

    // v.erase, capacity reduced
    for (int i = 0; i < 10; i++) {
        vInt.push_back(i);
    }
    printVector(vInt, "vInt");
    vInt.erase(vInt.begin());
    printVector(vInt, "vInt");
    vInt.erase(vInt.begin() + 1, vInt.begin() + 3); // range not include the last value
    printVector(vInt, "vInt");
    vInt.erase(vInt.begin(), vInt.end());
    printVector(vInt, "vInt");

    printSectionSeparator();

    // insert
    printVector(vInt, "vInt");
    vInt.insert(vInt.begin(), 0); // where and what
    printVector(vInt, "vInt");
    vInt.insert(vInt.end(), 5, 1); // where, how many and what
    printVector(vInt, "vInt");
    vInt.insert(vInt.begin() + 1, 9);
    printVector(vInt, "vInt");
    vInt.insert(vInt.begin() + 4, {6, 7, 8}); // insert a vector
    printVector(vInt, "vInt");

    // inserting a certain range of the vector
    vector<int> vInt7 = {21, 22, 23};
    vInt.insert(vInt.end(), vInt7.begin(), vInt7.end());
    printVector(vInt, "vInt");


    printSectionSeparator();


    // capacité : v.reserve, v.capacity, v.shrink_to_fit
    vector<int> vEmpty{};
    cout << "vEmpty.size() = " << vEmpty.size() << ", vEmpty.capacity() = " << vEmpty.capacity() << endl;
    vEmpty.push_back(7);
    cout << "vEmpty.size() = " << vEmpty.size() << ", vEmpty.capacity() = " << vEmpty.capacity() << endl;
    vEmpty.pop_back();
    cout << "vEmpty.size() = " << vEmpty.size() << ", vEmpty.capacity() = " << vEmpty.capacity() << endl;
    vEmpty.reserve(10);
    cout << "vEmpty.size() = " << vEmpty.size() << ", vEmpty.capacity() = " << vEmpty.capacity() << endl;
    vEmpty.push_back(7);
    cout << "vEmpty.size() = " << vEmpty.size() << ", vEmpty.capacity() = " << vEmpty.capacity() << endl;
    vEmpty.shrink_to_fit();
    cout << "vEmpty.size() = " << vEmpty.size() << ", vEmpty.capacity() = " << vEmpty.capacity() << endl;

    printSectionSeparator();

    return 0;
}


void printVector(const vector<int> &v, string vName) {
    cout << setw(V_NAME_W) << vName << " " << setw(V_SIZE_W) << v.size() << " : ";
    for (auto i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void printVector(const vector<double> &v, string vName) {
    cout << setw(V_NAME_W) << vName << " " << setw(V_SIZE_W) << v.size() << " : ";
    for (auto i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void printVector(const vector<string> &v, string vName) {
    cout << setw(V_NAME_W) << vName << " " << setw(V_SIZE_W) << v.size() << " : ";
    for (auto i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void printSectionSeparator() {
    cout << endl;
    cout << "--------------------------------------------" << endl;
}