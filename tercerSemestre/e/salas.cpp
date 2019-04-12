#include <iostream>

using namespace std;

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
		void mostrarPeliculas(int x);
		void ingresarPeliculas(int n);
};


void Peliculas::mostrarPeliculas(int q ){
		
		cout<<" Mostrando las peliculas "<<endl;
		
		for(int i = 0; i< q ;i ++ ){
			
			cout<<""<<endl;
			
			cout<<"Nombre peli "<<nombre_peli[i]<<endl;
			cout<<"Genero      "<<genero[i]<<endl;
			cout<<"Categoria   "<<categoria[i]<<endl;
			cout<<"Sala :: Capacidad "<<sala.capacidad[i]<<endl;
			cout<<"Sala :: Numero    "<<sala.numero_sala<<endl;
				
		}
}

void Peliculas::ingresarPeliculas(int n ){
	Peliculas p[n];
	
	for(int i = 0; i< n; i++ ){
		
		cout<<""<<endl;
		
		cout<<"Nombre peli :  "; 
			cin>>p[i].nombre_peli;
			cin.ignore();
		cout<<"Genero   :   "; 
			cin>>p[i].genero;
			cin.ignore();
		cout<<"Categoria :   "; 
			cin>>p[i].categoria;
			cin.ignore();
		cout<<"Sala :: Capacidad : "; 
			cin>>p[i].sala.capacidad;
			cin.ignore();
		cout<<"Sala :: Numero  :  "; 
			cin>>p[i].sala.numero_sala;
			cin.ignore();
	}
	
	p[n].mostrarPeliculas( n ); 
}



int main(){
	
	cout<<" Salas de Cine "<<endl;
	int op = 0;
	int dato = 0;
	
	do{
		cout<<"|===============================|"<<endl;
		cout<<"|  1. Ingresar Peliculas        |"<<endl;
		cout<<"|  2. Mostrar  Peliculas        |"<<endl;
		cout<<"|===============================|"<<endl;
		cin>>op;
		switch( op ){
			
			case 1:
				Peliculas peli;
				cout<<"Ingrese el numero de peliculas :)"<<endl;
				cin>>dato;
				if(dato) {
					peli.ingresarPeliculas(dato);
				}
			break;
			
			case 2:
				cout<<"Aun no terminada del todo";
				Peliculas mostPeli;
				mostPeli.mostrarPeliculas( 10 );
			break;
			
				default:
					cout<<" :( invalida op "<<endl;			
		}
		
	}while( op != 2  );
	
}
