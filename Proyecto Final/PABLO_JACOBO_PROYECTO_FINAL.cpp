#include <iostream>
#define LIMITE_WHILE  100
#define LIMITE 2
#define MAGIC_NUMBER 3

using namespace std;

//Procedimientos
void programa_1();
void programa_2();
void programa_3();
void programa_4();
void programa_5();
void programa_6();


int main(){
	
	int op;
	do{
		cout<<"Carnet --> 9490-18-1319"<<endl;
		cout<<"Nombre --> Pablo Daniel Jacobo Sanchez"<<endl;
		cout<<"Seccion --> D"<<endl;
		cout<<""<<endl;	
		cout<<"          Programa con Todo     "<<endl;
		cout<<"   1. Programa Activos-Pasivos  "<<endl;		
		cout<<"   2. Programa Futbol           "<<endl;	
		cout<<"   3. Programa Factura          "<<endl;	
		cout<<"   4. Programa Divisa           "<<endl;	
		cout<<"   5. Programa Estadistica      "<<endl;	
		cout<<"   6. Programa Votacion         "<<endl;	
				
		cin>>op;
		switch(op){
			case 1:
				programa_1();
			break;
			
			case 2:
				 programa_2();
			break;
			
			case 3:
				programa_3();	
			break;
			
			case 4:
				programa_4();
			break;
			
			case 5:
				programa_5();
			break;
			
			case 6:
				programa_6();
			break;	
			
				default:
					cout<<" "<<endl;
					cout<<"Ingrese un dato valido..."<<endl;	
					cout<<"  "<<endl;
		}
	
	}while(op != LIMITE_WHILE ) ;
	
	//return 0;
}
/*Fin de MAIN*/
float ingreso_activos(){
	
	//Definiendo variables
	int  cuenta[10000];
	string nombre_cuenta;
	float  m_cuenta;
	
	//Definiendo Array C.Activos
	int array_total[15];
    string array_activos[15];
	
	for(int i = 0; i<1; i++ ){
		cout<<"Ingrese su cuenta"<<endl;
		cin>>cuenta[i];
		cin.ignore();
		
		cout<<"Ingrese el nombre de la cuenta"<<endl;
		getline(cin, nombre_cuenta);
		    
	    cout<<"Ingrese monto cuenta"<<endl;
		cin>>m_cuenta;
        cin.ignore();
        cout<<""<<endl;
        
        array_activos[i] = nombre_cuenta;
	}
	
	//Mostrando los valores
	for(int i = 0; i<1; i ++){
	   
	   cout<<i;
	   cout<<"\t"<<array_activos[i];
	   cout<<"\t"<<m_cuenta;
	   cout<<"\t"<<cuenta[i];
       cout<<" "<<endl;
	          
	}
	
}

float ingreso_pasivos(){//Definiendo variables
    int  cuenta[10000];
	string nombre_cuenta;
	float  m_cuenta;
	
	//Definiendo Array C.Pasivos
	int array_total[15];
	string array_activos[15];
	
	for(int i = 0; i<1; i++ ){
		cout<<"Ingrese su cuenta (solo enteros) "<<endl;
		cin>>cuenta[i];
		cin.ignore();
		
		cout<<"Ingrese el nombre de la cuenta"<<endl;
		getline(cin, nombre_cuenta);
		    
	    cout<<"Ingrese monto cuenta"<<endl;
		cin>>m_cuenta;
        cin.ignore();
        cout<<""<<endl;
        
        array_activos[i] = nombre_cuenta;
	}
	
	//Mostrando los valores
	for(int j = 0; j<1; j ++){
	   
	   cout<<j;
	   cout<<"\t"<<array_activos[j];
	   cout<<"\t"<<m_cuenta;
	   cout<<"\t"<<cuenta[j];
       cout<<" "<<endl;
	          
	}
	

}

float balance_general(){

	int array_total[15];
		//Balance
    for(int i=0;i<1;i++){
        //array_total[i] = cuenta[0] + array_activos[0];
        cout<<"Balance: "<<array_total[i]<<endl;
    }
  
    
	
}

float log_1(){
	
	int op;
	do{
		
	cout<<"======================="<<endl;
	cout<<"| Pasivos <> Activos  |"<<endl;
	cout<<"======================="<<endl;
	cout<<"| 1.Ingreso Activos   |"<<endl;
	cout<<"| 2.Ingreso Pasivos   |"<<endl;
	cout<<"| 3.Balance General   |"<<endl;
	cout<<"| 4. Menu General     |"<<endl;
	cout<<"======================="<<endl;
	cout<<":<"<<endl;
	cin>>op;
	
	switch(op){
		case 1:
			ingreso_activos();
		break;
		case 2: 
			ingreso_pasivos();
		break;
		case 3:
			balance_general();
		break;
		
		case 4:
			main();
		break;	
		
		default:
			cout<<"OPCION INVALIDA"<<endl;	
	}
	
	}while( op != LIMITE_WHILE );
		
}

float log_2(){
	string jugadores[100];
	string nombre_equipo_a[100];
	string nombre_equipo_a_cam[100];
	
	string nombre_equipo_b[100];
	string nombre_equipo_b_cam[100];
	
	int op = 0;  
	int i =0;
	int w = 0;
	int q = 0;
	int p = 0;
	
	string nombre_a;
	string n_camiseta_a;
	
	string nombre_b;
	string n_camiseta_b;	
	
	do{
		cout<<"Asigne sus jugadores a sus equipos preferidos 12 es recomendado"<<endl;
		cout<<"1. Ingreso de jugadores a equipo Coders"<<endl;
		cout<<"2. Ingreso de jugadores a equipo Graphqlitos"<<endl;
		cout<<"3. Mostrar Jugadores de Coders"<<endl;
		cout<<"4. Mostrar Jugadores de  Graphqlitos"<<endl;
		cout<<"5. Regresar Menu Principal "<<endl;
		cin>> op;	
		
		switch(op){
			case 1:
				cout<<"Ingrese el nombre del jugador asignado a Coders"<<endl;
				cin>>nombre_a;
				nombre_equipo_a[i] = nombre_a;
				cout<<"Ingrese el numero de camiseta"<<endl;
				cin>>n_camiseta_a;
				nombre_equipo_a_cam[w] = n_camiseta_a;		
				i++;
				w++;
			break;
			
			case 2:
				cout<<"Ingrese el nombre del jugador asignado a Graphqlitos"<<endl;
				cin>>nombre_a;
				nombre_equipo_b[q] = nombre_b;
				cout<<"Ingrese el numero de camiseta"<<endl;
				cin>>n_camiseta_a;
				nombre_equipo_b_cam[p] = n_camiseta_b;		
				q++;
				p++;
			break;
			
			case 3:
				for(int j = 0; j<i; j++){
					cout<<"N0 jugador:: "<<nombre_equipo_a[j]<<endl;
				}
				cout<<""<<endl;
					for(int l = 0; l<w; l++){
					cout<<"N0 Cmiseta:: "<<nombre_equipo_a_cam[l]<<endl;
				}
				cout<<""<<endl;
			break;
			
			case 4:
				
				for(int h = 0; h<q; h++){
					cout<<"N0 jugador:: "<<nombre_equipo_b[h]<<endl;
				}
				cout<<""<<endl;
					for(int v = 0; v<p; v++){
					cout<<"N0 Cmiseta:: "<<nombre_equipo_b_cam[v]<<endl;
				}
				cout<<""<<endl;
			break;
			
			case 5:
				main();
			break;	
			
			default:
				cout<<"Ingrese una opcion valida"<<endl;	
		}
		
			
	}while(op != 4);
}

float log_3(){
		const float IVA = 0.21; 
	
	string libros[5][9];
	int op = 0;
	string array_nombre[5];
	string array_fecha[5];
	string array_nit[5];
	string fecha, nombre, nit , numero_doc, serie;
	int valor_unitario[10000];
	int cantidad[10000];  
	
	//Limite de articulos (5)
	int limitArt[5];
	
	do{
	
		cout<<"   Ingrese su factura      "<<endl;
		cout<<"   1. Para ingresar Datos  "<<endl;
		cout<<"   2. Menu principal       "<<endl;
		cin>>op;
		
		if (op ==2){
			main();
		}
		
		for (int i = 0; i<5 ; i++ ){
			cout<<"Ingrese sus 5 articulos"<<endl;
			cout<<"Fecha Emitida"<<endl;
			getline(cin, fecha);
			cin.ignore();
			cout<<"Nombre del cliente"<<endl;
			getline(cin,nombre);
			cin.ignore();
			cout<<"Nit"<<endl;
			getline(cin,nit);
			cin.ignore();
			cout<<"Numero documento"<<endl;
			getline(cin,numero_doc);
			cin.ignore();
			cout<<"Serie"<<endl;
			getline(cin, serie);
			cin.ignore();
			
			cout<<"Valor unitario: \t";
			cin>>valor_unitario[i];
			cin.ignore();
			cout<<"Cantidad"<<endl;
			cin>>cantidad[i];
			
			
			array_fecha[i] = fecha;
			array_nombre[i] = nombre;
			array_nit[i] = nit;
			libros[i][3]= numero_doc;
			libros[i][4] = serie;
			libros[i][5] = serie;
												
		}
		cout<<""<<endl;
		
		
		//Propiedades
		for(int k = 0; k<5; k ++ ){
			cout<<k;
	   		cout<<"\t"<<array_nombre[k]; 
	   		cout<<"\t"<<array_fecha[k];
	   		cout<<"\t"<<array_nit[k];
			cout<<" "<<endl;
		}
		
		//SUMA DE TODA LA PLANILLA
   		for(int i=0;i<1;i++){
        	limitArt[i] = valor_unitario[0] + valor_unitario[1] + valor_unitario[2] + valor_unitario[3] + valor_unitario[4];
        	cout<<"SUMA DE FACTURA SIN IVA: "<<limitArt[i]<<endl;
   		}
   		
   		   		
   		//SUMA CON IVA
   		for(int i=0;i<1;i++){
        	float resultado;
			limitArt[i] = valor_unitario[0] + valor_unitario[1] + valor_unitario[2] + valor_unitario[3] + valor_unitario[4];
        	resultado =  limitArt[i] + IVA;
        	cout<<"TOTAL CON IVA : "<<resultado<<endl;
   		}
		cout<<""<<endl;     
   		
   		main();
   		//system("pause");

		
	}while(op != LIMITE_WHILE );
	main();
}

float log_4(){
	
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

float log_5(){
	
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

float log_6(){

	int opcion   = 0;
	string n_a, n_b, n_c;
	int totx, totb, totc;
	int res_a, res_b, res_c;
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
		cout<<" 5.  Menu Principal "<<endl;
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
					
				
				cout<<"---------------------------------------------------------------------"<<            endl;
  				cout<<"|  Departamentro |Candidato A   | Candidato B  |  Candidato C       |"<<            endl;
    			cout<<"--------------------------------------------------------------------"<<             endl;
				cout<<"    "<<" No: 1 "<<"    "<<"       " << votos_a[0] <<"             "<<  votos_b[0] <<"               "<< votos_c[0] <<endl;	
				cout<<"    "<<" No: 2 "<<"    "<<"       " << votos_a[1] <<"             "<<  votos_b[1] <<"               "<< votos_c[1] <<endl;		
				cout<<"    "<<" No: 3 "<<"    "<<"       " << votos_a[2] <<"             "<<  votos_b[2] <<"               "<< votos_c[2] <<endl;	
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"    "<<" Totales "<<"    "<<"     " << totx <<"             "<< totb <<"               "<< totc <<endl;		
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"    "<<" Porcentajes "<<"    "<<"     " << totx / MAGIC_NUMBER <<"             "<< totb / MAGIC_NUMBER <<"               "<< totc / MAGIC_NUMBER <<endl;	
				cout<<"---------------------------------------------------------------------"<<endl;
				//Comparando ganador
				if( (totx>totb) && (totx>totc)){
					//el primero es ganador
					res_a = totx;
					cout<<"Gano por la cantidad de: "<< res_a<<endl;		
				}else if( (totb>totx) && (totb>totc)){
					//el segundo es ganador
					res_b = totb;
					cout<<"Gano por la cantidad de: "<< res_b<<endl;
				}else{
					//el tercero es ganador
					res_c = totc;
					cout<<"Gano por la cantidad de: "<< res_c<<endl;
				}
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"    "<<" Candidato ganador: "<<endl;		
				cout<<"---------------------------------------------------------------------"<<endl;
				
			
			break;
			
			case 5:
				main();
			break;				
			
				default:
					cout<<"Ingrese una opcion valida !!"<<endl;
		}
		
	}while(opcion != LIMITE_WHILE );	
	
}

//Inicializando las funciones en procedimientos
void programa_1(){
	log_1();
}

void programa_2(){
	log_2();
}

void programa_3(){
	log_3();
}

void programa_4(){
	log_4();
}

void programa_5(){
	log_5();
} 

void programa_6(){
	log_6();
} 

/*
	PABLO DANIEL JACOBO SANCHEZ
	9490-18-1319
	SEC: D ING 
*/
