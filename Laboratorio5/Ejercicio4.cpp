#include "iostream"                                                                 //Ejercicio 4 Labo 5//

using namespace std;



bool Bisiesto(int year){                    //Funcion de año bisiesto.
    return (((year % 4) == 0 && (year % 100) != 0) || ((year % 400) == 0));
}





int Numero_De_Dias_Al_Mes(int mes, int year)    //Funcion de dias al mes. 
{
    int dias = 31;
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        dias = 30;
    }   
    else if ( mes == 2){
        if (Bisiesto(year)){
            dias = 29;
        }
        else {
            dias = 28;
        }
    }
    return dias;
}



int main(void)              //Main.
{
    int dia, mes, year;

    cout << endl;
    cout << " Ingrese fecha en orden dd/mm/aa " << endl << endl;
    cout << " Ingrese dia: ";
    cin >> dia;
    cout << endl << " Ingrese mes: ";
    cin >> mes;
    cout << endl << " ingrese a\244o: ";
    cin >> year;

    if (dia < 1 || mes < 1){
        cout << endl << " Ingrese fecha valida -_-" ;
        
        cin >> dia;
        cout << endl << " Ingrese mes: ";
        cin >> mes;
        cout << endl << " ingrese a\244o: ";
        cin >> year;
    }

    dia++;
    if(dia > Numero_De_Dias_Al_Mes(mes, year)){
        dia = 1;
        mes++;
        if (mes > 12){
            mes = 1;
            year++;
        }
    }
    
    cout << endl << " La fecha es: " << dia << "/" << mes << "/" << year << endl << endl;
}


