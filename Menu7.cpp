#include <iostream>

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
			
		
		default:
			cout<<"Operacion invalida"<<endl; 
		
	}
	
	
}

void conversion(){
	
	cout<<"esta es la funcion de la conversion"<<endl;
	
		
}

void mes_actual(){
	
	int mes_actual = 0;
	
	cout <<"|--  Seleccione su mes                  --|"<<endl;
	cout <<"|    Tenga en cuanta que va de 1 a 12     |"<<endl; 	
	cin>>mes_actual;
	
	switch( mes_actual ){
		
		case 1:
			cout<<"Ha elegido enero"<<endl;
		break;
		
		case 2:
			cout<<"Ha elegido Febrero"<<endl;
		break;
		
		case 3:
			cout<<"Ha elegido marzo"<<endl;
		break;
		
		case 4:
			cout<<"Ha elegido abril"<<endl;
		break;
		
		case 5:
			cout<<"Ha elegido mayo"<<endl;
		break;
		
		case 6:
			cout<<"Ha elegido junio"<<endl;
		break;
		
		case 7:
			cout<<"Ha elegido julio"<<endl;
		break;
		
		default:
			cout<<"Opcion invalida"<<endl;
		break;							
		
	}
	
	
	
}

void n_romano(){
	
	cout<<"esta es la funcion de n a romano "<<endl;
	
}

void romano_n(){
	
	cout<<"esta es la funcion de romano a n "<<endl;
	
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
				
				//cout<<"ha seleccionado 1"<<endl;
				calculadora_simple();
			
			break;
			
			case 2:
				
				//cout<<"ha seleccionado 2"<<endl;
				conversion();
			
			break;
			
			case 3:
				
				//cout<<"ha seleccionado 3"<<endl;
				mes_actual();
				
			break;
			
			case 4:
				
				n_romano();
				//cout<<"ha seleccionado 4"<<endl;
				
			break;
			
			case 5:
				
				romano_n();
				//cout<<"ha seleccionado 5"<<endl;
			break;
			
			case 6:
				
				calificacion();
				//cout<<"ha seleccionado 7"<<endl;	
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
		
		
	}while( opcion != 3);

	
	//Este es un demo de lo que hay que hacer
	cout<<"HOLA XD"<<endl;
	return 0;
}
