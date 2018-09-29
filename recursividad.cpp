#include <iostream> 

using namespace std;

//Recursividad
int factorial(int n){
	if(n == 0){
		n = 1;
	}else{
		n = n * factorial( n -1);
	}
	return n;
}

//Pirmide de numeros
int piramide( int pir ){
	
	for( int i = 1; i<=pir; i++){
		for(int j = 1; j<=i; j++){
			cout << j << " ";
		}
		 	cout << endl;
	}	

}

//Producto de 2 numeros
int producto(int a, int b){
	
	if(a == 0 or b == 0 ){
		return 0;
	}else{
		return a + producto(a , b -1);
	}
	
}


int main(){
	
	int op = 0;
	cout<<"Ingrese el numero de a aumentaar"<<endl;
	cin>>op;
	op = piramide(op);
	//producto(10, 2 );
}
