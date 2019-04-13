#include <iostream>

using namespace std;

class Tipo{
	public:
	char nombre_tipo[30]; 
};


class Vehiculo{
	public:
	int motor;
	char placa[50];
	int cantidad_pasajeros;
	Tipo tipos;
	//Metodos
	void ingresarVehiculo(int q);
};


void Vehiculo::ingresarVehiculo(int q){
	Vehiculo v[q];
	
	for(int i = 0; i< q; i++ ){
	
	cout<<"Motor   :   "<<endl;
		cin>>v[q].motor;
		cin.ignore();
	cout<<"placa   :   "<<endl; 
		cin>>v[q].placa;
		cin.ignore();
	cout<<"capacidad:  "<<endl; 
		cin>>v[q].cantidad_pasajeros;
		cin.ignore();
	cout<<"Tipo = Acuatico, Terrestre, Aereo, otro "<<endl;	
	cout<<"Tipo Vehiculo: "<<endl;
		cin>>v[q].tipos.nombre_tipo;
		cin.ignore();
	}
	
	for(int j = 0; j< q ; j++ ){
		
		cout<<"======================="<<endl;
		cout<<"Motor:              "<<v[j].motor<<endl;
		cout<<"Placa:              "<<v[j].placa<<endl;
		cout<<"Capacidad:          "<<v[j].cantidad_pasajeros<<endl;
		cout<<"Tipo Vehiculo:      "<<v[j].tipos.nombre_tipo<<endl;
		cout<<"======================="<<endl;
		
	}
	
	
		

}

int main(){
	
	Vehiculo _vehiculo;
	int dato = 0;
	int op= 0;
	
	do{
		
		cout<<"|===============================|"<<endl;
		cout<<"|         Transporte APP        |"<<endl;
		cout<<"| 1.   Para acceder             |"<<endl;
		cout<<"|===============================|"<<endl;
		cout<<""<<endl;
		cin>>op;
		if( op == 1  ){
			cout<<"Ingrese el numero ve vehiculos a registrar :)"<<endl;
			cin>>dato;
			if(dato){
				_vehiculo.ingresarVehiculo(dato);
			}
		}
		
		
	}while( op !=2 );		
	
		
	
	
	return 0;
	
}
