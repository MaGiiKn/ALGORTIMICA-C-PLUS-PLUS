/* Crear un pseudocódigo que permita ingresar un número positivo menor que 10. Calcular e 
imprimir su tabla de multiplicar con el formato:*/

#include <iostream>
using namespace std; 

int n = 0; 
int c = 0; 
int t = 0; 
int main (){
	
	cout<<"Ingrese un numero positivo mayor que 10: "; 
	cin>>n; 
	
	if(n < 10){
		cout<<"El numero ingresado es menor que 10, ingresa uno mayor..."; 
		return 0; 
	}
	if(n < 0){
		cout<<"El numero ingresado es negativo, ingresa uno positivo..."; 	
		return 0; 
	}
	else{
		cout<<"La tabla de "<<n<<" es: "<<endl;
		while(c < 10){
			c++; 
			t++; 
			cout<< t <<" x "<< n << " = "<< t*n<<endl; 	
		}
	}
}
