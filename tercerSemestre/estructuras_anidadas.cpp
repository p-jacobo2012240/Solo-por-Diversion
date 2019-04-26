#include <iostream>
#include <fstream>

using namespace std;

struct Rol{
	char type[30];
};

struct User{
	char username[30];
	char pass[30];
	struct Rol rol_name; 
};

void agregarUser(User us);
User pedirUser();
void listarUsers();

void add();
void show();


int main(){
	
	//Agregar 
	/*User us =  pedirUser();
	agregarUser(us);*/
	
	//Listar
	//listarUsers();
	
}


User pedirUser(){
	
		User users;
	
	
		fflush(stdin);
	
		cout<<"Ingresa el username"<<endl;
		cin.getline(users.username, 30);
		cout<<"Ingresa el pasword"<<endl;
		cin.getline(users.pass, 30);
		cout<<"Ingresa el rolname"<<endl;
		cin.getline(users.rol_name.type , 30);
	
		return users;
	
}

void agregarUser(User users){
	
	ofstream hck;
    
	hck.open("dbAlumnos.txt", ios::app);
    hck.write((char*)&users, sizeof(User));
    hck.close();	
}


void listarUsers(){
	
	ifstream data;
	
	data.open("dbAlumnos.txt", ios::app);
    User _al;
    
	if(data.good()){
        while(data.read((char*)&_al,sizeof(User))){
        	int i;
        	i ++;
			cout<<"id_alumno : "<< i <<endl;
			cout<<"Nombre    : "<<_al.username <<endl;
		    cout<<"pass    : "<<_al.pass <<endl;
			cout<<"Rol_Name      : "<<_al.rol_name.type <<endl;
		    
		    cout<<"-------------------"<<endl;
        }

    }else{
        cout<<"No se puede leer el archivo :( "<<endl;
    }
    data.close();
}
