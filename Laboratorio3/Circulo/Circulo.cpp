#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    float r, area, perim;

    cout << endl << endl << endl << endl << endl;
    cout << "  ESTA ES UNA CALCULADORA DE AREA Y PERIMETRO DE UN CIRCULO  " << endl << endl << endl << endl;

    cout << " Dime, cual es el radio?.. (U.u)  " << endl << endl;

    cout << " Radio: " << endl;
    cin >> r;

    area = 3.1416 * pow(r, 2);
    perim = 2 * 3.1416 * r;

    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout << "Calculando (O.o) " << endl;
    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout << " Listo! ya tengo los calculos :D " << endl << endl << endl;
    cout << " El area es: " << area << endl;
    cout << " El perimetro es: " << perim << endl << endl;

    return 0;
}