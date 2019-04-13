#include <iostream>

using namespace std;

class Tipo{
	public:
	char nombre_tipo[30]; 
};


class Animal{
	public:
	char nombre[50];
	char color[30];
	int  cant_patas;
	Tipo tipos;
	//Metodos
	void ingresarAnimal(int f);
};


void Animal::ingresarAnimal(int f){
	Animal a[f];
	
	for(int i = 0; i< f; i++ ){
	
	cout<<"nombre   :   "<<endl;
		cin>>a[f].nombre;
		cin.ignore();
	cout<<"colores   :   "<<endl; 
		cin>>a[f].color;
		cin.ignore();
	cout<<"cantidad_patas:  "<<endl; 
		cin>>a[f].cant_patas;
		cin.ignore();
	cout<<"vertebrado/ invertebrado: "<<endl;
		cin>>a[f].tipos.nombre_tipo;
		cin.ignore();
	}
	
	for(int j = 0; j< f ; j++ ){
		
		cout<<"======================="<<endl;
		cout<<"Nombre:               "<<a[j].nombre<<endl;
		cout<<"Colores:              "<<a[j].color<<endl;
		cout<<"Cantidad_patas:       "<<a[j].cant_patas<<endl;
		cout<<"Tipo Animal:          "<<a[j].tipos.nombre_tipo<<endl;
		cout<<"======================="<<endl;
		
	}
	
	
		

}

int main(){
	
	Animal ani;
	int dato = 0;
	int op= 0;
	
	do{
		
		cout<<"|===============================|"<<endl;
		cout<<"|         Animales APP          |"<<endl;
		cout<<"|    1.   Para Iniciar          |"<<endl;
		cout<<"|===============================|"<<endl;
		cout<<""<<endl;
		cin>>op;
		if( op == 1  ){
			cout<<"Ingrese el numero ve vehiculos a registrar :)"<<endl;
			cin>>dato;
			if(dato){
				ani.ingresarAnimal( dato );
			}
		}
		
		
	}while( op !=2 );		
	
		
	
	
	return 0;
	
}
