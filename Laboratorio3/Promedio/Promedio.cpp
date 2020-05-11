#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int num1, num2, num3; 
    float prod;

    cout << endl << endl << endl << endl << endl;
    cout << "  ESTA ES UNA CALCULADORA DE PROMEDIOS ENTEROS " << endl << endl << endl << endl;
    
    cout << " Dime tus tres numeros.. :'D " << endl << endl;
    
    cout << " Primer valor: " << endl;
    cin >> num1;
    cout << " Segundo valor: " << endl;
    cin >> num2;
    cout << " Tercer valor: " << endl;
    cin >> num3;
    
    prod = ((float)num1 + num2 + num3) / 3;

    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout << "Calculando (O.o) " << endl;
    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout << " Listo! Tu promedio es: " << prod << endl << endl << endl << endl << endl << endl;

    return 0;

}