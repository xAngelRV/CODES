#include <iostream>
using namespace std;

int main(){
	
	int m, n;
	do{
		cout<<"Ingrese la cantidad de elementos de A (m): "; cin>>m;
	}while(m<=0);
	
	do{
		cout<<"Ingrese la cantidad de elementos de B (n): "; cin>>n;
	}while(n<=0);
	cout<<endl;
	
	int A[m], B[n];
	cout<<"-CONJUNTO A-"<<endl;
	for(int i=0; i<m; i++){
		cout<<"Ingrese el elemento de A #"<<i+1<<": "; cin>>A[i];
	}
	cout<<endl;
	
	cout<<"-CONJUNTO B-"<<endl;
	for(int i=0; i<n; i++){
		cout<<"Ingrese el elemento de B #"<<i+1<<": "; cin>>B[i];
	}
	cout<<endl;
	
	bool solo; 
	int contA=0;
	for(int i=0; i<m; i++){
		solo=true;
		for(int j=0; j<n; j++){
			if(A[i]==B[j]){
				solo=false;
				break;
			}
		}
		if(solo) contA++;
	}
	
	int contB=0;
	for(int i=0; i<n; i++){
		solo=true;
		for(int j=0; j<m; j++){
			if(B[i]==A[j]){
				solo=false;
				break;
			}
		}
		if(solo) contB++;
	}
	
	cout<<"Conjunto A: {";
	for(int i=0; i<m; i++){
		if(i==m-1) cout<<A[i];
		else cout<<A[i]<<"; ";
	}
	cout<<"}"<<endl;
	
	cout<<"Conjunto B: {";
	for(int i=0; i<n; i++){
		if(i==n-1) cout<<B[i];
		else cout<<B[i]<<"; ";
	}
	cout<<"}"<<endl;
	
	int dist= contA+contB;
	cout<<contA<<" elementos de A no estan en B y "<<contB<<" elementos de B no estan en A, por tanto la distancia entre A y B es "<<dist<<endl;
	
	return 0;
}
