/*
Se desea almacenar en un arreglo N datos enteros. Luego dado un dato x eliminar todos
aquellos que son iguales a x.
Ejemplo:
N=6
Datos: 4, 7, 3, 4, 4, 7
x: 4
Después de la eliminación:
Salida: 7, 3, 7
*/

#include <iostream>
using namespace std;

int main(){
  int N, x , dato[100];

  do {
    cout<<"Ingrese la cantidad de datos (N): "<<endl;
    cin>>N;
  } while (!(N>=0));

  for (int i = 1; i <= N; i++) {
    cout<<"Ingrese el dato #"<<i<<": "<<endl;
    cin>>dato[i];
  }

  cout<<"Ingrese el dato a eliminar (x): "<<endl;
  cin>>x;

  cout<<"Salida: ";

  bool first=true;
  for (int i = 1; i <= N; i++) {
    if (dato[i] != x) {
        if (!first) {
            cout<< ", ";
        }
        cout<<dato[i];
        first=false;
    }
  }
    cout << endl;
  return 0;
}