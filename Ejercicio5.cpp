#include <iostream>

using namespace std;

float operar_valores(){

	//Arreglo bidimensional
   	string datos_empleados[2][2];  //libros
    
    //Valores entrantes
	string n_empleado;  //titulo
	int salario; //autor
	
	cout << "Ejercicio de Arrays:    \n";
    
    for(int i = 0; i < 2; i++)
    {
        cout << "\n******* Datos " << i + 1 << "********:\n";
        cout << "Empleados Nombre: ";
        getline(cin, n_empleado);
        cout << "Salario: ";
        cin>>salario;
        cin.ignore();
        datos_empleados[i][0] = n_empleado;
        datos_empleados[i][1] = salario;
        
       
    }
     float x = datos_empleados[0][0];
	  	
     cout<<"los datos son: "<<x<<endl;
     cout<<"los datos son: "<<datos_empleados[0][1]<<endl;
     cout<<"El multiploicacion es"<<


    system("pause");

    return 0;
}

int main(){
	
	operar_valores();
}
