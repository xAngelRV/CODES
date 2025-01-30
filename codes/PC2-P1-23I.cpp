#include <iostream>
using namespace std;

int main(){
	//#Estudiantes
	int n;
	do{
		cout<<"Ingrese la cantidad de estudiantes(n): "; cin>>n;
	} while(n<=0);
	
	//Notas
	float nota[n][5], suma;
	float nAprob=0;
	for(int i=0; i<n; i++){
		cout<<"ESTUDIANTE #"<<i+1<<": "<<endl;
		suma=0;
		for(int j=0; j<5; j++){
			do{
				cout<<"Pregunta #"<<j+1<<": "; cin>>nota[i][j];
				if(nota[i][j]<0 || nota[i][j]>4) cout<<"Nota invalida(0-4)"<<endl;
				suma=suma+nota[i][j];
			}while(nota[i][j]<0 || nota[i][j]>4);
		}
		if(suma>=10) nAprob++;
	}
	
	//Mostrar la matriz
	cout<<"Matriz de notas"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<5; j++){
			cout<<nota[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//Porcentajes de aprobados y desaprobados
	cout<<"Porcentaje de aprobados: "<<(nAprob/n)*100<<"%"<<endl;
	cout<<"Porcentaje de desaprobados: "<<((n-nAprob)/n)*100<<"%"<<endl;
	
	//Preguntas faciles
	int sumaMax=0, masFacil[5], nFac=0;
	for(int j=0; j<5; j++){
		suma=0;
		for(int i=0; i<n; i++){
			suma=suma+nota[i][j];
		}
		if(suma>sumaMax){
			sumaMax=suma;
			nFac=0;
			masFacil[nFac]=j+1;
			nFac++;
		} else if(suma==sumaMax){
			masFacil[nFac]=j+1;
			nFac++;
		}
	}
	cout<<"Preguntas mas faciles:
	 ";
	for(int i=0; i<nFac; i++){
		cout<<masFacil[i]<<" ";
	}
	cout<<endl;
	
	//Preguntas dificiles
	int sumaMin=4*n, masDif[5], nDif=0;
	for(int j=0; j<5; j++){
		suma=0;
		for(int i=0; i<n; i++){
			suma=suma+nota[i][j];
		}
		if(suma<sumaMin){
			sumaMin=suma;
			nDif=0;
			masDif[nDif]=j+1;
			nDif++;
		} else if(suma==sumaMin){
			masDif[nDif]=j+1;
			nDif++;
		}
	}
	cout<<"Preguntas mas dificiles: ";
	for(int i=0; i<nDif; i++){
		cout<<masDif[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
