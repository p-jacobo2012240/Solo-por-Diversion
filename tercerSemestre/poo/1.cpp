#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <fstream>

using namespace std;

class Estudiantes {
	public:
		void vizualizar();
		long numId;
		char nombre[40];
		int edad;
};

void serializableEst(Estudiantes es);

void serializableEst(Estudiantes es){

	ofstream db;
    db.open("poo.txt", ios::app);
    db.write((char*)&es, sizeof(Estudiantes));
    db.close();	
}


void Estudiantes::vizualizar()
{
	

	cout<<"Dato del id "<<numId<<endl;
	cout <<"Datos del nombre "<< nombre <<endl;
	cout <<"Datos de Edad"<<edad<<endl;
	
	if(edad >=18)
	cout<<"Mayor de edad DPI"<<endl;
	else 
	cout<<"Menor de edad FE DE EDAD"<<endl;
};

void funcionObjeto(){
	Estudiantes Obj1,Obj2;

	cout<<"Ingreso Objeto 1"<<endl;
	cout<<"Ingrese ID: "; cin>>Obj1.numId;
	cout<<"Ingrese nombre: "; cin>>Obj1.nombre;
	cout<<"Ingrese edad: "; cin>>Obj1.edad;
	
	serializableEst(Obj1);
	
	Obj1.vizualizar();
	system("pause");
	
	cout<<"Ingrese ID: "; cin>>Obj2.numId;
	cout<<"Ingrese nombre: "; cin>>Obj2.nombre;
	cout<<"Ingrese edad: "; cin>>Obj2.edad;
	
	Obj2.vizualizar();
};


int main()
{

	system("Color F0");
	funcionObjeto();
	system("pause>null");
	return 0;
}
