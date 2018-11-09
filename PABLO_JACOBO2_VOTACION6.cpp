#include <iostream> 

using namespace std;

float operativa(){
		
	int opcion   = 0;
	string n_a, n_b, n_c;
	
	//Arrays votos
	int votos_a[5];
	int votos_b[5];
	int votos_c[5];
	int total[5]; 
	int total_b[5];
	int total_c[5];
	
	//Arrays Departamentos
	string dep_a[5];
	string dep_b[5];
	string dep_c[5];
	
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
				for(int i = 0; i<=2; i ++ ){
					cout<<"Ingresa '1'  para votar "<<endl;
						cin>>votos_a[i];
						cin.ignore();
					cout<<"Ingrese departamento"<<endl;
						getline(cin,n_a);
						
					dep_a[i]=n_a;
					cout<<" "<<endl;
				
				}
				
				for(int i=0; i<=0; i++ ){
					total[i]  = votos_a[0] + votos_a[1] + votos_a[2] ;
					cout<<"Tus datos de votacion fueron "<<endl;
					cout<<" N0  : "<<total[i]<<endl;
					cout<<" Dep : "<<dep_a[i]<<endl;
					cout<<" "<<endl;
				}
				
			break;
				
			case 2:
				cout<<"  "<<endl;
				for(int x = 0; x <= 0; x ++ ){
					cout<<"Ingresa '1' para votar "<<endl;
						cin>>votos_b[x];
						cin.ignore();
					cout<<"Ingresa departamento"<<endl;
						getline(cin, n_b);
					
					dep_b[x] = n_b;
					cout<<" "<<endl;
				}
				
				for(int y = 0; y <=0 ; y ++ ){
					total_b[y] = votos_b[0] + votos_b[1] + votos_b[2];
					cout<<"Tus datos de votacion fueron "<<endl;
					cout<<" N0   :"<<total_b[y]<<endl;
					cout<<" Dep  :"<<dep_b[y]<<endl;
				}
				
			break;
			
			case 3:
				cout<<"  "<<endl;
				for(int n = 0; n<=0; n ++ ){
					cout<<"Ingresa '1' para votar "<<endl;
						cin>>votos_c[n];
						cin.ignore();
					cout<<"Ingresa el departamento"<<endl;
						getline(cin, n_c);
					
					dep_c[n] = n_c;
					cout<<"  "<<endl;
				}
				
				for(int m = 0; m <=0; m++ ){
					//este aun esta libre porbar longitud dinamica
					cout<<"Tus datos de votacion fueron "<<endl;
					cout<<" N0   :"<<votos_c[m]<<endl;
					cout<<" Dep  :"<<dep_c[m]<<endl;	
				}
				
			break;
			
			
			case 4:
				
				for(int w = 0; w<2; w++){ 
					cout<<"---------------------------------------------------------------------"<<            endl;
  				    cout<<"|  Departamentro |Candidato A   | Candidato B  |  Candidato C       |"<<            endl;
    			    cout<<"--------------------------------------------------------------------"<<             endl;
				    cout<<"     "<<"deptz "<<"    "<<"       " << votos_a[w] <<"           "<< "poner_aqui " <<"           "<<total_c<<endl;
				    
				}
				
				//verificar la longotud de la sumatoria sss	
				/*cout<<"ESTA SERA LA TABLA FINAL"<<endl;
				for(int w=0; w<=0; w ++ ){
					
					cout<<"el total es:" << total <<endl;					
				}*/		
			
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
