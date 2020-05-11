#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    string producto;
    float precio, total;
    int cantidad;

    cout << endl << endl << endl << endl << endl;
    cout << " Buenas tardes! Que producto lleva? " << endl << endl << endl << endl;
    cin >> producto;
    cout << endl << endl;
    cout << " Excelente! Digame el precio del producto" << endl << endl << endl << endl;
    cin >> precio;
    cout << endl << endl;
    cout << "Okay.. Cuantos " << producto << " lleva? " << endl << endl << endl << endl;
    cin >> cantidad;
    cout << endl << endl;

    total = (precio * cantidad);
    
    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout << "Calculando (O.o) " << endl;
    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout <<  "..." << endl;
    cout << " Listo! su total es: $" << total << endl << endl; 
    cout << " Que lo disfrute! :D ";

    return 0;
}
