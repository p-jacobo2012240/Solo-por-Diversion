#include <iostream> 
#define LIMITE 2

using namespace std;

float operativa(){
		
	int opcion   = 0;
	string n_a, n_b, n_c;
	int totx, totb, totc;
	//Arrays votos
	int votos_a[5];
	int votos_b[5];
	int votos_c[5];
	int total[5]; 
	int total_b[5];
	int total_c[5];

	do{
		
		cout<<"Seleccione por quien desea votar !!"<<endl;
		cout<<" 1. Cndidato  A    "<<endl;
		cout<<" 2. Candidato B    "<<endl;
		cout<<" 3. Candidato C    "<<endl;
		cout<<" 4.  Sumas totales "<<endl;
		cin>>opcion;
		switch(opcion){
			
			case 1:
				cout<<"  "<<endl;
				for(int i = 0; i<=LIMITE; i ++ ){
					cout<<"Ingresa un numero de votos "<<endl;
					cin>>votos_a[i];
					cin.ignore();
				
				cout<<" "<<endl;
				
				}
				
			break;
				
			case 2:
				cout<<"  "<<endl;
				for(int x = 0; x <= LIMITE ; x ++ ){
					cout<<"Ingresa un numero de votos "<<endl;
						cin>>votos_b[x];
						cin.ignore();
				
					cout<<" "<<endl;
				}
				
				
				
			break;
			
			case 3:
				cout<<"  "<<endl;
				for(int n = 0; n<= LIMITE; n ++ ){
					cout<<"Ingresa un numero de votos "<<endl;
						cin>>votos_c[n];
						cin.ignore();
				
					cout<<"  "<<endl;
				}
				
			break;
			
			
			case 4:
				cout<<" "<<endl;
				//VOTOS A	
				for(int i=0; i<1; i++){
					total[i] = votos_a[0] + votos_a[1] + votos_a[2];
					totx = total[i]; 
				}
				//VOTOS B
				for(int i=0; i<1; i++ ){
					total_b[i] = votos_b[0] +  votos_b[1] +  votos_c[2];
					totb = total_b[i];
				}
				//VOTOS C
				for(int i=0; i<1; i++ ){
					total_c[i] = votos_c[0] + votos_c[1] +  votos_c[2];
					totc = total_c[i]; 
				}
					/*cout<<"total fuera"<<totx<<endl;
					cout<<"Total b"<<totb<<endl;
					cout<<"Toto C"<<totc<<endl;*/
				
				cout<<"---------------------------------------------------------------------"<<            endl;
  				cout<<"|  Departamentro |Candidato A   | Candidato B  |  Candidato C       |"<<            endl;
    			cout<<"--------------------------------------------------------------------"<<             endl;
				cout<<"    "<<" No: 1 "<<"    "<<"       " << votos_a[0] <<"             "<<  votos_b[0] <<"               "<< votos_c[0] <<endl;	
				cout<<"    "<<" No: 2 "<<"    "<<"       " << votos_a[1] <<"             "<<  votos_b[1] <<"               "<< votos_c[1] <<endl;		
				cout<<"    "<<" No: 3 "<<"    "<<"       " << votos_a[2] <<"             "<<  votos_b[2] <<"               "<< votos_c[2] <<endl;	
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"    "<<" Totales "<<"    "<<"     " << totx <<"             "<< totb <<"               "<< totc <<endl;		
				cout<<"---------------------------------------------------------------------"<<endl;	
			break;				
			
				default:
					cout<<"Ingrese una opcion valida !!"<<endl;
		}
		
	}while(opcion != 4 );	
}

//Procedimiento
void procedimiento_llamar(){
	operativa();	
}


int main(){
	procedimiento_llamar();
}
