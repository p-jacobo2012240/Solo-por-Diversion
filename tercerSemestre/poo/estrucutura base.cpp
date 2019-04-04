#include <iostream>

using namespace std;

//clase base para las demas

class Data{
	public:
		char nombre[30];
		char apellido [30];
		char dirreccion [30];
};


class Complemento{
	public:
		char  descripcion[30];
		Data d;
};



int main(){
	
	cout<<"Hola"<<endl;
	
}
