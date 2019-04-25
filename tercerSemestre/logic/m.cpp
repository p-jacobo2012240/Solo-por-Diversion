#include <iostream>

using namespace std;

class Persona{
	public:
		char nombre[30];
		char apellido[30];
		//Metodos
		void mostrarDatos();
		void ingresarDatos();
	
};

//Desarrollas los procedimientos
void Persona::ingresarDatos(){
	cout<<"esto es para ingresar una persona"<<endl; 
}
	
void Persona::mostrarDatos(){
	cout<<"esto es para mostrar una persona"<<endl;
}


int main(){
	//Intancias la clase asi
	Persona persona;
	
	/*
		ahora el objeto "persona"
		tiene disponibles los metodos 
		para ser llamados asi 
		
		persona.ingresarDatos();
			o
		persona.mostrarDatos();
		
	*/
	
	persona.mostrarDatos();
	
}
