#include <iostream>
#define MAX 6

using namespace std;

class Typo{
	public:
		string nombre_typo;
		float costo;
};

class Habitacion{
	public:
		int numero_habitacion;
		int inicio_reservacion;
		int fin_reservacion
};

void segundo_menu(){
	
	cout<<" a. catalogo           "<<endl;
	cout<<" b. habitaciones       "<<endl;
	cout<<" c. tipo_habitaciones  "<<endl;
	cout<<" d. reservacion        "<<endl;
}


int main(){
	
	int op;
	
	do{
		
		cout<<"==========================="<<endl;
		cout<<"| 1. Ingreso de datos     |"<<endl;
		cout<<"| 2. Impresion pantalla   |"<<endl;
		cout<<"| 3. Ticket               |"<<endl;
		cout<<"==========================="<<endl;
		
	}while(op != MAX );
	
	
}
