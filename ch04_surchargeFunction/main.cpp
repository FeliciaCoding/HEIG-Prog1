#include <iostream>
void f(int i, double d){
    std::cout << "f1" << std::endl;
    std::cout << i << ", " << d << std::endl;
}
void f(double d,int i){
    std::cout << "f2" << std::endl;
    std::cout << i << ", " << d << std::endl;
}

void fD(int n = 0, double x = 0){
    std::cout << "f3" << std::endl;
    std::cout << n << ", " << x << std::endl;
}

void fD(double x = 0, int p = 0){
    std::cout << x << ", " << p << std::endl;
}

void fR(int& i){
    std::cout << "référance" << std::endl;
    std::cout << i << std::endl;
}

void fR(const int& CI){
    std::cout << "référance constante" << std::endl;
    std::cout << CI << std::endl;
}

void fVR(int i){
    std::cout << "Par valeur" << std::endl;
    std::cout << i << std::endl;
}

void fVR(int& i){
    std::cout << "référance" << std::endl;
    std::cout << i << std::endl;
}

int main() {
   int i, j;
   double d;
   char c;

   f(i, d);
   f(c,d);
   f(d,i);
   ////f(i, j); // ambigue: f1>>adjustment,f2>>adjustment

   fD(i, d);
   fD(d,i);
   fD(i);
   fD(d);
   ////fD(); // ambigue: f1 ou f2 >> par défaut





    int n=3;
    const int P = 5;
    float x;

    fR(n);
    fR(P);
    fR(2);
//// constante reference par défaut = 0
    fR(x); //-> <référance> pas de même type



    fVR(P);
    fVR(2);
    fVR(x); //-> <référance> pas de même type
    ////fVR(n); // ambigue f1:exact, f2:exact



    return 0;
}
