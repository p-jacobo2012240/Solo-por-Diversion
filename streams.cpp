#include <iostream>
#include <fstream>

using namespace std;


int main(){
	
	ofstream saludo;
	saludo.open("prueba.text");
	
	saludo<<"hola devs"<<endl;	
	cout<<"Hola de nuevo"<<endl;
	saludo.close();
}
