#include <iostream>

//Crear un proceso que muestre los 10 primeros números naturales en forma decreciente.

using namespace std;

int main() {
    
 cout << "Los numeros son: "<<endl;
    
    int n = 10;
    while (n >= 1) {
        cout << n << " ";
        n--;
    }
    
    cout << endl;

    return 0;
}
