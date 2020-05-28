#include "iostream"
#include "string"

using namespace std;

int main()
{
    string palabra;
    int i, cont;
    
    cont = 0;

    cout << endl;
    cout << " INGRESE SU PALABRA " << endl << endl;
    cin >> palabra;

    for(i = 0; palabra[i] != '\0'; i++) cont = cont + 1;

    if(cont > 10 && cont % 2 == 0){
        cout << endl << " LA PALABRA ES MAYOR A DIEZ CARACTERES Y ES PAR " << endl << endl;
    }
    else if(cont > 10 && cont % 2 != 0){
        cout << endl << " LA PALABRA ES MAYOR A DIEZ CARACTERES Y ES IMPAR " << endl << endl;
    }
    else if(cont < 10 && cont % 2 == 0){
        cout << endl << " LA PALABRA ES MENOR A DIEZ CARACTERES Y ES PAR " << endl << endl;
    }
    else if(cont < 10 && cont % 2 != 0){
        cout << endl << " LA PALABRA ES MENOR A DIEZ CARACTERES Y ES IMPAR " << endl << endl;
    }

    cout << endl << " EL TOTAL DE CARACTERES ES: "<< cont << endl << endl;

    return 0;
}