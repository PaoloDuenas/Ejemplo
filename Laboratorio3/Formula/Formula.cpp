#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int a, b, c;
    float r1, r2;

    cout << endl << endl << endl << endl << endl;
    cout << "  FORMULA CUADRATICA " << endl << endl << endl << endl;

    cout << " Valor de a: " << endl;
    cin >> a;
    cout << " Valor de b: " << endl;
    cin >> b;
    cout << " Valor de c: " << endl;
    cin >> c;

    r1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);

    r2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);

    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout << "Calculando (O.o) " << endl;
    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout << " Listo! ya tengo los calculos :D " << endl  << endl;
    cout << " Respuesta 1 = " << r1 << endl;
    cout << " Respuesta 2 = " << r2 << endl << endl << endl;

    return 0;
}