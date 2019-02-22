#include <iostream>

using namespace std;

float ingresar_nombre_edad(){
	
	int edad[100];
	string nombre;
	string array_nombres[100];
	
	int n_veces;
	cout<<"Ingrese el numero de veces a ingresar"<<endl;
	cin>>n_veces;
	
	for(int i; i <= n_veces ; i ++ ){
		cout<<"Id: "<< i <<endl;
		cout<<"Ingresa la edad"<<endl;
		cin>>edad[i];
		cin.ignore();
		cout<<"Ingresa el nombre"<<endl;
		getline(cin, nombre);
		
		array_nombres[i] = nombre;
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
				ingresar_nombre_edad();
			break;
			
			case 2:
				
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
	
}
