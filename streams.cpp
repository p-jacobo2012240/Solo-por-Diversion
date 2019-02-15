#include <iostream>
#include <fstream>

using namespace std;


int main(){
	
	//Escritura
	/*ofstream saludo;
	saludo.open("prueba.text");
	
	saludo<<"hola devs"<<endl;	
	saludo<<"Hola de nuevo"<<endl;
	saludo<<"Hola de nuevo x2"<<endl;
	saludo.close();*/
	
	//Lectura
	ifstream saludo;
	char line[80];
	saludo.open("prueba.text");
	saludo.getline(line, 80  );
	cout<<line<<endl;
	saludo.close();
}
