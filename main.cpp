/*
Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla la suma de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El resultado de la sumatoria es: 6
*/

#include <iostream>
using namespace std;

int main(){

    int sumatoria = 0;
    while (true) {

        int numero;
        cout << "Ingrese el numero: ";
        cin >> numero;
        sumatoria += numero;

        if(numero == 0){
            break;
        }
    }
    cout << "El resultado de la sumatoria es " << sumatoria << endl;

    return 0;
}
