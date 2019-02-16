#include <iostream>
#include <fstream>

using namespace std;

struct Alumnos{
	int id_alumno;
	char nombre[30];
	int edad;
	int carnet;
};

//Procedimietos
void ingresarAlumnos(Alumnos alumno);
Alumnos pedirAlumno();
void listarAlumnos();
//Inicializando los procedinientos
void iniciar();
void leer();

int main(){
	
	int op = 0;
	
	do{
		
		cout<<"|=======================|"<<endl;
		cout<<"|   1. Ingresar alumno  |"<<endl;
		cout<<"|   2. Ver alumnos      |"<<endl;
		cout<<"|=======================|"<<endl;
		cin>>op;
		
		switch(op){
			case 1 :
				system("cls");
				iniciar();
				main();
			break;
			
			case 2 :
				system("cls");
				leer();
				main();
			break;
				
				default:
					cout<<"Opcion invalida :P "<<endl;
		}
		return 0;
	}while(op != 3);	
}


void ingresarAlumnos(Alumnos alumno){
	ofstream db;
    db.open("hackobo.txt", ios::app);
    db.write((char*)&alumno, sizeof(Alumnos));
    db.close();	
}

Alumnos pedirAlumno(){
	Alumnos _al;
	
	cin.ignore();
	cout<<"Nombre   : "<<endl;
    cin.getline(_al.nombre,30);
    cout<<"Edad     : "<<endl;
    cin>>_al.edad;
    cin.ignore();
    cout<<"Carnet   : "<<endl;
    cin>>_al.carnet;
	
	return _al;
}

void listarAlumnos(){
	ifstream data;
	data.open("hackobo.txt", ios::app);
    Alumnos _al;
    
	if(data.good()){
        while(data.read((char*)&_al,sizeof(Alumnos))){
        	int i;
        	i ++;
        	cout<<""<<endl;
			cout<<"-------------------"<<endl;
			cout<<"id_alumno : "<< i <<endl;
			cout<<"Nombre    : "<<_al.nombre<<endl;
		    cout<<"Edad      : "<<_al.edad<<endl;
		    cout<<"Carnet    : "<<_al.carnet<<endl;
		    cout<<"-------------------"<<endl;
        }

    }else{
        cout<<"No se puede leer el archivo :( "<<endl;
    }
    data.close();
}

void iniciar(){
	Alumnos alumno = pedirAlumno();
	ingresarAlumnos(alumno);
}

void leer(){
	listarAlumnos();
}
