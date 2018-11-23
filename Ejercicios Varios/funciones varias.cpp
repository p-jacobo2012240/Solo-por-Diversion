#include <iostream> 

using namespace std;

//Declarando las funciones
float sumar(float a, float b){
	float c;
	c = a + b;
	return c;
}

float dividir(float x){
	float resultado = x / 2;
	return resultado;
}

int main(){

	
	//Variables de ingreso local
	float dato_uno; 
	float dato_dos;
	
	//Variable que le asignare la funcion con los valores ingresados
	float resultado;
	//Esta variable resivira el dato que contiene la suma de la funcion sumar
	float resultado_dividido;
	
	cout<<"Ingrese un numero"<<endl;
	cin>>dato_uno;
	
	cout<<"Ingrese un numero"<<endl;
	cin>>dato_dos;
	cout<<" "<<endl;
	
	//Asignando los valores de las funciones a las variables
	resultado = sumar(dato_uno, dato_dos);
	resultado_dividido = dividir(resultado);
	
	
	cout<<"Su total es:       "<<resultado<<endl;
	cout<<"Cantidad Dividida: "<<resultado_dividido<<endl;
	
	
	
}
