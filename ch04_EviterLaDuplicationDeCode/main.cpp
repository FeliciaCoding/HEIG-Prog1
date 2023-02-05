#include <iostream>


int readAnIntegerUntil(int minVal, int maxVal){
    int input;
    do{
        std:: cout << " Entrez un entier enter "<< minVal << " et " << maxVal<< " : ";
        std::cin >> input;
    }while (input < minVal || input > maxVal);
    return input;
}


int main() {
    int heures = readAnIntegerUntil(0, 23);
    int minutes = readAnIntegerUntil(0, 59);
    int mais = readAnIntegerUntil(1, 12);
    return 0;
}
