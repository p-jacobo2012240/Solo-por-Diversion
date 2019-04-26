#include <iostream>

using namespace std;



void contadorManual(int p ){
	
		int contador;
	
		if( p >= 99 ){
			
			cout<<"llegaste al final " <<endl;
		
		}else{
			
			for(int i = 0; i < 99; i ++  ){
				
				int d;
				
				cout<<"ingrese el numero"<<endl;
				cin>>d; 
				
				contador += d;
				//contador = contador + p;
				
				if( contador == 99 ){
					
					cout<<"llegaste al final"<<endl;	
					return;					
				
				}
				
				cout<<"N0:: "<< contador;	
					
			}
			
		}
}

void contadorAutomatico(){
	
	for(int i = 1 ; i <= 99; i ++ ){
	
		
		cout<<"No :"<< i <<endl;
		
			
		if( i == 99 ){
			
			cout<<"llegaste al final"<<endl;
			
		}
			
		
	}

}


int main(){
	
	int op;
	int numero_parametro;
	
	cout<<" 1. contador manual "<<endl;
	cout<<" 2. contador automatico "<<endl;  
	cin>> op; 
	
	switch(op){
		
		case 1:
			
			contadorManual( numero_parametro );
			
		break;
		
		case 2:
			
			contadorAutomatico();
		
		break;
		
			default: 
				cout<<"op invalida"<<endl;
		
	}
	
	
}

