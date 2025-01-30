#include <iostream>
using namespace std;

int main(){
	
	int n;
	do{
		cout<<"Ingrese la cantidad de notas(n): "; cin>>n;
		if(n<=0) cout<<"Valor invalido"<<endl;
	} while(n<=0);
	
	int num, cont, pos=0, min=20;
	for(int i=1; i<=n; i++){
		cout<<"Ingrese nota #"<<i<<": "; cin>>num;
		if(num<min) {
			pos=i;
			cont=0;
			min=num;
			cont++;
		} else if(min==num){
			cont++;
			if(i<10) pos=pos*10+i;
			if(i>9) pos=pos*100+i;
		}
	}
	
	cout<<min<<endl;
	cout<<cont<<endl;
	cout<<pos<<endl;
	
	
	
	return 0;
}
