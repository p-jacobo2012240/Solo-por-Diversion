#include <iostream>
#include <fstream>
#define LIMIT 3
#include <string>

using namespace std;

class Hck{
	public:
		char nombre[30];
		string path;
		string ext;
		
};


void insertObj(Hck hck); //Handler method
Hck requireHck();
void init();

int main(){
	
	
	
	
	int op;
	
	do{
		
		cout<<"============================="<<endl;
		
			init();
		
		cout<<"============================="<<endl;
		
	}while(op != LIMIT );
	
}

void init(){
	
	Hck obj = requireHck();
	insertObj(obj);
}


void insertObj(Hck hck){
	ofstream db;
	
    db.open("hackobodb.dxs", ios::app);
    db.write((char*)&hck, sizeof(Hck));
    db.close();	
}


Hck insertObj(){
	Hck _h;
	
	cin.ignore();
	cout<<"Nombre   : "<<endl;
    cin.getline(_h.nombre,30);
    cout<<"Extension     : "<<endl;
    cin>>_h.ext;
    cin.ignore();
    cout<<"Ruta   : "<<endl;
    cin>>_h.path;
	
	return _h;
}
