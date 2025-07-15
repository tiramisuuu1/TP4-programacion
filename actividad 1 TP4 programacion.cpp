/******************************************************************************

                    1. Crear un programa que solicite al usuario un número entero no negativo n. Utilizar
un ciclo for para calcular el factorial de n, que se define como el producto de todos
los números enteros positivos desde 1 hasta n. Mostrar el valor final del factorial de n.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n, fac = 1;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    while (n < 0) {
        cout << "Ey! dije positivo..." << endl;
        cout << "Mirá bien lo que pones: ";
        cin >> n;
    }

    for (int i = 1; i <= n; i++) {
        fac *= i;
    }

    cout << "El factorial de " << n << " es " << fac << endl;

    return 0;
}