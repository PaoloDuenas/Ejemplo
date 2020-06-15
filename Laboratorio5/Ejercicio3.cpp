#include "iostream"                                                                 //Ejercicio 3 Labo 5//

bool CalculoBisiesto(int);

using namespace std;
int main(void)
{
    int year;

    cout << endl;
    cout << endl << " Ingresa un a\244o y te dire si es bisiesto o no. " << endl;
    cin >> year;

   CalculoBisiesto(year);

    return 0;
}




bool CalculoBisiesto(int year)          //Funcion.
{
    if(year % 400 == 0){        
        cout << endl;
        cout << endl << " El a\244o es bisiesto " << endl << endl;
    }

    else if(year % 100 != 0){  
        if(year % 4 == 0){
        cout << endl;
        cout << endl << " El a\244o es bisiesto " << endl << endl;
        }
        else{
        cout << endl;
        cout << endl << " El a\244o no es bisiesto " << endl << endl;
        }
    }
}