#include <iostream>

using namespace std;

class Salas{
	public:
		int numero_sala;
		char  capacidad[30];
};


class Peliculas{
	public:
		char nombre_peli[30];
		char  genero[30];
		char  categoria[30];
		Salas sala;
		//Metodos
		void ingresarPeliculas(int n);
};


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
	
	for(int j = 0; j < n ; j ++  ){
		
		cout<<"======================="<<endl;
		cout<<"Nombre peli:     "<<p[j].nombre_peli<<endl;
		cout<<"Genero:          "<<p[j].genero<<endl;
		cout<<"Categorias:      "<<p[j].categoria<<endl;
		cout<<"Capacidad salas: "<<p[j].sala.capacidad<<endl;
		cout<<"Numero salas:    "<<p[j].sala.numero_sala<<endl;
		cout<<"======================="<<endl;
	}
}



int main(){
	
	int op = 0;
	int dato = 0;
	
	do{
		cout<<"|===============================|"<<endl;
		cout<<"|         Peliculas APP         |"<<endl;
		cout<<"|  1.   Ingresar Peliculas      |"<<endl;
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
	
				default:
					cout<<" :( invalida op "<<endl;			
		}
		
	}while( op != 2  );
	
}
