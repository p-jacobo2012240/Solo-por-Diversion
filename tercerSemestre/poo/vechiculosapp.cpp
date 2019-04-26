#include <iostream>7

using namespace std;

class Tipo{
	public:
	char nombre_tipo[30]; 
};


class Vehiculo{
	public:
	char placa[30];
	char cantidad_pasajeros[30];
	Tipo tipos;
	//Metodos
	void ingresarVehiculo();
	void mostrarVehiculo();
	
};

void Vehiculo::mostrarVehiculo(){
	
	cout<<"Placa "<<placa<<endl;
	cout<<"cantidad pasajeros      "<<cantidad_pasajeros<<endl;
	cout<<"Tipo   "<<tipos.nombre_tipo<<endl;
	
}

void Vehiculo::ingresarVehiculo(){
	Vehiculo v;
	
	cout<<"placa   :   "; 
		cin>>v.placa;
		cin.ignore();
	cout<<"capacidad:  "; 
		cin>>v.cantidad_pasajeros;
		cin.ignore();	
	cout<<"Tipo Vehiculo: ";
		cin>>v.tipos.nombre_tipo;
		
	cout<<" "<<endl;
	v.mostrarVehiculo();
	cout<<" "<<endl;
}

int main(){
	
	Vehiculo ve;
	ve.ingresarVehiculo();
	
}
