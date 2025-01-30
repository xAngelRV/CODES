#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Ingrese la cantidad de amigos: ";
        cin >> n;
    } while (n <= 1 || n >= 100);

    bool x[100] = {false};  // Inicializa el arreglo con 'false'
    
    int aux;
    for (int i = 0; i < n; i++) {
        do {
            cout << "Ingrese la posicion del amigo #" << i + 1 << ": ";
            cin >> aux;
        } while (aux < 0 || aux >= 100);  // Verifica que el valor est� dentro del rango
        x[aux] = true;  // Marca la posici�n como 'true'
    }

    int opt = -1, suma, sumaMin = 10000; // Inicializa sumaMin con un valor muy grande
    for (int i = 0; i < 100; i++) {
        if (x[i] == true) {  // Si el amigo est� marcado
            suma = 0;
            for (int j = 0; j < 100; j++) {
                if (x[j] == true) {  // Si el amigo j tambi�n est� marcado
                    // C�lculo manual de la distancia
                    int distancia;
                    if (i > j) {
                        distancia = i - j;  // Si i es mayor que j, resta
                    } else {
                        distancia = j - i;  // Si j es mayor que i, resta
                    }
                    suma += distancia;  // Suma la distancia
                }
            }
            if (suma < sumaMin) {  // Si encontramos una distancia menor
                sumaMin = suma;
                opt = i;  // Guardamos la posici�n de la mejor opci�n
            }
        }
    }

    cout << "La mejor opci�n es el amigo en la posici�n: " << opt << endl;

    return 0;
}


