#include <iostream>

using namespace std;

float votacion(){
	
	string nombre_dep;
	int candidato_a[10000];
	int candidato_b[10000];
	int candidato_c[10000];
	
	
	for(int i=0; i<3; i++){
		
		cout<<"Ingrese el Numero dep"<<endl;
		cin>>nombre_dep;
		
		cout<<"Ingrese el candidato A"<<endl;
		cin>>candidato_a[i];
		
		cout<<"Ingrese el candidato B"<<endl;
		cin>>candidato_b[i];
		
		cout<<"Ingrese el candidato C"<<endl;
		cin>>candidato_c[i];
	}
	
	//Mostar los datos de tabla
	for(int j=0;j<=3;j++){
		cout<<j;
	    cout<<"\t Candidato A "<<candidato_a[j];
	    cout<<"\t Candidato B "<<candidato_b[j];
        cout<<"\t Candidato C "<<candidato_c[j];
		cout<<" "<<endl;	
	}
}

void procedimeiento_votacion(){
	votacion();
}

int main(){
	procedimeiento_votacion();	
}
