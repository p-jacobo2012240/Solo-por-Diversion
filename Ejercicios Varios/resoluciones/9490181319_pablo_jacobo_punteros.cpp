#include <iostream>
#include <stdlib.h>

using namespace std;

//procedimientos
float addDatos();
void sowDM();

//Variables globales
int numeroVeces; 
int *nVecesPuntero; 
string array_nombres[100];


void mostrarPuntero(){
		
	int *xVector;
	xVector = nVecesPuntero;
	
	string *strVector;
	strVector = array_nombres;
	
	cout<<"======  Mostrando puntero   ============"<<endl;
	
	for(int i; i <=numeroVeces; i ++ ){
		
		cout<<"id: "<<i<<endl;
		cout<<"en memoria edad   : " <<xVector++<<endl;
		cout<<"en memoria nombre : " <<strVector++<<endl;
	}	

}

int main(){
	
	int opcion;
	
	while ( opcion != 5 ){
		
		cout<<"|==================================|"<<endl;
		cout<<"|    1. Ingresa nombre y edad      |"<<endl;
		cout<<"|    2. Direccion memoria & Info   |"<<endl;
		cout<<"|    3. Imprimir puntero           |"<<endl;
		cout<<"|    4. Salir                      |"<<endl;
		cout<<"|==================================|"<<endl;
		cin>>opcion;
		
		if( opcion  == 1 ){
			addDatos();
		}
		
		if(opcion == 2 ){
			sowDM();
		}
		
		if(opcion == 3 ){
			mostrarPuntero();
		}
		
		if( opcion == 4 ){
			cout<<"Ha salido del programa :( "<<endl;
			exit(0); 
		}
		
		if( opcion != ( 1 | 2 | 3 | 4 )){
			cout<<"Opcion invalida"<<endl;
		}
	}
	return 0;
	
	delete[] nVecesPuntero;	
}

float addDatos(){
	
	string nombre;
	
	int n_veces;
	cout<<"Ingrese el numero de veces a ingresar"<<endl;
	cin>>numeroVeces;
	
	nVecesPuntero = new int[numeroVeces];
	
	for(int i; i <= numeroVeces; i ++ ){
		cout<<"Id: "<< i <<endl;
		cout<<"Ingresa la edad"<<endl;
		cin>>nVecesPuntero[i];
		cin.ignore();
		cout<<"Ingresa el nombre"<<endl;
		getline(cin, nombre);
		
		array_nombres[i] = nombre;
	}
}


void sowDM(){

	cout<<"======  Datos del array   ============"<<endl;
	
	for(int j; j<=numeroVeces; j ++ ){
	
		cout<<j<<endl;
		cout<<nVecesPuntero[j]<<endl;
		cout<<array_nombres[j]<<endl;
		cout<<"------------------"<<endl;			
	}
	
	cout<<"======  Referencias de memoria   ============"<<endl;
	
	for(int j; j<=numeroVeces; j ++ ){
	
		cout<<&j<<endl;
		cout<<&nVecesPuntero[j]<<endl;
		cout<<&array_nombres[j]<<endl;
		cout<<"------------------"<<endl;			
	}
}



