#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
#define IVA  0.12

using namespace std;

struct Factura{
	int  fecha;
	int  numero_factura;
	char nombre_apellido[30];
	char nit[30];
	char concepto [30];
	int  cantidad;
	float precio_unitario;
	float monto;
	float iva;
	float total; 
};

//Procedimientos
void ingresar_fatura();
void imprimir_factur();

int main(){
	
	int op = 0;
	do{
		
		cout<<"   Ingreso de Factura     "<<endl;
		cout<<"   1. Ingresar Factura    "<<endl;
		cout<<"   2. Impresion Facturas  "<<endl;
		cout<<"   3. Salir               "<<endl;
		cout<<" "<<endl;
		cout<<"Ingrese una opcion"<<endl;
		cin>>op;
		switch(op){
			case 1:
				cout<<" Ingresando datos"<<endl;
					ingresar_fatura();
				getch();	
			break;
			
			case 2:
				cout<<" Ingresando datos"<<endl;
					imprimir_factur();
				getch();	
			break;
			
			case 3:
			
			break;
			
				default:
					cout<<""<<endl;
					cout<<"Seleccione una opcion valida"<<endl;
					cout<<""<<endl;	
		}
		
	}while(op != 3 );
	
	return 0;
}

//Funcion calculo de monto
float calc_monto(int x, float y ){
	float z = x + y;
	return z;
}

//Funcion calcular IVA
float calc_iva(float d){
	float v = d * IVA;
	return v;
}

//Funcion calcular total
float calc_total(float q, float u){
	float l = q + u;
	return l;
}

void ingresar_fatura(){
	
	char espacio[2];
	Factura _fac;
	
	cin.getline (espacio, 2 );

	cout <<"Fecha: ";
	cin >> _fac.fecha , '\n';
	
	cout <<"Numero Factura: ";
	cin >> _fac.numero_factura, '\n';
	cin.ignore();
	
	cout <<"Nombres y apellidos: ";
	cin.getline( _fac.nombre_apellido, 30, '\n' );

	cout<<"Nit: ";
	cin.getline( _fac.nit, 30, '\n' );
	
	
	cout<<"Concepto: ";
	cin.getline( _fac.concepto, 30, '\n' );
	
	cout <<"Cantidad: ";
	cin >> _fac.cantidad , '\n';

	cout <<"Precio Unitario: ";
	cin >> _fac.precio_unitario , '\n';
	
	_fac.monto = calc_monto(_fac.cantidad, _fac.precio_unitario );

	_fac.iva =  calc_iva(_fac.monto);
	
	_fac.total = calc_total(_fac.monto, _fac.iva );
	
	fstream archivo;
	archivo.open( "factReporte.bin", ios::out | ios::app | ios::binary );
	archivo.write( ( char * ) & _fac, sizeof( Factura ) );
	archivo.close();
	cout << "\n";
	cout << "Datos Guardado";
	cout<<" "<<endl;
	//main();
}

void imprimir_factur(){

	Factura mostrar;
	fstream archivo( "factReporte.bin", ios::in | ios::binary );
	if  (archivo.fail() ) {
		cerr << "Error al abrir factReporte.bin" << endl;
	} else {
		system( "cls" );
		cout<<"  Fecha "<<"  "<<" Numero Fac"<<"  "<<" Nombre "<<"  "<<" Nit "<<" Monto "<<"  "<<" Iva Monto " <<endl;
		while ( !archivo.eof() ) {
			archivo.read( ( char* ) & mostrar, sizeof( Factura ));
			if ( !archivo.eof() ) {
				if ( mostrar.numero_factura > 10 ) {
					
					cout <<mostrar.fecha<<"   "<< mostrar.numero_factura<<"   "<< mostrar.nombre_apellido<<"   "<< mostrar.nit<<"   "<<mostrar.monto<<"   "<< mostrar.iva;			
					cout << "\n";
				}
			}
		}
		cout << "\n";
		cout << "Presione enter para regresar al menu";
	}
	archivo.close();
	cout<<" "<<endl;

}
