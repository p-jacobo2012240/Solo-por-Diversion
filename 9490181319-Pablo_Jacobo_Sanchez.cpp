#include <iostream>
#include <cmath> 
#include<stdio.h>
#include<string>

using namespace std;

//Funcion de  la calculadora simple
void calculadora_simple(){
	
	int numero_uno = 0;
	int numero_dos = 0;
	char opcion ;      //Opciones en las operaciones
	float total = 0;  //Total de cada una de las operaciones
	
	cout<<"!-- Calculadora simple --!"<<endl;
	
	cout<<"Ingrese numero 1"<<endl;
	cin>>numero_uno;
	
	cout<<"Seleccione un signo"<<endl;
	cout<<" (SUMA)  +  "<<endl;
	cout<<" (RESTA) -  "<<endl;
	cout<<" (MULT)  *  "<<endl;
	cout<<" (DIVI)  /  "<<endl;
	cout<<" (EXPO)  ^  "<<endl;
	cout<<"Ingrese su signo: "<<endl;
	cin>>opcion;
	
	cout<<"Ingrese numero 2"<<endl;
	cin>>numero_dos;
	

	
	switch( opcion ){
		
		case '+':
			total = numero_uno + numero_dos;
			cout<<"Su total de la suma es:"<<total<<endl; 
		break;
		
		case '-':
			total =  numero_uno - numero_dos;
			cout<<"Su total de la resta es:" <<total<<endl;  
		break;
		
		case '*':
			total = numero_uno * numero_dos;
			cout<<"Su total de la multiplicacion es:"<<total<<endl;
		break;
		
		case '/':
			total = numero_uno / numero_dos;
			cout<<"Su total de la Division es:"<<total<<endl;	
		break;
		
		case '^':
			total = pow(numero_uno, numero_dos);	
			cout<<"Su total de elevar ambos numeros es:"<<total<<endl;
		break;
		
		default:
			cout<<"Operacion invalida"<<endl; 
		
	}
		
}

void conversion(){
	
	float moneda = 0;
	char abrev [3];
	float conver = 0;
	
	cout<<"CONVERSOR DE MONEDAS"<<endl;
	cout<<""<<endl;
	
	//Operativa del problema
	cout<<"Ingrese su monto"<<endl;
	cin>>moneda;
	cout<<"Ingrese su abreviatura USD, EUR, NZD, CAD (Solo estas son validas) "<<endl;
	cin>> abrev;
	
	cout<<"Su moneda es:"<<moneda<<endl;
	cout<<"Su abreviatura es:"<<abrev<<endl;
	cout<<"Su valor es"<<endl;
	
	
		
}

void mes_actual(){
	
	int mes_actual = 0 ;
	
	cout<<"==========================================="<<endl; 
	cout<<"|--      Seleccione su mes              --|"<<endl;
	cout<<"|    Tenga en cuanta que va de 1 a 12     |"<<endl;
	cout<<"==========================================="<<endl; 	
	cin>>mes_actual;
	
	switch( mes_actual ){
		
		case 01:
			cout<<"Ha elegido enero"<<endl;
		break;
		
		case 02:
			cout<<"Ha elegido Febrero"<<endl;
		break;
		
		case 03:
			cout<<"Ha elegido marzo"<<endl;
		break;
		
		case 04:
			cout<<"Ha elegido Abril"<<endl;
		break;
		
		case 05:
			cout<<"Ha elegido mayo"<<endl;
		break;
		
		case 06:
			cout<<"Ha elegido Junio"<<endl;
		break;
		
		case 07:
			cout<<"Ha elegido Julio"<<endl;
		break;
		
		case 8:   //Esto no me lo reconoce como un 08 sino solo 8
			cout<<"Ha elegido Agosto"<<endl;
		break;
		
		case 9:   //Esto no me lo reconoce como un 09 sino solo 9 
			cout<<"Ha elegido Septiembre"<<endl;
		break;
		
		case 10:
			cout<<"Ha elegido Octubre"<<endl;
		break;
		
		case 11:
			cout<<"Ha elegido Noviembre"<<endl;
		break;
		
		case 12:
			cout<<"Ha elegido Diciembre"<<endl;
		break;		
			
		default:
			cout<<"Opcion invalida"<<endl;
						
		
	}
					
}

void n_romano(){
	
	//cout<<"esta es la funcion de n a romano "<<endl;
	int valor = 0;
	int u, d, c, m;
	int total =0;
	
		
	cout<<"Ingrese su numero a convertir en romano"<<endl;
	cin>>valor;
	
	//Dvidiendo en sus valores correspondientes
	u = valor % 10; 
	valor = valor/10;
	d = valor % 10; 
	valor = valor/10;
    c = valor % 10; 
	valor = valor/10;
    m = valor % 10;
	valor = valor/10;
	
	//Switch independientes u, d, c , m
	switch( u){
		case 1:
			cout<<"Su numero en  romano es: "<<"I"<<endl;
		break;
		case 2:
			cout<<"Su numero en  romano es: "<<"II"<<endl;
		break;
		case 3:
			cout<<"Su numero en  romano es: "<<"III"<<endl;
		break;
		case 4:
			cout<<"Su numero en  romano es: "<<"IV"<<endl;
		break;
		case 5:
			cout<<"Su numero en  romano es: "<<"V"<<endl;
		break;
		case 6:
			cout<<"Su numero en  romano es: "<<"VI"<<endl;
		break;
		case 7:
			cout<<"Su numero en  romano es: "<<"VII"<<endl;
		break;
		case 8:
			cout<<"Su numero en  romano es: "<<"VIII"<<endl;
		break;
		case 9:
			cout<<"Su numero en  romano es: "<<"XI"<<endl;
		break;
									
	}
	
	switch( d ){
		case 1:
			cout<<"Su numero en  romano es: "<<"X"<<endl;
		break;
		case 2:
			cout<<"Su numero en  romano es: "<<"XX"<<endl;
		break;
		case 3:
			cout<<"Su numero en  romano es: "<<"XXX"<<endl;
		break;
		case 4:
			cout<<"Su numero en  romano es: "<<"XL"<<endl;
		break;
		case 5:
			cout<<"Su numero en  romano es: "<<"L"<<endl;
		break;
		case 6:
			cout<<"Su numero en  romano es: "<<"LX"<<endl;
		break;
		case 7:
			cout<<"Su numero en  romano es: "<<"LXX"<<endl;
		break;
		case 8:
			cout<<"Su numero en  romano es: "<<"LXXX"<<endl;
		break;
		case 9:
			cout<<"Su numero en  romano es: "<<"XC"<<endl;
		break;
										
	}
	
	switch( c ){
		case 1:
			cout<<"Su numero en  romano es: "<<"C"<<endl;
		break;
		case 2:
			cout<<"Su numero en  romano es: "<<"CC"<<endl;
		break;
		case 3:
			cout<<"Su numero en  romano es: "<<"CCC"<<endl;
		break;
		case 4:
			cout<<"Su numero en  romano es: "<<"CD"<<endl;
		break;
		case 5:
			cout<<"Su numero en  romano es: "<<"D"<<endl;
		break;
		case 6:
			cout<<"Su numero en  romano es: "<<"DC"<<endl;
		break;
		case 7:
			cout<<"Su numero en  romano es: "<<"DCC"<<endl;
		break;
		case 8:
			cout<<"Su numero en  romano es: "<<"DCCC"<<endl;
		break;
		case 9:
			cout<<"Su numero en  romano es: "<<"CM"<<endl;
		break;
								
	}
	
	switch( m ){
		case 1:
			cout<<"Su numero en  romano es: "<<"M"<<endl;
		break;
		case 2:
			cout<<"Su numero en  romano es: "<<"MM"<<endl;
		break;
		case 3:
			cout<<"Su numero en  romano es: "<<"MMM"<<endl;
		break;
		
							
	}
	
	
}

void romano_n(){

	char valor [25];
	
	cout<<"Ingrese el numero que desea convertir a natural"<<endl;
	cin>>valor;
	
	cout<<"Su valor es: "<< valor<<"  EN ROMANO ES:"<< endl;
	
}

void calificacion(){
	
	char nombre[25];
	char apellido[25];
	char genero[2];
	float nota = 0;
	
	cout <<"Ingrese el Nombre"<<endl;
	cin>>nombre;                                                       //Con getLine ya soporta EL ESPACIO INVESTIGAR
	
	cout <<"Ingrese el Apellido"<<endl;
	cin>>apellido;
	
	cout<<"Seleccione su Genero: M o F"<<endl;
	cin>>genero;
	
	cout<<"Ingrese la NOTA del alumno"<<endl;
	cin>>nota;
	
	if(nota >= 90 ){
		cout<<"Su calificacion es 'A' pues su nota es:"<<nota<<endl;	
		cout<<"Su nombre es:"<<nombre<<endl;
		cout<<"Su Apellido es:"<<apellido<<endl;	
		cout<<"Su Genero es:"<< genero	<<endl;	
	}
	
	if(nota >= 80 ){
		cout<<"Su calificacion es 'B' pues su nota es:"<<nota<<endl;
		cout<<"Su nombre es:"<<nombre<<endl;
		cout<<"Su Apellido es:"<<apellido<<endl;	
		cout<<"Su Genero es:"<< genero	<<endl;		
	}
	
	if(nota >= 70 ){
		cout<<"Su calificacion es 'C' pues su nota es:"<<nota<<endl;
		cout<<"Su nombre es:"<<nombre<<endl;
		cout<<"Su Apellido es:"<<apellido<<endl;	
		cout<<"Su Genero es:"<< genero	<<endl;		
	}
	
	if(nota == 60 ){
		cout<<"Su calificacion es 'D' pues su nota es:"<<nota<<endl;
		cout<<"Su nombre es:"<<nombre<<endl;
		cout<<"Su Apellido es:"<<apellido<<endl;	
		cout<<"Su Genero es:"<< genero	<<endl;		
	}
	
	if(nota <=60 ){
		cout<<"Reprobado... F"<<nota<<endl;	
		cout<<"Su nombre es:"<<nombre<<endl;
		cout<<"Su Apellido es:"<<apellido<<endl;	
		cout<<"Su Genero es:"<< genero	<<endl;
	}	
	
} 


int main(){
	
	int opcion = 0; 
	
	do{
		
	cout <<"==========================================="<<endl;
	cout <<"| Nombre: Pablo Daniel Jacobo Sanchez     |"<<endl;
	cout <<"| Carnet: 9490-18-1319                    |"<<endl;
	cout <<"| Curso:  Algoritmos                      |"<<endl;
	cout <<"==========================================="<<endl;
	cout <<"|  Opcion #1  -- Calculadora Simple       |"<<endl;
	cout <<"|  Opcion #2  --- Conversion de Monedas   |"<<endl; 	
	cout <<"|  Opcion #3  --- Mes Actual              |"<<endl;
	cout <<"|  Opcion #4  --- De Numero a Romano      |"<<endl;  
	cout <<"|  Opcion #5  --- De Romano a Numero      |"<<endl;
	cout <<"|  Opcion #6  --- Calificacion            |"<<endl;
	cout <<"|  Opcion #7  --- Salir                   |"<<endl;
	cout <<"==========================================="<<endl;
	cout <<"|>   Ingrese alguna opcion del menu:     <|"<<endl;
	cout <<"==========================================="<<endl;
	cin  >> opcion ;
	
		switch( opcion ){ 
			
			case 1:
							
				calculadora_simple();
			
			break;
			
			case 2:
				
				conversion();
			
			break;
			
			case 3:
				
				mes_actual();
				
			break;
			
			case 4:
				
				n_romano();
							
			break;
			
			case 5:
				
				romano_n();
				
			break;
			
			case 6:
				
				calificacion();
					
			break;
			
			case 7:
				cout<<"Ha salido del programa :( "<<endl;
				exit(0); //Saliendo del programa
			
			break;	
			
			default:
				cout<<endl;
				cout<<"==============================="<<endl;
				cout<<"| Seleccione una opcion Valida |"<<endl;	
				cout<<"==============================="<<endl;
				cout<<endl;
		}
		
		
	}while( opcion != 7);

	
	//Este es un demo de lo que hay que hacer
	cout<<"HOLA XD"<<endl;
	
	return 0;
}
