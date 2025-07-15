/******************************************************************************

      4. Escribir un programa que simule un sistema de ventas con varios vendedores. El
programa debe solicitar al usuario la cantidad de vendedores, luego para cada
vendedor debe solicitar el nombre y la cantidad de ventas realizadas, y finalmente
debe mostrar un resumen con el nombre de cada vendedor y la suma total de sus
ventas.
Ejemplo:
Entrada: 3
Vendedor 1: Juan, 10 ventas
Vendedor 2: Maria, 15 ventas
Vendedor 3: Pedro, 8 ventas
Salida:
Juan: 10 ventas
Maria: 15 ventas
Pedro: 8 ventas

*******************************************************************************/
#include <iostream>
using namespace std;
int main() 
{
    int i, vendedores, venta;
    string nombre;
    cout<<"Ingrese la cantidad de vendedores: ";
        cin>>vendedores;

    cout<<"Resumen de ventas:"<<endl;

    for (i=1; i<=vendedores; i++) 
    {
        cout<<"Vendedor "<<i<<" - Nombre: ";
            cin>>nombre;
        
        cout<<"Cantidad de ventas realizadas por "<<nombre<<": ";
            cin>>venta;
        cout<<nombre<<": "<<venta<< " ventas."<<endl;
    }

    return 0;
}