#include <iostream>

using namespace std;

/*== Declarando todas las funciones ==*/

//Funcion de la SUMA!!
int suma ( ) {
	int numero1 = 0;
	int numero2 = 0;
	cout <<"INGRESE VALOR UNO"<<endl;
	cin  >> numero1 ;
	cout <<"IBGRESE VALOR DOS"<<endl;
	cin  >> numero2;
	int resultado =  numero2 + numero2;
	cout <<"El resultado es: " <<resultado<<endl;
}

//Funcion de la RESTA!!
int resta( ){
	int numerox = 0;
	int numeroy = 0;
	cout <<"INGRESE VALOR UNO"<<endl;
	cin  >> numerox ;
	cout <<"IBGRESE VALOR DOS"<<endl;
	cin  >> numeroy;
	int resultadoo =   numerox -  numeroy;
	cout <<"El resultado es: " << resultadoo<<endl;
}

//Funcion de la MULTA!!   
int multa(){
	int velocidad = 0;
	int comodin = 0;
	
	cout <<"Ingrese la velocidad para ver si existe multa"<<endl;
	cin>> velocidad;
	
	if(  velocidad <= 60 ){
		cout<<"No tiene multa pues su velocidad Fue:"<<velocidad<<endl;
	}
	
	if(   velocidad >= 70 ){
		cout<<"Tiene una multa Q.100 !!! -- su velocidad Fue:"<<velocidad<<endl;	
	}
	
	if(  velocidad >= 80  ){
		cout<<"Tiene una multa Q.250 !!! -- su velocidad Fue:"<<velocidad<<endl;	
	}
	
	if(   velocidad >= 90 ){
		
		cout<<"Tiene una multa Q.500 !!! -- su velocidad Fue:"<<velocidad<<endl;	
		
	}
	
	if(   velocidad >= 91 ){
		cout<<"Tiene una multa Q.5000 !!! -- su velocidad Fue:"<<velocidad<<endl;	
	
	} 

}


//Funcion del alumno

int datos_alumno(){
	char nombre[25];
	char apellido[25];
	char genero[2];
	float nota = 0;
	
	cout <<"Ingrese el Nombre"<<endl;
	cin>>nombre;
	
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


//MAIN EN EL QUE SE INICIALIZARA
int main() {
		
	int numero_elegido = 0;
	
	do{
		
	cout <<"========================================="<<endl;
	cout <<"|  Opcion #1  --- Sumar                  |"<<endl;
	cout <<"|  Opcion #2  --- Restar                 |"<<endl; 	
	cout <<"|  Opcion #3  --- Multas                 |"<<endl;
	cout <<"|  Opcion #4  --- Control Alumno         |"<<endl;  
	cout <<"========================================="<<endl;
	cout <<"|>   Ingrese alguna opcion del menu:   <|"<<endl;
	cout <<"========================================="<<endl;
	cin  >> numero_elegido;
		
		switch(numero_elegido ){
				
		case 1 : 
			suma();
		break;
		
		case 2: 
			resta();
		break;
		
		case 3:
			 multa();	
		break;   
		
		case 4:
			datos_alumno();
		break;   
	
	}
		
	}while(numero_elegido != 4 );
	
		
	/*TAREA #1
	
	REALIZAR UN PROGRAMA QUE CALCULE LA MULTA QUE TENDRA UN PILOTO QUE EXCEDE LA VELOSIDAD PERMITIDA SI ES MENOR A 60 N0 TIENE MULTA 
	SI ES MAYOR A 70 SE APLICA 100 DE MULTA SI ES MAYOR A 80 UNA MULTA DE 250 SI ES MAYOR O IGUAL A 90 500 QUETZALES CASO CONTRARIO 5000 QUETZALES
	
	TAREA #2
	
	INGRESE LOS DATOS DE UN ALUMNO, NOMBRE, APELLIDO, GENERO, Y LA NOTA SI ES MAYOR O IGUAL A 90 OBTIENE A, SI TIENE MAYOR O IGUAL A 80 
	OBTIENE B, SI ES 70 O IGUAL OBTIENE C, SI OBTIEENE IGUAL O MENOR A 60 D Y CUALQUIER NOTA MENOOR ES IGUAL A F
	
	*/	
	
	return 0;	
}
