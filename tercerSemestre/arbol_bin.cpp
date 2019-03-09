#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *derecha;
	Nodo *izquierda;
};

Nodo *crearNodo(int);
void insertarNodo(Nodo *&,int);
void show(Nodo *,int);
Nodo *arbol = NULL;

int main(){
		
		int opcion;
		int numerito;
		int c = 0 ;
		int nveces; 
		
		while(opcion != 3 ){
			
			cout<<"==================="<<endl;
			cout<<"|  1. Agregar      |"<<endl;
			cout<<"|  2. Mostrar      |"<<endl;
			cout<<"|  3. Salir        |"<<endl;
			cout<<"==================="<<endl;
			cin>>opcion;
			
			if(opcion == 1 ){
				
				cout<<"Ingrese la cantidad de datos que desea ingresar"<<endl;
				cin>>nveces;
				
				for(int i=1; i<=nveces ;i ++){
					cout<<"Ingresa un dato No:"<< i <<endl;
					cin>>numerito;
					insertarNodo(arbol, numerito);	
				}
			}
			
			if(opcion == 2){
				show(arbol, c);
			}
			
			if(opcion == 3){
				cout<<"Ha salido del programa :( "<<endl;
				exit(0);
			}
			
			if( opcion != (1 | 2 )){
				cout<<"Opcion invalida"<<endl;
			}							
		}
	return 0;
}

Nodo *crearNodo(int n ){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->derecha = NULL;
	nuevo_nodo->izquierda = NULL;
	
	return nuevo_nodo;
}

/*void crearRaiz::insert(int dato){
  if(nodo!=NULL)
    insertarNodo(dato, root);
  else
  {
    root = new node;
    root->key_value=key;
    root->left=NULL;
    root->right=NULL;
  }
}*/

void insertarNodo(Nodo *&arbol ,int n){
	if(arbol == NULL){
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
		
	}else{
		int valorRaiz = arbol->dato;
		if(n < valorRaiz){
			insertarNodo(arbol->izquierda, n);
		}else{
			insertarNodo(arbol->derecha, n);
		}
	}
}

void show(Nodo *arbol, int cont){
	if(arbol == NULL ){
		return;
	}else{
		show(arbol->derecha, cont +1 );
		for(int i =0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		show(arbol->izquierda, cont+1);
	}
}




