#include <iostream>
#include <iomanip>
#include <vector>
#include <array>

using std::vector, std::cout, std::endl, std::string, std::setw, std::left, std::array;

void printVector(const vector<int> &v, string vName);

void printVector(const vector<double> &v, string vName);

void printVector(const vector<string> &v, string vName);

void printVector(const vector<vector<int>> &v, string vName);

void printVector(const vector<vector<double>> &v, string vName);


void printSectionSeparator();

const int V_NAME_W = 10;
const int V_SIZE_W = 3;

int main() {

////  == test eguality pour les vectors
//    vector<int> v1 = { 1, 2, 3, 4, 5, 6 };
//    vector<int> v2 = { 6, 5, 4, 3, 2, 1 };
//    vector<int> v3(v1);
//    vector<int> v4(v1);
//    v4.push_back(7); // { 1, 2, 3, 4, 5, 6, 7}
//
//    (v1 == v2)?  cout << "V1 == V2" : cout << "V1 != V2";
//    cout << endl;
//
//    (v1 == v3)?  cout << "V1 == V3" : cout << "V1 != V3";
//    cout << endl;
//
//    (v1 == v4)?  cout << "V1 == V4" : cout << "V1 != V4";
//    cout << endl;
//
//    v4.pop_back(); // { 1, 2, 3, 4, 5, 6}
//    (v1 == v4)?  cout << "V1 == V4" : cout << "V1 != V4";
//    cout << endl;
//
//    printSectionSeparator();

////     vector 2D
//    vector<int> v1(10); // un vector de 10 entiers
//    vector<vector<int>> v2D; // vide, un vector de vectors d'entiers
//    vector<vector<int>> v2D1(3, vector<int>(4)); // 3X4 avec des valerus 0
//    vector<vector<int>> v2D2(5, vector<int>(5, 1)); // 5X5 avec des valeurs 1
//    printVector(v2D, "v2D");
//    printVector(v2D1, "v2D1");
//    printVector(v2D2, "v2D2");
//
//    // iterator --> auto = vector<int> :: iterator i
//    for (auto i = 0; i < v2D2.size() /* != v.end() */ ; i++) { // lignes
//        for (auto j = 0; j < v2D2[i].size(); j++) { // colonnes
//            if (i == j) {
//                v2D2[i][j] = 0; // = v2D2.at(2).at(3);
//            }
//        }
//    }
//    printVector(v2D2, "v2D2"); // quels elements ont ete modifies ?
//
//    for (auto i = 0; i < v2D2.size(); i++) {
//        v2D2[i][i] = 5; // le meme effet que le code precedent mais avec une seul boucle
//    }
//    printVector(v2D2, "v2D2");
//
//
//     v2D2.resize(3); // 5X5 --> 3X5
//     printVector(v2D2, "v2D2");
//
//    /*  vector<int>         v1(10); */
//    vector<vector<int>> v2;
//    v2.resize(3); // doit resize 2 fois --> ligne
//    for (size_t i = 0; i < v2.size(); ++i) {
//        v2[i].resize(4); //3X4 --> columme
//    }
//    printVector(v2, "v2");
//
//     v2D.resize(3);
//     for(auto i = 0; i < v2D.size(); i++){ //iterate
//         //// v2D.at(i).resize(4);
//         v2D.at(i).resize( i+1 );
//     }
//     printVector(v2D, "v2D");
//
//     v2D1[1][2] = 222; // acces aux elements de vector 2D
//     v2D1.at(1).at(3) = 333;
//     cout << "v2D1[1][2] = " << v2D1[1][2] << ", v2D1.at(1).at(3) = " << v2D1.at(1).at(3) << endl;
//     printVector(v2D1, "v2D1");
//
//     printSectionSeparator();

////    typedef, using : améliorer la lisibilité
     typedef vector<int> VectorInt; // <typedef> n'a pas de vérification de type
     typedef vector<VectorInt> VectorInt2D;
     VectorInt2D v2D3(3, VectorInt(3, 5));
     printVector(v2D3, "v2D3");

     using VectorDouble = vector<double>; // <using> est plus utilise dans c++
     using VectorDouble2D = vector<VectorDouble> ;
     VectorDouble2D v2D4(3, VectorDouble(3, 5));
     printVector(v2D4, "v2D4");

     printSectionSeparator();

////    tableau 2D
     const size_t ARRAY_SIZE = 3;
     int tInt2D[ARRAY_SIZE][ARRAY_SIZE] = {
             {0, 0, 0},
             {1, 1, 1},
             {2, 2, 2}
     };

     cout << "tInt2D : " << endl;
     for(auto i = 0; i < ARRAY_SIZE; i++){ // lignes
         for(auto j = 0; j < ARRAY_SIZE; j++){ // colonnes
             cout << tInt2D[i][j] << " ";
         }
         cout << endl;
     }
     cout << endl;

     int tInt2D2[ARRAY_SIZE][ARRAY_SIZE - 1] = {};

     cout << "tInt2D2 : " << endl;

     for(auto i = 0; i < ARRAY_SIZE; i++){ // lignes
         for(auto j = 0; j < ARRAY_SIZE - 1; j++){ // colonnes
             cout << tInt2D2[i][j] << " ";
         }
         cout << endl;
     }
     cout << endl;

     printSectionSeparator();
//
////    Array
     array<int, 10>   arrInt = {};
     array<char, 5>   arrChar = {};
     array<double, 20> arrFloat = {};

     cout << "arrInt : ";
     for(auto i : arrInt){
         cout << i << " ";
     }
     cout << endl;

     array<array<int, 5>, 10> arrInt2D = {}; // 10x5
     cout << "arrInt2D : " << endl;
     for(auto i = 0; i < arrInt2D.size(); i++){ // lignes
         for(auto j = 0; j < arrInt2D[i].size(); j++){ // colonnes
             cout << arrInt2D[i][j] << " ";
         }
         cout << endl;
     }
     cout << endl;

     arrInt2D.at(0).at(0) = 555;
     cout << "arrInt2D.at(0).at(0) = " <<     arrInt2D.at(0).at(0) << endl;

     arrInt.fill(888);
     cout << "arrInt : " << endl;
     for(auto i = 0; i < arrInt2D.size(); i++){ // lignes
         cout << arrInt[i] << " ";
     }
     cout << endl;

     printSectionSeparator();


    return 0;
}


void printVector(const vector<int> &v, string vName) {
    cout << left << setw(V_NAME_W) << vName << " (" << setw(V_SIZE_W) << v.size() << " ): ";
    for (auto i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void printVector(const vector<double> &v, string vName) {
    cout << left << setw(V_NAME_W) << vName << " (" << setw(V_SIZE_W) << v.size() << " ): ";
    for (auto i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void printVector(const vector<string> &v, string vName) {
    cout << left << setw(V_NAME_W) << vName << " (" << setw(V_SIZE_W) << v.size() << " ): ";
    for (auto i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void printVector(const vector<vector<int>> &v, string vName) {
    cout << left << setw(V_NAME_W) << vName << " (" << setw(V_SIZE_W) << v.size() << " ): " << endl;
    for (auto i = 0; i < v.size(); i++) {
        for (auto j = 0; j < v.at(i).size(); j++) {
            cout << v.at(i).at(j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void printVector(const vector<vector<double>> &v, string vName) {
    cout << left << setw(V_NAME_W) << vName << " (" << setw(V_SIZE_W) << v.size() << " ): " << endl;
    for (auto i = 0; i < v.size(); i++) {
        for (auto j = 0; j < v.at(i).size(); j++) {
            cout << v.at(i).at(j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void printSectionSeparator() {
    cout << endl;
    cout << "--------------------------------------------" << endl;
}