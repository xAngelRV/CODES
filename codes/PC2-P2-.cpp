#include <iostream>
using namespace std;

int main(){
	
	int n;
	do{
		cout<<"Ingrese la cantidad de amigos: "; cin>>n;
	}while(n<=1 || n>=100);
	
	
	bool x[100]={false};
	
	int aux;
	for(int i=0; i<n; i++){
		do{
			cout<<"Ingrese la posicion del amigo #"<<i+1<<":  "; cin>>aux;
		}while(aux<0 || n>=100);
		x[aux]=true;
	}
	
	int opt, suma, sumaMin=100;
	for(int i=0; i<100; i++){
		if(x[i]==true){
			suma=0;
			for(int j=0; j<100; j++){
				if(x[j]==true){
					if(j>i) suma=suma+(j-i);
					else suma=suma+(i-j);
				}
			}
			if(suma<sumaMin){
				sumaMin=suma;
				opt=i;
			}
		}
	}
	
	cout<<"Punto optimo: "<<opt<<endl;
	cout<<"Distancia total minima: "<<sumaMin<<endl;
	
	return 0;
}
