#include "iostream"                                             //Ejercicio 3 Corto 4//
using namespace std;                                            //Paolo Dueñas 00230720//
void LlenarMatriz(float[5][100], int);
void CalcularNota(float[5][100], int);

int main(void)
{
    int estudiantes;
    float notas[5][100];

    cout << endl;
    cout << " ingrese la cantidad de estudiantes: ";
    cin >> estudiantes;
    if(estudiantes>100)
    cout << "Usted sobrepaso el limite de estudiantes, intente de nuevo." << endl;

    else{
    LlenarMatriz(notas,estudiantes);
    }
    return 0;
}

void LlenarMatriz(float x[5][100], int n)
{
    int contador = 1;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 5; j++){
            cout << " Ingrese las notas del estudiante numero " << contador <<".  " "["<<i<<"]["<<j<<"]: ";
            cin >> x[i][j];
            if (x[i][j]<0 || x[i][j]>10)
            {
                cout << " Esa nota no esta permitida, vuelva a iniciar. ";
            }
            
        }
        cout << endl;
        contador++;
    }     
    cout << endl << endl;
    CalcularNota(x, n);
}

void CalcularNota(float nota[5][100], int y)
{
    float suma = 0;
    int contador = 1;

    for (int i = 0; i < y; i++){
        for (int j = 0; j < 5; j++){
            nota[i][j] = nota[i][j]*0.20;
            suma = suma + nota[i][j];
        }
        cout << " Las nota del estudiante numero " << contador << " es:" << suma << endl;
        
        if (suma<7.00)
        cout << endl << " El alumno esta: REPROBADO " << endl << endl;
        
        else        
        cout << endl << " El alumno esta: APROBADO " << endl << endl;   
        contador++;
        suma = 0;
    }
}