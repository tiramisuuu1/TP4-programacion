/******************************************************************************

    5. Crear un programa que simule un cajero automático con menús y validaciones.
Presentar un menú principal con las opciones:
 Consultar saldo
 Depositar dinero
 Retirar dinero
 Salir
Utilizar un ciclo while para mantener el programa en ejecución hasta que el usuario
elija la opción "Salir".
Para cada opción del menú, implementar las funcionalidades correspondientes:
Consultar saldo: Mostrar el saldo actual de la cuenta.
Depositar dinero: Solicitar al usuario el monto a depositar y actualizar el saldo de la
cuenta.
Retirar dinero: Solicitar al usuario el monto a retirar, verificar si el saldo es suficiente y
actualizar el saldo en caso afirmativo. Si el saldo es insuficiente, mostrar un mensaje de
error.

*******************************************************************************/
#include <iostream>
using namespace std;
int main() 
{
    double saldo = 2000.00;
    int opcion;
    double monto;

    do 
    {
        cout<<">>>>>Cajero automatico<<<<<"<<endl;
        cout<<"1. Consultar saldo"<<endl;
        cout<<"2. Depositar dinero"<<endl;
        cout<<"3. Retirar dinero"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Seleccione una opción: ";
            cin>>opcion;

        switch (opcion) 
        {
            case 1:
                cout<<"Saldo actual: $"<<saldo<<endl;
                break;
            case 2:
                    cout<<"Ingrese el monto a depositar: $";
                        cin>>monto;
                
                if (monto>0) 
                {
                    saldo+=monto;
                    cout<<"Deposito exitoso. Nuevo saldo: $"<<saldo<<endl;
                } 
                else 
                {
                    cout<<"Monto invalido. Intente nuevamente."<<endl;
                }
                break;
            case 3:
                    cout<<"Ingrese el monto a retirar: $";
                        cin>>monto;
                if (monto>saldo) 
                {
                    cout<<"Saldo insuficiente. Operacion cancelada."<<endl;
                } 
                else if (monto<=0) 
                {
                    cout<<"Monto inválido. Intente nuevamente."<<endl;
                } 
                else 
                {
                    saldo-=monto;
                    cout<<"Retiro exitoso. Nuevo saldo: $"<<saldo<<endl;
                }
                break;
            case 4:
                cout<<"Gracias por usar el cajero automatico. Nos vemos!"<<endl;
                break;
             default:
                cout<<"? Opcion inválida. Intente nuevamente."<<endl;
        }
    } 
        while (opcion!=4);
    
    return 0;
}