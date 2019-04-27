#include <iostream>
#include <fstream>

using namespace std;


struct Alumnos{
	int id_alumno;
	char nombre[30];
	int edad;
	int carnet;
};


//Porcedimientos
void agregarAlumno(Alumnos alumnos);
Alumnos pedirAlumno();
void mostrarAlumnos();
//Inicializando los procedinientos
void init();
void show();

int main(){
		
	int opcion;
	Alumnos alumno;


	while(opcion != 4 ){
		
		cout<<"|=======================|"<<endl;
		cout<<"|   1. Agregar Alumno   |"<<endl;
		cout<<"|   2. Ver Alumnos      |"<<endl;
		cout<<"|=======================|"<<endl;
		cin>>opcion;
		
		if(opcion == 1 ){
			init();
			main();
		}
		
		if(opcion == 2){
			show();
			main();
		}
		
		if( opcion != ( 1 | 2 ) ){
			cout<<"Opcion invalida"<<endl;
			main();
		}
	}
	
	return 0;

}

Alumnos pedirAlumno(){
	
	Alumnos alumno;
	
	cin.ignore();
	cout<<"Nombre   : "<<endl;
    cin.getline(alumno.nombre,30);
    cout<<"Edad     : "<<endl;
    cin>>alumno.edad;
    cin.ignore();
    cout<<"Carnet   : "<<endl;
    cin>>alumno.carnet;
	
	return alumno;
}


void agregarAlumno(Alumnos alumno){
	
	ofstream hck;
    
	hck.open("dbAlumnos.txt", ios::app);
    hck.write((char*)&alumno, sizeof(Alumnos));
    hck.close();	
}




void listarAlumnos(){
	
	ifstream data;
	
	data.open("dbAlumnos.txt", ios::app);
    Alumnos _al;
    
	if(data.good()){
        while(data.read((char*)&_al,sizeof(Alumnos))){
        	int i;
        	i ++;
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

void init(){
	Alumnos alumno = pedirAlumno();
	agregarAlumno(alumno);	
}

void show(){
	listarAlumnos();	
}

