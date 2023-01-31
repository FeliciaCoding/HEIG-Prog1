
/*
 * Que va afficher le programme C++ suivant ?
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main() { int i, j, k;
    i = j = k = 1;
    i += j += k;
    cout << "A : i = " << i << " j = " << j << " k = " << k << endl;
    // i = i+j = j+k -> i = i+j = j(1)+k(1)
    //                  i = i(1)+j(2)
    //                  i(3)


    i = 3; j = 2;
    k = i++ > j || j++ != 3; // bool
    cout << "B : i = " << i << " j = " << j << " k = " << k << endl;
    // k = i++ > j              -> i++ = 3, i=4, i++(3) > j(2); k = true = 1
    //              || j++ != 3 -> skip !!!!!

    i = 3; j = 2;
    k = i++ < j || j++ != 3;
    cout << "C : i = " << i << " j = " << j << " k = " << k << endl;
    // k = i++ < j              -> i++ = 3, i(4) < 2 -> false
    //              || j++ != 3 -> j++ = 2, j(3) != 3 -> true -> k(1)

    i = 3; j = 2;
    k = ++i == 3 && ++j == 3;
    cout << "D : i = " << i << " j = " << j << " k = " << k << endl;
    // k = ++i == 3             -> ++i = i = 4 --> false, k=0
    //              && ++j == 3 -> skip !!!!!

    i = 3; j = 2;
    k = ++i > 3 && ++j == 3;
    cout << "E : i = " << i << " j = " << j << " k = " << k << endl;
    // k = ++i > 3              -> ++i = i = 4, true
    //              && ++j == 3 -> ++j = j = 3, true, k=1

    return EXIT_SUCCESS; }
