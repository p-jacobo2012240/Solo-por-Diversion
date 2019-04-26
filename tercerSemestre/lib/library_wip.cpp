#include <iostream>
#include <fstream>
#define LIMIT 3
#include <string>

using namespace std;

class Hck{
	public:
		char nombre[30];
		
};


void insertObj(Hck hck, string path, string ext ); //Handler method
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
	Hck objHck;
	
	objHck = requireHck();
	insertObj(objHck);
}


void insertObj(Hck hck, string path, string ext ){
	ofstream db;
    db.open("hackobodb.txt" , ios::app);
    db.write((char*)&hck, sizeof(Hck));
    db.close();	
}*/
