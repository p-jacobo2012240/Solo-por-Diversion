#include <iostream>

using namespace std;

class Tipo{
	public:
		char  n_tipo[30];
};


class Alimento{
	public:
		char nombre_alimento[30];
		int  carbos;
		char  calorias[30];
		Tipo t;
		//Metodos
		void ingresarAlimento(int n);
};


void Alimento::ingresarAlimento(int n ){
	Alimento a[n];
	
	for(int i = 0; i< n; i++ ){
		
		cout<<""<<endl;
		
		cout<<"Nombre Alimento :  "; 
			cin>>a[i].nombre_alimento;
			cin.ignore();
		cout<<"Carbohidratos   :   "; 
			cin>>a[i].carbos;
			cin.ignore();
		cout<<"Calorias : "; 
			cin>>a[i].calorias;
			cin.ignore();
		cout<<"Tipo Alimento :  "; 
			cin>>a[i].t.n_tipo;
			cin.ignore();
	}
	
	for(int j = 0; j < n ; j ++  ){
		
		cout<<"======================="<<endl;
		cout<<"Nombre alimento :          "<<a[j].nombre_alimento<<endl;
		cout<<"Carbohidratos   :          "<<a[j].carbos<<endl;
		cout<<"Calorias        :          "<<a[j].calorias<<endl;
		cout<<"Tipo Alimento   :          "<<a[j].t.n_tipo<<endl;
		cout<<"======================="<<endl;
	}
}



int main(){
	
	int op = 0;
	int dato = 0;
	
	do{
		cout<<"|===============================|"<<endl;
		cout<<"|         Alimentos APP         |"<<endl;
		cout<<"|  1.   Ingresar Alimentos      |"<<endl;
		cout<<"|===============================|"<<endl;
		cin>>op;
		switch( op ){
			
			case 1:
				Alimento _alimento;
				cout<<"Ingrese el numero de Alimentos :)"<<endl;
				cin>>dato;
				if(dato) {
					_alimento.ingresarAlimento(dato );
				}
			break;
	
				default:
					cout<<" :( invalida op "<<endl;			
		}
		
	}while( op != 2  );
	
}
