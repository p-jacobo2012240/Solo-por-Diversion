#include <iostream>
#include <fstream>

using namespace std;

struct Alumno{
	int id_alumno;
	char nombre[30];
	int edad;
	int carnet;
};

//Procedimientos
void  ingresarAlumnos();
void  leerAlumnos();


int main(){
	
	int op;
	
	do{
		
		cout<<"|===============================|"<<endl;
		cout<<"|  1. Ingresar Alumnos          |"<<endl;
		cout<<"|  2. Leer Alumnos              |"<<endl;
		cout<<"|===============================|"<<endl;
		cin>>op;
		
		switch(op){
			
			case 1:
				ingresarAlumnos();
			break;
			
			case 2:
				leerAlumnos();
			break;
			
			default:
				cout<<"  "<<endl;
				cout<<"Ingresa una opcion valida porfa"<<endl;
				cout<<"  "<<endl;
		}	
		
	}while(op!= 2 );	
}


void ingresarAlumnos(){
	
	Alumno _alumno;
	int cantidad;
	
	ofstream archivo;
	archivo.open("demos.txt", ios::out);
	
	cout<<"Ingrese la cantidad de alumnos que desea ingresar"<<endl;
	cin>>cantidad;
	
	for(int i =0; i <= cantidad; i++ ){
		
		cout<<"Ingresa el nombre: "<<endl;
		cin>>_alumno.nombre;
		
		cout<<"Ingresa la edad"<<endl;
		cin>> _alumno.edad;
		
		cout<<"Inrega el carnet"<<endl;
		cin>> _alumno.carnet;
		
		cout<<"----------------------------------"<<endl;
		
		
		archivo<<_alumno.nombre<<endl;
		archivo<<_alumno.edad<<endl;
		archivo.close();
	}	

}


void leerAlumnos(){
	
	cout<<"esto lee los datos"<<endl;
}
