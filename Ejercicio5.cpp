#include <iostream>

using namespace std;

float operar_valores(){
	
	//Definiendo variables
	string nombre_empleado;
	int salario[10000];
	
	//Definiendo array de empleados
	int arreglo3[5];
	string array_empleados[5];
	
	for (int i=0;i<5; i++){
	
	    	 	
       cout<<"Informacion Empleado N0: "<<i<<"\n";
	  	
		cout<<"Ingrese un nombre: \t";
	    getline(cin,nombre_empleado);
       
		       
        cout<<"Ingrese su salario: \t";
	    cin>>salario[i];
        cin.ignore();
        cout<<""<<endl;

	 

	   array_empleados[i]= nombre_empleado;
	   
    }
    
    //Mostrando los valores
	cout<<"N0:   Nombre:      Sueldo: \n";
    for (int i=0;i<5; i++){
	
	   
	   cout<<i;
	   cout<<"\t"<<array_empleados[i];
	   cout<<"\t"<<salario[i];
       cout<<" "<<endl;
	          
	}
	cout<<""<<endl;
    
    //SUMA DE TODA LA PLANILLA
    for(int i=0;i<1;i++){
        arreglo3[i] = salario[0] + salario[1] + salario[2] + salario[3] + salario[4];
        cout<<"SUMA PLANILLA: "<<arreglo3[i]<<endl;
    }
    
    //PROMEDIO DE LA PLANILLA
    for(int i=0; i<1; i++ ){
    	int resultado;
		arreglo3[i] = salario[0] + salario[1] + salario[2] + salario[3] + salario[4];
		resultado = arreglo3[i] / 5; //Cambiar por contantes
        cout<<"PROMEDIO:      "<<resultado<<endl;	
	}
	
	//IGSS
	for(int i=0; i<1; i++){
    	int igss;
    	arreglo3[i] = salario[0] + salario[1] + salario[2] + salario[3] + salario[4];
		igss = arreglo3[i] * 0.483; //Cambiar por contantes
		cout<<"IGGS 4.83%:    "<<igss<<endl;
	}

}

int main(){
	
	operar_valores();
}
