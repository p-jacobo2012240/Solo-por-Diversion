#include <iostream>

using namespace std;

//clase base para las demas

class Salas{
	public:
		int numero_sala;
		char capacidad[30];
};


class Peliculas{
	public:
		char nombre_peli[30];
		char genero[30];
		char categoria[30];
		Salas sala;
		//Metodos
		void mostrarPeliculas();
		void ingresarPeliculas();
};


void Peliculas::mostrarPeliculas(){
	
	cout<<"Nombre peli "<<nombre_peli<<endl;
	cout<<"Genero      "<<genero<<endl;
	cout<<"Categoria   "<<categoria<<endl;
	cout<<"Sala :: Capacidad "<<sala.capacidad<<endl;
	cout<<"Sala :: Numero    "<<sala.numero_sala<<endl;

}

void Peliculas::ingresarPeliculas(){
	Peliculas p;
	
	cout<<"Nombre peli "; 
		cin>>p.nombre_peli;
		cin.ignore();
	cout<<"Genero      "; 
		cin>>p.genero;
		cin.ignore();
	cout<<"Categoria   "; 
		cin>>p.categoria;
		cin.ignore();
	cout<<"Sala :: Capacidad "; 
		cin>>p.sala.capacidad;
		cin.ignore();
	cout<<"Sala :: Numero    "; 
		cin>>p.sala.numero_sala;
		cin.ignore();
	
	cout<<" "<<endl;
	p.mostrarPeliculas();
	cout<<" "<<endl;
	
}





int main(){
	
	Peliculas peli;
	
	peli.ingresarPeliculas();
	
	//cout<<"Hola"<<endl;
	
}
