#include "iostream"
#include "string"
#include "string.h"

const int longCad = 20;

using namespace std;
void NombreCantidadPrecio(char[100][100],int);

struct costoPorArticulo{
    char nombreArticulo[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

int main(void)
{
    int n;
    char cantProductos[100][100];
    
    cout << endl;
    cout << " Factura de Compra " << endl << endl;\

    cout << " Cuantos productos lleva? ";
    cin >> n;
    cin.ignore(100, '\n');

    NombreCantidadPrecio(cantProductos,n);
    
    

    return 0;
}

void NombreCantidadPrecio(char cantProductos[100][100], int n)
{
    float Total=0;
    int x = 1, j = 0;
    costoPorArticulo listado[n];
    string cad;

    cout << " Digite el nombre, cantidad y precio del producto " << endl;
    for (int i = 0; i < n; i++){
        cout << " Articulo " << x << endl;
        
        cout << " Producto: ";
        getline(cin, cad, '\n');
        strncpy(listado[i].nombreArticulo, cad.c_str( ), longCad);
        listado[i].nombreArticulo[longCad]='\0';
        cout << " Cantidad: ";
        cin >> listado[i].cantidad;
        cout << " Precio: ";
        cin >> listado[i].precio;
        cout << endl << endl;  

        cin.ignore(100, '\n');

        x++;
    }
    

    for(int i= 0; i < n; i++){
        listado[i].costoPorArticulo = listado[i].cantidad * listado[i].precio;
    }

    for(int i= 0; i < n; i++){
        Total = Total + listado[i].costoPorArticulo;
    }

    cout << endl << " Recibo total: " << endl;
    for(int i = 0; i < n; i++){
        cout << " Producto: " << listado[i].nombreArticulo <<endl;
        cout << " Cantidad: " << listado[i].cantidad << endl;
        cout << " Precio:   " << listado[i].precio << endl;
    }
    cout << endl;
    cout << " Su total es: $" << Total << endl; 
}