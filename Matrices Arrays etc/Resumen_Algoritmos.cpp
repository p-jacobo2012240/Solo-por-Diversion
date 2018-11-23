#include <iostream>

using namespace std;



float data(){

struct cuentas{
	
	string nombre;
	float saldo;	
	string tipo_cuenta;
}datos;
	
	int op;

	do{
		
		cout<<" Elija si es ahorro o monetaria "<<endl;
		cout<<" 1. tipo de cuenta              "<<endl;
		cout<<" 2. Deposito - Retiro           "<<endl;
		cout<<" 3. Reporte                     "<<endl;
		cin>>op;
		
		switch(op){
			
			case 1:
				
				cout<<"Bienvenido a tu cuenta "<<endl;
				cout<<""<<endl;
				cout<<"Ingrese la suma de la cuenta"<<endl;
				cin>>datos.saldo;
				cout<<"Ingrese el nombre de la cuenta"<<endl;
				cin>>datos.nombre;
				
				cout<<""<<endl;
				
			break;
			
			case 2:
				
				int op2;
				cout<<"Podras realizar Depositos / Retiros "<<endl;
				cout<<" 1. Depositos "<<endl;
				cout<<" 2. Retiros   "<<endl;
				cin>>op2;
				switch( op2){
					
					case 1:
						cout<<"Selecciono la opcion de Depositos"<<endl;
						for(int i=0; i<=1; i++){
							cout<<"Tus operaciones de deposito son"<<endl;
						}
					break;
					
					case 2:
						cout<<"selecciono la opcion de Retiros "<<endl;
						for(int x=0; x<=1; x++){
							cout<<"Tus operaciones de Retiro son"<<endl;
						}
					break;
					
					default:
						cout<<"Ingresa una opcion valida"<<endl;	
				}
			
			break;
			
				default:
					cout<<"Elija una opcion valida"<<endl;	
		}		
	}while(op != 3 );

}

void sp_op(){
	data();
}

int main(){
	sp_op();	
}
