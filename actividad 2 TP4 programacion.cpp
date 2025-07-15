/******************************************************************************

      2. Crear un programa que solicite al usuario un número entero positivo n. Utilizar dos
ciclos anidados: un ciclo for para recorrer las filas y otro ciclo for dentro del primero
para recorrer las columnas. Dentro del ciclo anidado, imprimir un asterisco (*) si la suma
de la fila y la columna actual es menor o igual que n. Formatear la salida para que se
muestre un patrón de asteriscos con forma de triángulo o cuadrado, según el valor de
n.

*******************************************************************************/
#include <iostream>
using namespace std;
int main() 
{
    int n, columna, fila;

    cout<<"Ingresa un numero entero positivo: ";
        cin>>n;

    cout<<"El patron a partir del "<<n<<" es:"<<endl;

    for (fila=1; fila<=n; fila++)
    {
        for (columna=1; columna<=n; columna++) 
        {
            if (fila+columna<=n+1) 
            {
                cout<<"*";
            } else 
            {
                cout<< "  ";
            }
        }
                cout<<endl;
    }

    return 0;
}
