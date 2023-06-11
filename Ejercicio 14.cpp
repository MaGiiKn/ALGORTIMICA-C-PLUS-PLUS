/* Ingresar tantos números hasta un número ingresado previamente. Decir cuántos números 
fueron ingresados e imprimir el mayor y menor valor ingresado.*/

#include <iostream>

using namespace std;

int main() {

int nl;
int n;
int c = 0;
int may = INT_MIN;
int men = INT_MAX;

    cout << "Ingrese el numero limite: ";
    cin >> nl;
	cout << "Ingrese los numeros (ingrese " <<nl<< " para finalizar):" << endl;

    while (true) {
        cin >> n;

        if (n == nl) {
            break;
        }

        c++;

        if (n > may) {
            may = n;
        }

        if (n < men) {
            men = n;
        }
    }

    cout <<"Cantidad de numeros ingresados: "<<c<<endl;

    if (c > 0) {
        cout<<"Mayor valor ingresado: "<< may<<endl;
        cout<<"Menor valor ingresado: "<< men<<endl;
    } else {
        cout<<"No se ingresaron numeros"<<endl;
    }

    return 0;
}
		
	
















