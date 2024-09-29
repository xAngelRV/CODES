#include <iostream>
using namespace std;

int main(){
    int N, x, dato[100];

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

    bool first = true;  // Variable para controlar la primera impresión
    for (int i = 1; i <= N; i++) {  // Cambié el límite a `i <= N` para incluir el último dato
        if (dato[i] != x) {
            if (!first) {
                cout << ", ";  // Imprimir coma antes de los elementos posteriores
            }
            cout << dato[i];
            first = false;  // A partir del primer número impreso, se imprimen comas
        }
    }

    cout << endl;  // Añade un salto de línea al final
    return 0;
}

