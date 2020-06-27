#include "iostream"                                             //Ejercicio 2 Corto 4//         
using namespace std;                                            //Paolo Dueñas 00230720//
void Media(float[], float);
void Comparador(float[], float);

int main(void)
{
    float media, estaturas[25];
    int n = 1;

    cout << endl;
    cout << " Digite las estaturas de los 25 estudiantes " << endl;

    for (int i = 0; i < 25; i++){
        cout << n++ << ". ";
        cin >> estaturas[i];
    }

    Media(estaturas, media);

    return 0;
}

void Media(float alturas[], float media)
{
    float prom = 0, suma = 0;

    for (int i = 0; i < 25; i++)
    suma = suma + alturas[i];

    prom = suma/25;
    cout << endl << " La media de edades es: " << prom << endl << endl;  

    Comparador(alturas,prom);

}

void Comparador(float alt[], float p)
{
    int arribaMedia = 0, abajoMedia = 0;

    for (int i = 0; i < 25; i++)
    {
        if (alt[i] >= p)
        arribaMedia++;
        
        else
        abajoMedia++;
    }
    
    cout << endl << " Las estaturas arriba de la media son: " << arribaMedia << endl << endl;  
    cout << endl << " Las estaturas abajo de la media son: " << abajoMedia << endl << endl;  
}