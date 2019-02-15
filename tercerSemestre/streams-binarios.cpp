#include <iostream>
#include <fstream>

using namespace std;

const char DIR_ARCHIVO[] = "hckdos.txt";

struct Persona{
    char nombre[30];
    char apellido[45];
    int edad;
    char genero[45];
};

void ingresarPersona(Persona p);
Persona leerPersona();

int main(){
		
		cout<<"Hola DevSolitions"<<endl;
		
		Persona p = leerPersona();
		ingresarPersona(p);
		return 0;	
}

void ingresarPersona(Persona p){
	ofstream data;
    data.open(DIR_ARCHIVO, ios::out | ios::app);
    data.write((char*)&p,sizeof(Persona));
    data.close();
	
}


Persona leerPersona(){
	Persona _per;
	cout<<"\t\t\tNOMBRE   : ";
    cin.getline(_per.nombre,30);
    cout<<"\t\t\tAPELLIDO : ";
    cin.getline(_per.apellido,45);
    cout<<"\t\t\tEDAD     : ";
    cin>>_per.edad;
    cin.ignore();
    cout<<"\t\t\tCORREO   : ";
    cin.getline(_per.genero,45);
	return _per;
}
