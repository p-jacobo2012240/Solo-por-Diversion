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
	void ingresarAnimal(int n);
};

void Animal:: ingresarAnimal(int n ){
	Animal a[n];
	
	for(int i = 0; i< n; i++ ){
		
		cout<<""<<endl;
		
		cout<<"Nombre  :  "; 
			cin>>a[i].nombre;
			cin.ignore();
		cout<<"Color   :   "; 
			cin>>a[i].color;
			cin.ignore();
		cout<<"Cantidad Patas : "; 
			cin>>a[i].cant_patas;
			cin.ignore();
		cout<<"Tipo Animal :  "; 
			cin>>a[i].tipos.nombre_tipo;
			cin.ignore();
	}
	
	for(int j = 0; j < n ; j ++  ){
		
		cout<<"======================="<<endl;
		cout<<"Nombre             :          "<<a[j].nombre<<endl;
		cout<<"Color              :          "<<a[j].color<<endl;
		cout<<"Cantidad patas     :          "<<a[j].cant_patas<<endl;
		cout<<"Tipo               :          "<<a[j].tipos.nombre_tipo<<endl;
		cout<<"======================="<<endl;
	}
}



int main(){
	
	int op = 0;
	int dato = 0;
	
	do{
		cout<<"|===============================|"<<endl;
		cout<<"|         Animales APP          |"<<endl;
		cout<<"|  1.   Ingresar Animales       |"<<endl;
		cout<<"|===============================|"<<endl;
		cin>>op;
		switch( op ){
			
			case 1:
				Animal _animalitos;
				cout<<"Ingrese el numero de Animales :)"<<endl;
				cin>>dato;
				if(dato) {
					_animalitos.ingresarAnimal(dato);
				}
			break;
	
				default:
					cout<<" :( invalida op "<<endl;			
		}
		
	}while( op != 2  );
	
}

