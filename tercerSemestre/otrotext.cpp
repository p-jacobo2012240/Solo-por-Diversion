#include <iostream>
#include <fstream>

using namespace std;

int main () {
  	
  	//solo es una edad 
	int edad;
	
	ofstream hck;
	hck.open("fakedata.txt");
  	
  	
	cout<<"Ingresa tu edad"<<endl;
	cin>>edad;
	
	hck<<edad;

  return 0;
}
