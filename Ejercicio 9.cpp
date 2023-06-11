/*Ingresar tantos números como se desee. Imprimir la sumatoria de números y el mayor valor 
ingresado.*/

#include <iostream>
using namespace std; 

int main(){	

int n; 
int c = 0; 
int s = 0;
int m = INT_MIN; 	
	cout<<"Ingrese tantos numeros como desee (ingresar 0 para finalizar): "<<endl; 
	
	while(true){
	
		cin>>n;
		if (n == 0){ 
			break; 
		}
		else{
			
			s += n; 
			if ( n > m){
				m = n;	
			}	
		}	
	}
		cout<<"La sumatoria es: "<<s<<endl;
		cout<<"El mayor numero ingresado es: "<<m; 
	
	
	
 
