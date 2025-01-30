#include <iostream>
using namespace std;

int main(){
	
	int n;
	do{
		cout<<"Ingrese la cantidad de numeros (n)"; cin>>n;
	}while(n>50);
	
	int num[n];
	for(int i=0; i<n; i++){
		do{
			cout<<"Ingrese #"<<i+1<<": "; cin>>num[i];
		}while(num[i]<10 || num[i]>999);
	}
	
	//Eliminar primos
	bool esPrimo=false;
	for(int i=0; i<n; i++){
		//es primo?
		for(int k=2; k*k<=num[i]; k++){
			if(num[i]%k==0){
				esPrimo=true;
				break;
			}
		}
		if(esPrimo){
			//Eliminacion
			for(int j=0; j<n-1; j++){
				num[j]=num[j+1];
			}
			n--;
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<num[i];
	}
	
	return 0;
}
