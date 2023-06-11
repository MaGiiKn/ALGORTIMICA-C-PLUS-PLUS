//Escribe un algoritmo que muestre los 15 primeros números impares a partir del 30. 

#include <iostream>

using namespace std;

int main() {
    int c = 0;
    int n = 30;

    while (c < 15) {
        if (n % 2 != 0) {
            cout << n << " ";
            c++;
        }
        n++;
    }

    
    return 0;
}
