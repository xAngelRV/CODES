#include <iostream>
using namespace std;

int main(){
	
	int num;
	do{
		cout<<"Ingrese N= "; cin>>num;
	} while(num<1000);
	
	int aux=num;
	int max=0, min=9, cif;
	while(num!=0){
		cif=num%10;
		if(cif>=max) max=cif;
		if(cif<=min) min=cif;
		num/=10;
	}
	
	int aux2=0;
	while(aux!=0){
		cif=aux%10;
		if(cif!=max&&cif!=min) aux2=aux2*10+cif;
		aux/=10;
	}
	
	int inv=0;
	while(aux2!=0){
		cif=aux2%10;
		inv=inv*10+cif;
		aux2/=10;
	}
	
	cout<<max<<endl;
	cout<<min<<endl;
	cout<<inv<<endl;
	
	return 0;
}
