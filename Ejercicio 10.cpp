/*Ingresar un número positivo. Decir si el mismo es o no par, por el método de sumas 
sucesivas.*/

#include <iostream>
using namespace std; 

int main(){
	
int n = 0;
int c = 0;
	
	cout<<"Ingresa un numero positivo: "<<endl; 
	cin>>n; 
	
	if(n < 0){
		cout<<"El numero ingresado es negativo, ingresa un numero positivo...";
		return 0;  
	}	
	else{
		while(c < n)
			c+=2; 
		if (c == n ){
			cout<<"El numero es par"; 
		}
		else{
			cout<<"El numero es inpar"; 
		}
	}	
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

