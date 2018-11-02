#include <iostream>

using namespace std;

float operativa_monedas(){
	
	const float DOLARES = 7.72;
	const float EURO = 8.80;
	const  float DOLAR_CANADIENSE = 5.89;
	const  float LIBRA = 10.03;
	const  float FRANCO_SUIZO = 7.71;    
			
	//Definiendo variables
	string nombre_moneda;
	int valor_moneda[10000];
	
	//Definiendo array de Divisas
	int array_moneda_valor[5];
	string array_moneda_nombre[5];
	
	int total[5];
		
	for (int i=0;i<5; i++){
	
		cout<<"El orden Debera se: DOLAR, EURO, DOLAR_CANADIENSE, LIBRA, FRANCO_SUIZO"<<endl;
	   		
       cout<<"Valores de monedas N0: "<<i<<"\n";
	  	
		cout<<"Nombre de la moneda: \t";
	    getline(cin, nombre_moneda);
       
		       
        cout<<"Cantidad a Ingresar de la moneda : \t";
	    cin>>valor_moneda[i];
        cin.ignore();
        cout<<""<<endl;

		array_moneda_nombre[i]=  nombre_moneda;
	   
    }
    
    //Mostrando los valores
	cout<<"N0:    Moneda:      Valor: \n";
    for (int i=0;i<5; i++){
		cout<<i;
	   cout<<"\t Nomnbre Moneda "<<array_moneda_nombre[i];
	   cout<<"\t valor moneda   "<<valor_moneda[i];
       cout<<" "<<endl;
	          
	}
	cout<<""<<endl;
    
   
    
    //PROMEDIO 
    for(int i=0; i<1; i++ ){
    	float res1, res2, res3, res4, res5;
    	total[i] = valor_moneda[0];   
		res1 = total[i]  * DOLARES; 
		cout<<"Conversion a Q."<<res1<<endl;
	    	
		total[i] = valor_moneda[1];   
		res2 = total[i] * EURO;
		cout<<"Conversion a Q."<<res2<<endl;
		
		total[i] = valor_moneda[2]; 
		res3 = total[i] * DOLAR_CANADIENSE;
		cout<<"Conversion a Q."<<res3<<endl;
		
		total[i] = valor_moneda[3];
		res4 = total[i] * LIBRA;
		cout<<"Conversion a Q."<<res4<<endl;
		 
		total[i] = valor_moneda[4];
		res5 = total[i]  * FRANCO_SUIZO;
		cout<<"Conversion a Q."<<res5<<endl;   
        cout<<" "<<endl;	
	}
}

void procedimiento_div(){
	operativa_monedas();
} 


int main(){
	procedimiento_div();
}
