/*Ingresar un número mayor a 50. Imprimir los números existentes desde el 1 y el número 
ingresado. Imprimir, además, la cantidad de números pares e impares encontrados en dicha 
serie.*/

#include <iostream>
using namespace std;

int main(){

int n = 0;
int c = 0; 
int np = 0;
int ni = 0; 
	
	cout<<"Ingresa un numero mayor a 50: "; 
	cin>>n; 
	cout<<"El numero ingresado es: "<<n<<endl; 
	
	if(n < 50){
		cout<<"El numero ingresado es menor a 50, ingresa un numero mayor..."; 
	}
	if(n < 0){
		cout<<"El numero ingresado es menor que 0, ingresa un numero entero..."; 
	}
	if (n >= 50){
		cout<<"La sucesion es: "<<endl; 
		while (c < n){
		
			c = c += 1; 
			cout<<c<<" "; 	
			
			if(c%2 == 0){
			
				np = np + 1; 
			}
			else{
			
				ni = ni + 1;			
			}			
		}
	cout<<"La cantidad de numeros pares es: "<<np<<endl;
	cout<<"La cantidad de numeros inpares es: "<<ni<<endl; 
	}
	
  
  
  
  
  
}
  
