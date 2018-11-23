#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>

using namespace std;

struct Persona{
	char nombre[20];
	char tipo_sangre[5];
	char fecha_nacimiento[10];
	char vigencia[20];
	int dpi;
};

//Procedimientos
void ingreso_datos();
void impresion_reporte();

int main(){
	
	int op = 0;
	
	do{
		
		cout<<"        Menu Principal      "<<endl;
		cout<<"   1. Ingreso de datos      "<<endl;
		cout<<"   2. Impresion de reporte  "<<endl;
		cout<<"   3. Salir                 "<<endl; 
		cout<<""<<endl;
		cout<<"Ingrese su opcion"<<endl;
		cout<<""<<endl;
		cin>>op;
		switch(op){
		
			case 1:
				cout<<" Ingresando datos"<<endl;
					ingreso_datos();
				getch();	
			break;
			
			case 2:
				cout<<" Generando reporte"<<endl;
					impresion_reporte();
				getch();
			break;
			
			case 3:
				exit(0);
			break;
				
				default:
					
					cout<<" "<<endl;
					cout<<"Opcion invalida"<<endl;	
					cout<<" "<<endl;
					
		} 
		 
	}while( op != 3 );
	
	return 0;
}


void ingreso_datos(){
	
	char espacio[2];
	Persona _persona;
	
	cin.getline (espacio, 2 );

	cout <<"Nombre: ";
	cin.getline( _persona.nombre, 20, '\n' );
	
	cout <<"DPI: ";
	cin >> _persona.dpi, '\n';
	cin.ignore();
	
	cout <<"Tipo de Sangre: ";
	cin.getline( _persona.tipo_sangre, 5, '\n' );

	cout<<"Fecha de nacimiento: ";
	cin.getline( _persona.fecha_nacimiento, 10, '\n' );
	
	
	cout<<"Vigencia: ";
	cin.getline( _persona.vigencia, 20, '\n' );

	
	fstream archivo;
	archivo.open( "depTransito.bin", ios::out | ios::app | ios::binary );
	archivo.write( ( char * ) & _persona, sizeof( Persona ) );
	archivo.close();
	cout << "\n";
	cout << "Creado exitosamente";
	cout<<" "<<endl;
	//main();
}


void impresion_reporte(){
	
	Persona mostrar;
	fstream archivo( "depTransito.bin", ios::in | ios::binary );
	if  (archivo.fail() ) {
		cerr << "Error al abrir depTransito.bin" << endl;
	} else {
		system( "cls" );
		while ( !archivo.eof() ) {
			archivo.read( ( char* ) & mostrar, sizeof( Persona ));
			if ( !archivo.eof() ) {
				if ( mostrar.dpi > 10 ) {
					cout << "\nNombre: " << mostrar.nombre;
					cout << "\nDpi: " << mostrar.dpi;
					cout << "\nTipo_Sangre: " << mostrar.tipo_sangre;
					cout << "\nfecha: " << mostrar.fecha_nacimiento;
					cout << "\nvigencia: " << mostrar.vigencia;
					cout << "\n";
				}
			}
		}
		cout << "\n";
		cout << "Resporte exitoso";
	}
	archivo.close();
	cout<<" "<<endl;
}
