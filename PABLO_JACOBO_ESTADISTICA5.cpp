#include <iostream>

using namespace std;

float estadistica(){
	
	const float MEDIA = 30;
	const int OPS = 4;
	const int OPS1 = 8;
	
	int edad[10000];
	int limiteArray[30];
	float res1, res2, op, ot;
	int result;
	int sum;
	
	
	for(int i=0; i<=29; i ++ ){
		
		cout<<"N0: "<<i<<" "<<"Ingrese la edad : \t";
		cin>>edad[i];
		
	}
	
	//Media
	for(int i = 0; i<=30 ; i ++){
		sum += edad[i];
	}

	//Mediana
	for(int o = 0; o<=29; o ++  ){
	
		limiteArray[o] = edad[14];  
		res1 = limiteArray[o];
		
		limiteArray[o] = edad[15];
		res2 = limiteArray[o];
		
		op = res1 / res2;
		
	}
	
	//Moda
	for(int o = 0; o<=29; o ++  ){
	
		limiteArray[o] = edad[OPS];  
		res1 = limiteArray[o];
		
		limiteArray[o] = edad[OPS1];
		res2 = limiteArray[o];
		
		ot = res1 / res2;
		
	}
	
	cout<<"La Media   es:   "<<sum / MEDIA <<endl;
	cout<<"La Mediana es:   "<<op<<endl;
	cout<<"La Moda    es    "<<ot<<endl; 			
	
	system("pause");
	
}

void procedimiento_op(){
	estadistica();
}

int main(){
	procedimiento_op();
	
	
}
