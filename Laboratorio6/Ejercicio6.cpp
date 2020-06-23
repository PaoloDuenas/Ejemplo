#include "iostream"                                             //Laboratorio 6 Ejercicio 6//
using namespace std;
void contador(int [], int);

int main(void)
{
    int n, a[] = {1, 1, 2, 2, 1, 3, 4, 5, 6, 7, 8, 9, 9, 9, 3};

    cout << endl;
    cout << " Seleccione un numero del 1 al 9 " << endl << endl;
    cin >> n;

    if (n > 9)
    cout << " Valor no apropiado, Fin del programa ";
    
    else if (n < 1)
    cout << " Valor no apropiado, Fin del programa ";
    
    else{contador(a, n);}

    return 0;
}

void contador(int x[], int n)
{
    int veces = 0;
    int deploy;
    for (int i = 0; i < 15; i++){
        if(n == x[i]){
            veces++;
            deploy = x[i];
        }   
    }
    cout << endl;
    cout << " El numero " << deploy << " se repite " << veces << " veces. ";
}
