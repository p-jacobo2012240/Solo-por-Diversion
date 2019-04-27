#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string ip_completa;
	
	//partes de la trama 
	string res1, res2, res3, res4;
	
	cout<<"Ingrese toda la ip"<<endl;
	cin>>ip_completa;
	
	res1 = ip_completa.substr(0, 3);
	res2 = ip_completa.substr(4, 5);
	
	if(res1 <= "255" ){
		
		cout<<"rango invalido"<<endl;
	}
	
	
		
	cout<<"resultado 1 es: "<<res1;
	cout<<"resultado 2 es: "<<res2;	
	
	
}
