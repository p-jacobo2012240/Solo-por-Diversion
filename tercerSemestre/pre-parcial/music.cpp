#include <iostream>
#include <fstream>

using namespace std;

class Artist{
	public:
		string name;
};

class Music{
	public:
		string gender;
		Artist artist;
		int year;
		int bpms;
		//Methods
		void listarMusic();
		void insertMusic();
		
};


//Serealizable
void serializableEst(Music _music){

	ofstream db;
    db.open("wip.txt", ios::app);
    db.write((char*)&_music, sizeof(Music));
    db.close();	
}


int main(){
	
	Music m;	
	int op;
		
	do{
		cout<<"1. Insert Music"<<endl;
		cout<<"2. Show Musics "<<endl;
		cin>>op;
		switch( op ){
			
			case 1:
				
				m.insertMusic();
				
			break;
			
			case 2:
				
				m.listarMusic();
				
			break;
			
				default:
					cout<<"Invalid op"<<endl;
		}
		
	}while(op != 3);

}

//Develop Procedures

void Music::insertMusic(){
	
	Music m;
	
	cout<<"Gendre"<<endl;
	cin>>m.gender;
	
	cout<<"Artist"<<endl;
	cin>>m.artist.name;
	
	cout<<"Year production"<<endl;
	cin>>m.year;
	
	cout<<" velocity bpms"<<endl;
	cin>>m.bpms;
	
	
	serializableEst( m);
		
}

void Music::listarMusic(){
	
	ifstream data;
	data.open("wip.txt", ios::app);
    Music _mus;
    
    //cout<<"llegaste aqui"<<endl;
	if(data.good()){
        while(data.read((char*)&_mus,sizeof(Music))){
        	int i;
        	i ++;
			cout<<"id_register : "<< i <<endl;
			cout<<"Gendre      : "<< _mus.gender <<endl;
		    cout<<"Artist      : "<< _mus.artist.name <<endl;
		    cout<<"bpm         : "<< _mus.bpms <<endl;
		    cout<<"-------------------"<<endl;
        }

    }else{
        cout<<"No se puede leer el archivo :( "<<endl;
    }
	data.close();
	
}
