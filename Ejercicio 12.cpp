/*Ingresar un número positivo menor a 5. Mostrar la serie de 20 números consecutivos a partir 
del número ingresado.*/

#include <iostream>
using namespace std;

int main(){
	
int n = 0; 
int c = 0;
	cout<<"Ingresa un numero positivo menor a 5: "; 
	cin>>n; 	
	
	if(n < 0){
		cout<<"El numero ingresado es negativo, ingrese uno positivo..."; 
		return 0; 	
	}
	if(n > 5){
		cout<<"El numero ingresado es mayor a 5..."; 
		return 0; 
	}
	else{
		cout<<"La serie de 20 numeros consecutivos de "<< n << " es: "; 
		while (c < 20){
			c+=1;
			n+=1; 
			cout<< n << ", ";  
		}
	}	
}


