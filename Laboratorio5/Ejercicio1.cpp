#include "iostream"                                                                 //Ejercicio 1 Labo 5//

void MCD(int, int*, int);

using namespace std;
int main(void)
{
    int a, b, r;

    cout << endl;
    cout << endl << " CALCULAR EL MCD DE A Y B" << endl;
    cout << " //* NOTA: EL PRIMER VALOR(A) TIENE QUE SER MAYOR AL SEGUNDO(B) *// ";

    cout << endl << " INGRESE EL VALOR DE A: ";
    cin >> a;

    cout << endl << " INGRESE EL VALOR DE B: ";
    cin >> b;
    

    MCD(a, &b, r);
    
    return 0;
}   



void MCD(int a, int *b, int r)      //Funcion.
{
    do
    {        
        r = a % *b;
        if(r != 0)
        {
            a = *b;
            *b = r;
        }
        
    }
    while (r != 0);
    {
        cout << endl << " El MCD es: " << *b;
        
    }
}
