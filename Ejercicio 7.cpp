//Ingresar un número positivo mayor a 20. Imprimir la serie existente desde el 1 hasta el 
//numero ingresado.

#include <iostream>
using namespace std; 

int main(){
	
int n = 0; 
	
	cout<<"Ingrese un numero positivo mayor a 20: "; 
	cin>>n; 
	
	
	if (n<20, n== 0){
		cout<<"El numero ingresado es menor a 20, ingresa un numero mayor..."; 
	}
		
	if (n<0){
		cout<<"El numero ingresado es un numero negativo, ingresa un valor positivo..."; 
	}	
	
int c = 0; 	
	
	if (n >= 20){
		
		cout<<"La sucesion de numeros es: "<<endl; 
		
		while(c < n){		
			c ++; 
			cout<< c << " ";
		}
	}
return 0; 
	
	










}		
	
	
	
	
	

