#include <iostream> //Para ingresar out/in
#include<stdlib.h>	//Para usar colores distintos
#include <windows.h>
#include <ctime>

using namespace std;


/*
Integrantes:
	Kenny Chavez
	Noemi Ventura
	Diego Suriano
	Pablo Jacobo
*/

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
 

void marcoAPP()
{
	for (int i = 1; i < 58;i++)
	{
		gotoxy(i, 2); printf("%c", 205);
		gotoxy(i, 22); printf("%c", 205);
	}
	for (int i = 2; i < 22; i++)
	{
		gotoxy(1, i); printf("%c", 186);
		gotoxy(57, i); printf("%c", 186);
	}
	gotoxy(1, 2); printf("%c", 201);
	gotoxy(1, 22); printf("%c", 200);
	gotoxy(57, 2); printf("%c", 187);
	gotoxy(57, 22); printf("%c", 188);
}



void divisa(){
	
	system ("color 8F" );
		
	time_t now = time(0);
    string dt = ctime(&now);
    string calcomania, placa, nit, direccion, nombre, tipo;
    int poliza, modelo, motor;
    float valor_vehiculo,valor_impuesto, total, porcentaje_impuesto;
    float iva = 0.12;
	//gotoxy(1,1); cout<<"Bienvenido";
	//gotoxy(2,1); cout<<"|";
	//gotoxy(4,10); cout<<"Bienvenido Al menu en el cu";
	//gotoxy(4,11); cout<<"Bienvenido Al menu en el cu";	
	
	
	cout << "\nFecha: " << dt;
    cout << "Calcomania: ";
    cin >> calcomania;
    cout << "Placa: ";
    cin >> placa;
    cout << "NIT: ";
    cin >> nit;
    cout << "Poliza: ";
    cin >> poliza;
    cout << "Direccion: ";
    cin >> direccion;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Modelo: ";
    cin >> modelo;
    cout << "Tipo: ";
    cin >> tipo;
    cout << "Motor: ";
    cin >> motor;
    cout << "Valor del vehiculo: ";
    cin >> valor_vehiculo;

   
    if(modelo == 2018){
        porcentaje_impuesto = 0.08;
        valor_impuesto = porcentaje_impuesto * valor_vehiculo;
    }else if(modelo >= 2010 && modelo <= 2017){
        porcentaje_impuesto = 0.05;
        valor_impuesto = porcentaje_impuesto * valor_vehiculo;
    }else if(modelo >= 2000 && modelo <= 2009){
        porcentaje_impuesto = 0.03;
        valor_impuesto = porcentaje_impuesto * valor_vehiculo;
    }else if(modelo < 2000){
        porcentaje_impuesto = 0.02;
        valor_impuesto = porcentaje_impuesto * valor_vehiculo;
    }

    total = valor_vehiculo + valor_impuesto;
	cout << "------------------------------------------------"<<endl;
	cout <<"\nfecha:     "<<dt<<"                                     "<<"Calcomania:  "<<calcomania; 
   	cout <<"\nplaca:     "<<placa<<"            "<<"NIT:  "<<nit<<"   "<<"Poliza:      "<<poliza;
   	cout <<"\ndireccion: "<<direccion;
   	cout <<"\nmodelo:    "<<modelo<<endl;
   	cout <<"\nTipo:      "<<tipo<<endl;
	cout <<"\motor:      "<<motor<<endl;	
	cout <<"\Valor_Vehiculo:  "<<valor_vehiculo<<endl;
	cout << "------------------------------------------------"<<endl;
	cout << "\nValor del impuesto:        " << valor_impuesto;
    cout << "\nTotal:                     " << total;
    cout << "\nIVA:                       " << iva * 100 << "%";
    cout << "\nFactura:                   " << total * iva << endl;
	cout << "------------------------------------------------"<<endl;
}


void factura(){
	char nombre[30];
	char nit[10];
	char fecha[10];
	char concepto[10];
	char serie[1];
	int no;
	int cantidad;
	float valor;
	float iva;
	float total;
	float valort;
	float subt;
		cout<<"INGRESE LA FECHA: ";
			cin>>fecha;
		cout<<"INGRESE EL NUMERO DE SERIE SERIE: ";
			cin>>serie;
		cout<<"INGRESE EL NUMERO DE DOCUMENTO: ";
			cin>>no;
		cout<<"INGRESE EL NOMBRE Y APELLIDO DE EL COMPRADO: ";
			cin>>nombre;
		cout<<"INGRESE EL NIT DE LA PERSONA: ";
			cin>>nit;
		cout<<"INGRESE LA CANTIDAD DEL PRODUCOTO: ";
			cin>>cantidad;
		cout<<"INGRESE EL CONCEPTO DE LA COMPRA: ";
			cin>>concepto;
		cout<<"INGRESE EL VALOR UNITARIO: ";
			cin>>valor;
		cout<<"------------------------------------------------------------------------------";
		cout<<""<<endl;
			subt=cantidad*valor;
			iva=subt*0.12;
			total=iva+subt;
		cout<<"FECHA: "<<fecha<<"     "<<"NO. SERIE: "<<serie<<"     "<<"NO. DOCUMENTO: "<<no<<endl;
		cout<<"NOMBRE DEL CLIENTE: "<<nombre<<endl;
		cout<<"NIT: "<<nit<<endl;
		cout<<"CANTIDAD"<<"             "<<"CONCEPTO"<<"              "<<"VALOR UNITARIO"<<"              "<<"VALOR TOTAL"<<endl;
		cout<<cantidad<<"                 "<<concepto<<"                  "<<valor<<"                  "<<subt<<endl;
		cout<<""<<endl;
		cout<<"                                             "<<"SUBTOTAL: "<<subt<<endl;
		cout<<"                                             "<<"IVA: "<<iva<<endl;
		cout<<"                                             "<<"TOTAL: "<<total<<endl;
		cout<<"------------------------------------------------------------------------------";
}

void showMenu(){
	
	
	gotoxy(4,4);cout<< "1. Ingreso de factura\n";
    gotoxy(4,5);cout<< "2. Ingreso de calcomania\n";
    gotoxy(4,6);cout<< "3. Salida\n";
	gotoxy(4,23);cout<< "Ingrese una opcion \n";
	//system ("cls");	

}

int main (){
	int des=0;
	int opcion = 0; 	
	system ("color 8F" );
	marcoAPP();
				
	do{
		
		showMenu();
		gotoxy(4,24);cin>> opcion ;
	
		switch( opcion ){ 
			
			case 1:
				system("cls");
				factura();
			break;
			
			case 2:
				system ("cls");
				divisa();
			
			break;
							
			case 3:
				cout<<"Ha salido del programa :( "<<endl;
				exit(0); //Saliendo del programa
			
			break;	
			
			default:
				cout<<endl;
				cout<<"==============================="<<endl;
				cout<<"| Seleccione una opcion Valida |"<<endl;	
				cout<<"==============================="<<endl;
				cout<<endl;
		}
	
		cout<<"SI DESEA VOLVER A SUAR EL PROGRAMA PRECIONE 1 SI NO PRECIONE 2: ";
		cin>>des;
		
	}while( des==1);
	system("cls");
	cout<<endl;cout<<endl; cout<<endl;
	cout<<endl;	cout<<endl;	cout<<endl;	
	cout<<endl;	cout<<endl;	cout<<endl;	
	cout<<endl;	cout<<endl;	cout<<endl;	
	cout<<endl; cout<<endl; cout<<endl;
	cout<<endl; cout<<endl; cout<<endl;
						
}
