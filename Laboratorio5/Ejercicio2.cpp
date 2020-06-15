#include "iostream"                                                                 //Ejercicio 2 Labo 5//

using namespace std;
int main(void)
{
    int hora, minuto, segundo;
    char c;

    cout << endl;
    cout << " Ingrese la hora con los dos puntos incluidos (:) en formato 24h " << endl;
    cout << " EJEMPLO: 22:56:33 " << endl << endl;
    cout << " Hora: ";
    cin >> hora >> c >> minuto >> c >> segundo;

    if (hora < 0 || minuto < 0 || segundo < 0){
        cout  << " Ingrese una hora valida -_- " << endl;
        cout << " Hora: ";
        cin >> hora >> c >> minuto >> c >> segundo;
    }
    
    segundo++;
    if (segundo >= 60){
        segundo = 0;
        minuto++;
        
        if (minuto >= 60){
            minuto = 0;
            hora++;
            
            if (hora >= 24){
                hora = 0;    
            } 
        } 
    }
    
    cout << endl;
    cout << " Hora ";

    if (hora < 10) {cout << "0";}
    
    cout << hora; 
    cout << ":";
    
    if (minuto < 10) {cout << "0";}
    cout << minuto; 
    cout << ":";
    
    if (segundo < 10) {cout << "0";}
    cout << segundo; 
    cout << endl << endl;

    return 0;
    
}