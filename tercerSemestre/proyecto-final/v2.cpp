#include <iostream>
#define LIMITE 6

using namespace std;

//Procedimientos
void ingreso();
void mostrar();


/*
archivo
https://github.com/p-jacobo2012240/Solo-por-Diversion/blob/master/tercerSemestre/pre-parcial/music.cpp

constructor
https://github.com/p-jacobo2012240/Solo-por-Diversion/blob/master/tercerSemestre/constructores/1.cpp

*/
class Tipo{
	public:
		string tipo_nombre; //sin hijos, para mayores de edad
};

/*enum Tipo{
	clase_uno;
	clase_dos;
	clase_tres;
};*/

class Habitacion{
	public:
		string nombre_habitacion;
		int cantidad_camas;
		Tipo tipo;
		//constructor
		Habitacion(string n_h, int c_c, Tipo t   ){
			nombre_habitacion = n_h;
			cantidad_camas = c_c;
			tipo = t;
		}
		
};


class Persona{
	public:
		string nombre_persona;
		string apellido_persona;
		int edad;
		bool tiene_hijos;
		Habitacion habitacion;
		//constructor
		Persona(string n_p, string a_p, int e, bool hijos, Habitacion hab ){
			nombre_persona = n_p;
			apellido_persona = a_p;
			edad = e;
			tiene_hijos = hijos;
			habitacion hab;
		}
};


int main(){
	
	int op;
	
	
	do{
		
		cout<<"Hotel App  "<<endl;
		cout<<"1. Ingreso "<<endl;
		cout<<"2. Mostrar "<<endl;
		cin>>op;
		
		switch( op ){
			
			case 1:
				ingreso();
			break;
			
			case 2:
				mostrar();
			break;
			
				default:
					cout<<"Opcion invalida"<<endl;
		}
		
		
		
	}while( op != LIMIT );
	
}


void ingreso(){
	
	Tipo obj1, obj2, obj3 ;
	
	obj1.tipo_nombre = "clase 1    ";
	obj2.tipo_nombre = " clase 2   ";
	obj3.ti	tipo_nombre =  " clase 3";
	
	
	cout<<"Que desea ingresar"<<endl;
	cout<<" 1. Habataciones  "<<endl;
	cout<<" 2. Usuarios      "<<endl;	
	
	
	cout<<"ingrese las habitaciones"<<endl;
	
	
}

void mostrar(){
	
	
	cout<<"esto es mostrar"<<endl;
	
	
		
}



