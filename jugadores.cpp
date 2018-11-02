#include <iostream>

using namespace std;

int main(){
	
	string productos[100];
	int  op = 0;  
	int i =0;
	while( op != 2 ){
		//system("cls");
		cout<<"1. Ingresar "<<endl;
		cout<<"2. Mostrar  "<<endl;
		string nombre;
		
		switch(op){
			case 1: 
			cout<<"Ingrese el nombre del producto"<<endl;
			cin>>nombre;
			productos[i] = nombre;
			//i++;
			break;
			
			case 2:
			for(int j=0; j<i; j++ ){
				cout<<"->"<<(j + 1)<<productos[j]<<endl;
			}
			break;
				default:
					cout<<"Marque una opcion valida"<<endl;
					
		}
		op++;	
	}
	
}
