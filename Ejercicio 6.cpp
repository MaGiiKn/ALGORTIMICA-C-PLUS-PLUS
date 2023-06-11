
//Ingresar un número. Decir si el mismo es par o impar sin utilizar Mod ni Enteros.

#include <iostream> 
using namespace std; 

int main(){
	
int n = 0;	
  	
	cout<<"Ingrese un numero: "; 
	cin>>n; 
int c = n;  
	
	while(n > 0){
		n= n-2; 
	}
	
	if (n == 0){ 
		cout<<"El numero "<< c << " es par";
	}
	else{
		cout<<"El numero "<< c << " es inpar"; 
	}




return 0; 

}


	

