//////////////////////////////////////////////  NUMERO MAGICO  //////////////////////////////////////////////
#include "iostream"
#include "string"
using namespace std;


int main()
{
    int intentos, numero, guess, menu;
    string nombre;

    cout << endl;
    cout << endl << " Bienvenido a Magic Number " << endl;
    cout << endl << " Bien, dime tu nombre: ";
    cin >> nombre;

    cout << endl << endl << " Perfecto " << nombre << ", empecemos con el juego" << endl;
    cout << endl << " Las reglas son sencillas, tienes 5 intentos para averiguar cual es el numero secreto " << endl;
    cout << " no te preocupes te dare pistas si te resulta muy dificil " << endl;
    cout << " porcierto el numero magico esta entre el 1 y el 100 " << endl;
    cout << endl << "                    Suerte <3                        " << endl;
    
    guess = 69;
    intentos = 0;

    // "do" para ir contando la cantidad de intentos que el jugador tiene.
    do
    {
        cout << endl;
        cout << endl << " Menu: ";
        cout << endl << " Press 1 to keep playing :D ";
        cout << endl << " Press 0 to stop playing :( " << endl;
        cin >> menu;

        // Menu para ver si el jugador quiere seguir jugando.
        switch (menu)
        {
        case 1:             //Contador de intentos.                
            intentos ++;
            if(intentos<=5)
            {
                cout << endl;
                cout << endl << " Este es tu intento #" << intentos << endl;
                cout << " Ingresa el numero: ";
                cin >> numero;
                
                //Code del Juego.
                if(numero == guess){
                    cout << endl << " Felicidades " << nombre << " has ganado!!  " << endl;
                    menu = 0;
                    }
                else if(numero<0 || numero>100){
                    cout << endl << " Intenta probar con un numero del 1 al 100 " << endl;
                    }
                else if(numero<guess){
                    cout << endl << " Opps :s Intenta probar con un numero mayor " << endl;
                    }
                else if(numero>guess){
                    cout << endl << " Opps :s Intenta probar con un numero menor " << endl;
                    }
                
            }
            //Fin intentos.
            else{ 
                cout << endl << endl << endl << endl << " *//* GAME OVER *//* " << endl << endl << endl;
                menu = 0;
            }
        
            break;
        
        case 0:         //Fin del juego por el jugador.
            cout << endl << endl << endl << endl << " Gracias por jugar " << endl << endl << endl;
            break;

        default:
            cout << endl << " Solo puedes seleccionar 1 o 0 :/ ";
            break;
        }


    } while (menu != 0);
    
    return 0;
}
