#include <iostream>

using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
		string genero;
	public:
		Persona(string nom, int e,string gen){
			nombre = nom;
			edad = e;
			genero = gen;
		}		 
};

int main(){
	
	string n, g;
	int e;
	
	cout<<"ingrese nombre : ";
	cin>>n;
	cout<<"ingrese edad   : ";
	cin>>e;
	cout<<"ingrese genero : ";	
	cin>>g;
	
	Persona unaPersona(n,e,g);
	
	//cout<<"la info es"<<unaPersona.Persona();
	
	
	//cout<<"hola constructores"<<endl;
	
}
