#include <iostream>

using namespace std;


//Resiviendo varios parametros
int suma(int a, int b){ //Una suma
	int c =  a + b;
	return c;	
}

//Si es par
int esPar(int numero){
	
	if(numero%2){
		cout<<"Es par:    "<<numero<<endl;
	}else{
		cout<<"No es par: "<<numero<<endl;
	}
	
	return numero;
}

//Recursividad --Factorial
int factorial(int n) {
	
	int fac = 0;
	
  	if(n == 1 ){
  		cout<<"Su numero es"<<n<<endl;
  		return 1;
	}else{
		return fac = n*factorial(n -1);
		cout<<"El factorial es"<<fac; 
	}	
}


int main(){
	
	int resultado = 0;
	int igre = 0;
	int res = 0;		
	int recur = 0;
	
	//Lo mas basico 
	resultado = suma(5, 2);
	cout<<"Su resultado es:"<<resultado<<endl;
	
	//Resiviendo un numero para ver si es par
	//scout<<"Ingrese un numero"<<endl;
	//cin>>res;
	//igre = esPar(10); 
	
	//Recursividad provando el factorial	
	cout<<"Ingrese un numero para ver ek factorial"<<endl;
	cin>>res;
	recur = factorial(10);

	return 0;
}
