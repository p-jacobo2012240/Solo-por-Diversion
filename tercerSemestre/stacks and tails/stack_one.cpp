#include <iostream>

using namespace std;

class Count{
	public:
		int dato;
		Count* nextDato;
		//procedures
		void addStack(Count*&, int);
		void showStack( Count*&, int &);
};


void Count::addStack(Count*&stack, int deferred){
	Count *newStack = new Count();
	newStack->dato = deferred;
	newStack->nextDato = stack;
	stack = newStack;
	
	cout<<"element added to : "<< deferred  <<" existent stack"<<endl;
	
}

void Count::showStack(Count*&stack, int &useDeferred){
	Count *q  = stack;
	useDeferred = q->dato;
	stack = q->nextDato;
	delete q;
}

int main(){
	
	//cout<<" 1. Stacks in C++  "<<endl;
	
	int opt;
	int n;
	Count *stack = NULL;
	Count instenceCount;
	
	cout<<"Size stack :"<<endl; 
	cin>>opt;
	
	for(int i= 0; i<opt; i++){
		
	
		cout<<"Added your number favorite"<<endl;
		cin>>n;
		
		instenceCount.addStack( stack, n );
	}
	
	
	while( stack != NULL ){
		//cout<<"::: debugger  :::"<<endl;
		instenceCount.showStack(stack, n);
		if(stack != NULL){
			cout<<" "<< n <<" ";
		}
	}
	
	
	
}
