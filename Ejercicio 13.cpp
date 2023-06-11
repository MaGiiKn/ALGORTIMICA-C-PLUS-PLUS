/*Ingresar un número mayor a 50. Generar una serie a partir de 1 hasta el número ingresado e 
imprimir solo los números pares y calcular e imprimir la sumatoria de los números pares de la 
serie. */

#include <iostream>
using namespace std; 

int n = 0;
int c = 0;
int p = 0;  
int s = 0; 

int main(){	
	
	cout<<"Ingresa un numero mayor a 50: "; 
	cin>>n; 
	
	if(n < 50){
		cout<<"El nunmero ingresado es menor a 50, ingresa un numero mayor...";
		return 0; 
	}
	else{
		cout<<"La serie de numeros pares es: "<<endl; 
		while (c < n){
			c++; 
			if (c%2 == 0){
				p = c; 
				cout<<p<<" "<<endl;
				s +=p; 	
			} 			 				 
		}	
		cout<<"La sumatoria de los numeros pares es: "<<s; 
	}
}			



	
	
	
	
		
	
	
	
	


