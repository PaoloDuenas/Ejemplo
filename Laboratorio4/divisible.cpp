#include "iostream"

using namespace std;

int main()
{
    float a, b, respuesta;

    cout << endl;
    cout << " VERIFIQUEMOS SI LOS NUMEROS SON DIVISIBLES " << endl << endl;
    cout << " INGRESE EL PRIMER VALOR " << endl << endl;
    cin >> a;

    cout << endl;
    cout << " INGRESE EL SEGUNDO VALOR " << endl << endl;
    cin >> b;

    respuesta = a / b;

    if(respuesta == 0){
        cout << endl;
        cout << " NO ES DIVISIBLE " << endl << endl;
    }
    else {
        cout << endl;
        cout << " SI ES DIVISIBLE: " << respuesta << endl << endl;
    }

    return 0;
}