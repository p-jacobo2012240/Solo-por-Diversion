#include <iostream>
#include <fstream>

using namespace std;

struct Persona{
    char nombre[30];
    char apellido[45];
    int edad;
    char genero[45];
};

void ingresarPersona(Persona p);
Persona leerPersona();
void listarPersonas();

int main(){
		
		//Ref : http://www.cplusplus.com/doc/tutorial/files/
		//Ejemplo hecho con <3 
		cout<<"Hola DevSolitions"<<endl;
		
		/* INGRESAR PERSONAS */
 		//Persona p = leerPersona();
		//ingresarPersona(p);
		
		/*LISTAR PERSONAS*/
		listarPersonas();
		
		return 0;	
}

void ingresarPersona(Persona p){
	ofstream data;
    data.open("xdxd.txt", ios::app);
    data.write((char*)&p,sizeof(Persona));
    data.close();	
}


Persona leerPersona(){
	Persona _per;
	
	cout<<"Nombre   : "<<endl;
    cin.getline(_per.nombre,30);
    cout<<"Apellido : "<<endl;
    cin.getline(_per.apellido,45);
    cout<<"Edad     : "<<endl;
    cin>>_per.edad;
    cin.ignore();
    cout<<"Gnero   : "<<endl;
    cin.getline(_per.genero,45);
	
	return _per;
}

void listarPersonas(){
	ifstream entrada;
	entrada.open("xdxd.txt", ios::app);
    Persona _per;
    
	if(entrada.good()){
        while(entrada.read((char*)&_per,sizeof(Persona))){
        	cout<<"Nombre   : "<<_per.nombre<<endl;
		    cout<<"Apellido : "<<_per.apellido<<endl;
		    cout<<"Edad     : "<<_per.edad<<endl;
		    cout<<"Genero   : "<<_per.genero<<endl;
		    cout<<"-------------------"<<endl;
        }

    }else{
        cout<<"No se puede leer el archivo :( "<<endl;
    }
    entrada.close();
}
