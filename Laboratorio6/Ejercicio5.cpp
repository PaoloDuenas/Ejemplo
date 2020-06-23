#include "iostream"                                             //Laboratorio 6 Ejercicio 5//
using namespace std;
void llenar_arreglo(int[], int);
void desplegar_arreglo(int[], int);

int main(void)
{
    int a[100], impares;

    cout << endl;
    cout << " Desplegar los primero 100 numero impares en orden descendente " << endl << endl;

    llenar_arreglo(a, impares);
    desplegar_arreglo(a, impares);

    cout << endl;
    return 0;
}

void llenar_arreglo( int n[], int impares)
{
    int i;
    for (i = 0; i < 100; i++)
    {
        impares = 2*i+1;
        n[i] = impares;
    }
    
}

void desplegar_arreglo(int n[], int impares)
{
    int i;
    cout << " Los elementos en orden descendiente son: " << endl;
    for (i = 99; i >= 0; i--)
    {
        cout << n[i] << endl;
    }
    
}