#include <iostream>
#define MAX 100
using namespace std;

int main(){
    /** Escriba un programa que pida al usuario los datos
        de dos matrices de NxN y luego muestre su suma.
    **/
    int A[MAX][MAX];
    int B[MAX][MAX];
    int C[MAX][MAX];
    int N;

    cout<<"Ingrese el valor de N:";
    cin>>N;

    cout<<"MATRIZ A"<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<"["<<i<<"]["<<j<<"]:";
            cin>>A[i][j];
        }
    }
    cout<<"MATRIZ B"<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<"["<<i<<"]["<<j<<"]:";
            cin>>B[i][j];
        }
    }

    cout<<"MATRIZ SUMA"<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            C[i][j] = A[i][j] + B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

