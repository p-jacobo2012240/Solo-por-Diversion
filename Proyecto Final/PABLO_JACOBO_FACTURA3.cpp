#include <iostream>

using namespace std;

float factura(){
	
	const float IVA = 0.21; 
	
	string libros[5][9];
	int op = 0;
	string array_nombre[5];
	string array_fecha[5];
	string array_nit[5];
	string fecha, nombre, nit , numero_doc, serie;
	int valor_unitario[10000];
	int cantidad[10000];  
	
	//Limite de articulos (5)
	int limitArt[5];
	
	do{
		
		cout<<"Carnet --> 9490-18-1319"<<endl;
		cout<<"Nombre --> Pablo Daniel Jacobo Sanchez"<<endl;
		cout<<"Seccion --> D"<<endl;
		cout<<""<<endl;	
		cout<<"   Ingrese su factura      "<<endl;
		cout<<"   1. Para ingresar Datos  "<<endl;
		cin>>op;
		
		for (int i = 0; i<5 ; i++ ){
			cout<<"Ingrese sus 5 articulos"<<endl;
			cout<<"Fecha Emitida"<<endl;
			getline(cin, fecha);
			cin.ignore();
			cout<<"Nombre del cliente"<<endl;
			getline(cin,nombre);
			cin.ignore();
			cout<<"Nit"<<endl;
			getline(cin,nit);
			cin.ignore();
			cout<<"Numero documento"<<endl;
			getline(cin,numero_doc);
			cin.ignore();
			cout<<"Serie"<<endl;
			getline(cin, serie);
			cin.ignore();
			
			cout<<"Valor unitario: \t";
			cin>>valor_unitario[i];
			cin.ignore();
			cout<<"Cantidad"<<endl;
			cin>>cantidad[i];
			
			
			array_fecha[i] = fecha;
			array_nombre[i] = nombre;
			array_nit[i] = nit;
			libros[i][3]= numero_doc;
			libros[i][4] = serie;
			libros[i][5] = serie;
												
		}
		cout<<""<<endl;
		
		
		//Propiedades
		for(int k = 0; k<5; k ++ ){
			cout<<k;
	   		cout<<"\t"<<array_nombre[k]; 
	   		cout<<"\t"<<array_fecha[k];
	   		cout<<"\t"<<array_nit[k];
			cout<<" "<<endl;
		}
		
		//SUMA DE TODA LA PLANILLA
   		for(int i=0;i<1;i++){
        	limitArt[i] = valor_unitario[0] + valor_unitario[1] + valor_unitario[2] + valor_unitario[3] + valor_unitario[4];
        	cout<<"SUMA DE FACTURA SIN IVA: "<<limitArt[i]<<endl;
   		}
   		
   		   		
   		//SUMA CON IVA
   		for(int i=0;i<1;i++){
        	float resultado;
			limitArt[i] = valor_unitario[0] + valor_unitario[1] + valor_unitario[2] + valor_unitario[3] + valor_unitario[4];
        	resultado =  limitArt[i] + IVA;
        	cout<<"TOTAL CON IVA : "<<resultado<<endl;
   		}
		cout<<""<<endl;     
   		
   		system("pause");

		
	}while(op != 1 );
}

void procedimiento_op(){
	factura();
}

int main(){
	procedimiento_op();
}
