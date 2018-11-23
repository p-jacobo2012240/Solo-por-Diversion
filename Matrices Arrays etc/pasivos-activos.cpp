#include <iostream>

using namespace std;

float ingreso_activos(){
	
	//Definiendo variables
	int  cuenta[10000];
	string nombre_cuenta;
	float  m_cuenta;
	
	//Definiendo Array C.Activos
	int array_total[15];
    string array_activos[15];
	
	for(int i = 0; i<1; i++ ){
		cout<<"Ingrese su cuenta"<<endl;
		cin>>cuenta[i];
		cin.ignore();
		
		cout<<"Ingrese el nombre de la cuenta"<<endl;
		getline(cin, nombre_cuenta);
		    
	    cout<<"Ingrese monto cuenta"<<endl;
		cin>>m_cuenta;
        cin.ignore();
        cout<<""<<endl;
        
        array_activos[i] = nombre_cuenta;
	}
	
	//Mostrando los valores
	for(int i = 0; i<1; i ++){
	   
	   cout<<i;
	   cout<<"\t"<<array_activos[i];
	   cout<<"\t"<<m_cuenta;
	   cout<<"\t"<<cuenta[i];
       cout<<" "<<endl;
	          
	}
	
}

float ingreso_pasivos(){//Definiendo variables
    int  cuenta[10000];
	string nombre_cuenta;
	float  m_cuenta;
	
	//Definiendo Array C.Pasivos
	int array_total[15];
	string array_activos[15];
	
	for(int i = 0; i<1; i++ ){
		cout<<"Ingrese su cuenta"<<endl;
		cin>>cuenta[i];
		cin.ignore();
		
		cout<<"Ingrese el nombre de la cuenta"<<endl;
		getline(cin, nombre_cuenta);
		    
	    cout<<"Ingrese monto cuenta"<<endl;
		cin>>m_cuenta;
        cin.ignore();
        cout<<""<<endl;
        
        array_activos[i] = nombre_cuenta;
	}
	
	//Mostrando los valores
	for(int j = 0; j<1; j ++){
	   
	   cout<<j;
	   cout<<"\t"<<array_activos[j];
	   cout<<"\t"<<m_cuenta;
	   cout<<"\t"<<cuenta[j];
       cout<<" "<<endl;
	          
	}
	

}

float balance_general(){

	int array_total[15];
		//Balance
    for(int i=0;i<1;i++){
        //array_total[i] = cuenta[0] + array_activos[0];
        cout<<"Balance: "<<array_total[i]<<endl;
    }
  
    
	
}


int main(){
	
	int op;
	do{
	
	cout<<"Carnet --> 9490-18-1319"<<endl;
	cout<<"Nombre --> Pablo Daniel Jacobo Sanchez"<<endl;
	cout<<"Seccion --> D"<<endl;		
	cout<<"======================="<<endl;
	cout<<"| Pasivos <> Activos  |"<<endl;
	cout<<"======================="<<endl;
	cout<<"| 1.Ingreso Activos   |"<<endl;
	cout<<"| 2.Ingreso Pasivos   |"<<endl;
	cout<<"| 3.Balance General   |"<<endl;
	cout<<"======================="<<endl;
	cout<<":<"<<endl;
	cin>>op;
	
	switch(op){
		case 1:
			ingreso_activos();
		break;
		case 2: 
			ingreso_pasivos();
		break;
		case 3:
			balance_general();
		break;
		
		default:
			cout<<"OPCION INVALIDA"<<endl;	
	}
	
	}while( op !=4 );
}
