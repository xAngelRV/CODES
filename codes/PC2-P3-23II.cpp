#include <iostream>
using namespace std;

int main(){
	//Solicitar los numeros
	int n1, n2;
	do{
		cout<<"Ingrese el primer numero (n1): "; cin>>n1;
	}while(n1<=99999); 
	
	do{
		cout<<"Ingrese el segundo numero (n2): "; cin>>n2;
	}while(n2<=99999); 
	
	//Contar las cifras de ambos numeros y Declarar los arreglos PRIMERO[a] Y SEGUNDO[b]
	int contA=0, aux=n1;
	while(aux!=0){
		aux/=10;
		contA++;
	}
	int PRIMERO[contA];

	int contB=0; aux=n2;
	while(aux!=0){
		aux/=10;
		contB++;
	}
	int SEGUNDO[contA+contB];
	
	//Asignar las cifras a los arreglos
	//Primero
	for(int i=contA-1; i>=0; i--){
		PRIMERO[i]=n1%10;
		n1/=10;
	}

	//Segundo
	for(int i=contB-1; i>=0; i--){
		SEGUNDO[i]=n2%10;
		n2/=10;
	}
	
	//la wbda
	int i=0;
	while(contA>0){
		if(PRIMERO[i]%2!=0){
			//Insercion
			for(int j=contB; j>0; j--){
				SEGUNDO[j]=SEGUNDO[j-1];
			}
			SEGUNDO[0]=PRIMERO[i];
			contB++;
		} else{
			//Insercion
			for(int j=contB; j>contB; j--){
				SEGUNDO[j]=SEGUNDO[j-1];
			}
			SEGUNDO[contB]=PRIMERO[i];
			contB++;		
		}
		//Eliminacion
		for(int j=0; j<contA-1; j++){
			PRIMERO[j]=PRIMERO[j+1];
		}
		contA--;
	}
	
	cout<<"SEGUNDO luego de la transformacion ";
	for(int i=0; i<contB; i++){
		cout<<SEGUNDO[i];
	}
	cout<<endl;
	
	return 0;
}
