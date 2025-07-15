/******************************************************************************

      3. Crear un programa que solicite al usuario un número entero positivo n. Utilizar dos
ciclos anidados: un ciclo for para recorrer los números desde 1 hasta n y otro dentro
del primero para recorrer los multiplicadores desde 1 hasta n. Dentro del ciclo anidado,
mostrar la multiplicación del número actual del primer ciclo por el multiplicador actual
del segundo ciclo. Formatear la salida para que se muestre una tabla con alineación
correcta.

*******************************************************************************/
#include <iostream>
using namespace std;
int main() 
{
    int n, i, o;

    cout<<"Ingresa un numero entero positivo: "<<endl;
        cin>>n;

    cout<<"Esta es la tabla de multiplicar del 1 al " <<n<<":"<<endl;

    for (i=1; i<=n; i++) 
    {
        for (o=1; o<=n; o++) 
        {
            cout<<i*o<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}