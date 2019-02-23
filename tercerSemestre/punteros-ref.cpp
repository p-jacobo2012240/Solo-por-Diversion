#include <iostream>
#include <stdlib.h>

using namespace std;

int numeroVeces; 
int *nVecesPuntero; 
string array_nombres[100];

float ingresoDatos(){
	
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


float mostrarDM(){

	
	for(int j; j<=numeroVeces; j ++ ){
		cout<<"======  Datos del array   ============"<<endl;
		cout<<"id: "<<j<<endl;
		cout<<nVecesPuntero[j]<<endl;
		cout<<array_nombres[j]<<endl;
		cout<<""<<endl;			
	}
	
	int *localVector;
	localVector = nVecesPuntero;
	
	for(int i; i <=numeroVeces; i ++ ){
		cout<<"======  Posiciones en memoria   ============"<<endl;
		cout<<"id: "<<i<<endl;
		cout<<"en memoria: " <<localVector<<endl;
		localVector++; 
	}
	
	
	
}

int main(){
	
	int op;
	
	while( op !=4 ){
		
		cout<<"|=============================|"<<endl;
		cout<<"|    punetros                 |"<<endl;
		cout<<"|=============================|"<<endl;
		cout<<"|    1. Ingresa nombre y edad |"<<endl;
		cout<<"|    2. Memoria v.puntero     |"<<endl;
		cout<<"|    3. Un vector de lista    |"<<endl;
		cout<<"|    4. Imprimir punetro      |"<<endl;
		cout<<"|=============================|"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				ingresoDatos();
			break;
			
			case 2:
				mostrarDM();
			break;
			
			case 3:
				
			break;
			
			case 4:
				
			break;
			
				default:
					cout<<"Opcion invalida"<<endl;
		}
	}
	return 0;
	
	delete[] nVecesPuntero;
	
}
