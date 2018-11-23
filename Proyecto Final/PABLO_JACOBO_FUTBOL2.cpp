#include <iostream>

using namespace std;

 float logica(){
 	string jugadores[100];
	string nombre_equipo_a[100];
	string nombre_equipo_a_cam[100];
	
	string nombre_equipo_b[100];
	string nombre_equipo_b_cam[100];
	
	int op = 0;  
	int i =0;
	int w = 0;
	int q = 0;
	int p = 0;
	
	string nombre_a;
	string n_camiseta_a;
	
	string nombre_b;
	string n_camiseta_b;	
	
	do{
		cout<<"Carnet --> 9490-18-1319"<<endl;
		cout<<"Nombre --> Pablo Daniel Jacobo Sanchez"<<endl;
		cout<<"Seccion --> D"<<endl;
		cout<<""<<endl;	
		cout<<"Asigne sus jugadores a sus equipos preferidos 12 es recomendado"<<endl;
		cout<<"1. Ingreso de jugadores a equipo Coders"<<endl;
		cout<<"2. Ingreso de jugadores a equipo Graphqlitos"<<endl;
		cout<<"3. Mostrar Jugadores de Coders"<<endl;
		cout<<"4. Mostrar Jugadores de  Graphqlitos"<<endl;
		cin>> op;	
		
		switch(op){
			case 1:
				cout<<"Ingrese el nombre del jugador asignado a Coders"<<endl;
				cin>>nombre_a;
				nombre_equipo_a[i] = nombre_a;
				cout<<"Ingrese el numero de camiseta"<<endl;
				cin>>n_camiseta_a;
				nombre_equipo_a_cam[w] = n_camiseta_a;		
				i++;
				w++;
			break;
			
			case 2:
				cout<<"Ingrese el nombre del jugador asignado a Graphqlitos"<<endl;
				cin>>nombre_a;
				nombre_equipo_b[q] = nombre_b;
				cout<<"Ingrese el numero de camiseta"<<endl;
				cin>>n_camiseta_a;
				nombre_equipo_b_cam[p] = n_camiseta_b;		
				q++;
				p++;
			break;
			
			case 3:
				for(int j = 0; j<i; j++){
					cout<<"N0 jugador:: "<<nombre_equipo_a[j]<<endl;
				}
				cout<<""<<endl;
					for(int l = 0; l<w; l++){
					cout<<"N0 Cmiseta:: "<<nombre_equipo_a_cam[l]<<endl;
				}
				cout<<""<<endl;
			break;
			
			case 4:
				
				for(int h = 0; h<q; h++){
					cout<<"N0 jugador:: "<<nombre_equipo_b[h]<<endl;
				}
				cout<<""<<endl;
					for(int v = 0; v<p; v++){
					cout<<"N0 Cmiseta:: "<<nombre_equipo_b_cam[v]<<endl;
				}
				cout<<""<<endl;
			break;
			
			default:
				cout<<"Ingrese una opcion valida"<<endl;	
		}
		
			
	}while(op != 4);
 }

void operar(){
	logica();
}


int main(){
	operar();
}
