#include <iostream>
#define MAX 100
using namespace std;

int main(){
    /** Escriba un programa que pida al usuario los datos
        de dos matrices de NxN y luego muestre su suma.
    **/
    int A[MAX];
    int B[MAX];
    int C[MAX];
    int N;

    cout<<"Ingrese el valor de N:";
    cin>>N;

    cout<<"MATRIZ A"<<endl;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    
	cout<<"MATRIZ B"<<endl;
    for(int i=0;i<N;i++){
         cin>>B[i];
    }

    cout<<"MATRIZ SUMA"<<endl;
    for(int i=0;i<N;i++){
        C[i] = A[i] + B[i];
        cout<<"tu resultado ees"<<C[i]<<endl;
	}

    return 0;
}
