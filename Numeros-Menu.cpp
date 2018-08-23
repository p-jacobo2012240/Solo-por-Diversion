#include <iostream>

using namespace std;


void calculadora_simple(){
	
	
	
}


int main(){
	
	int opcion = 0 ;
	
	do{
		
	cout <<"==========================================="<<endl;
	cout <<"|  Opcion #1  -- Calculadora Simple       |"<<endl;
	cout <<"|  Opcion #2  --- Conversion de Monedas   |"<<endl; 	
	cout <<"|  Opcion #3  --- Mes Actual              |"<<endl;
	cout <<"|  Opcion #4  --- De Numero a Romano      |"<<endl;  
	cout <<"|  Opcion #5  --- De Romano a Numero      |"<<endl;
	cout <<"|  Opcion #6  --- Calificacion            |"<<endl;
	cout <<"|  Opcion #7  --- Salir                   |"<<endl;
	cout <<"==========================================="<<endl;
	cout <<"|>   Ingrese alguna opcion del menu:   <|"<<endl;
	cout <<"========================================="<<endl;
	cin  >> opcion ;
	
		switch( opcion){ 
			
			case 1:
				
				cout<<"ha seleccionado 1"<<endl;
			
			break;
			
			case 2:
				
				cout<<"ha seleccionado 2"<<endl;
			
			break;
			
			case 3:
				
				cout<<"ha seleccionado 3"<<endl;
				
			break;
			
			default:
				cout<<"Seleccione una opcion Valida"<<endl;	
			
		}
		
		
	}while( opcion != 3);
	
	
	cout<<
	
	//Este es un demo de lo que hay que hacer
	cout<<"HOLA XD"<<endl;
	return 0;
}
