#include "iostream"
#include "string"

using namespace std;

int main()
{
    string palabra;
    int inicio, final; 

    cout << endl;
    cout << "INGRESE SU PALABRA" << endl << endl; 
    cin >> palabra;

    inicio = palabra.front();
    final = palabra.back();

    if(inicio == final){
        cout << endl << " LA PALABRA SI INICIA Y FINALIZA CON SU MISMA LETRA " << endl << endl;
    }
    else{
        cout << endl << " LA PALABRA NO INICIA Y FINALIZA CON SU MISMA LETRA " << endl << endl;
    }


}