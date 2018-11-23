#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>

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

void ingresar_fatura(){
	cout<<"factura"<<endl;
}

void imprimir_factur(){
	cout<<"reporte"<<endl;
}
