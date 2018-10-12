#include <iostream>
using namespace std;

int main(){
    /** CADENAS DE TEXTO **/
    char cadena1[] = "Gianmarco Tantaruna";
    char cadena2[] = {'G','i','a','n','m','a','r','c','o','\0'};
    char cadena3[30];

    cout<<"Ingrese una cadena:";
    cin.getline(cadena3,30);
    cout<<"La cadena es "<<cadena3<<endl;

    return 0;
}

