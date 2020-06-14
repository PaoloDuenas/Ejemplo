//////////////////////////////////////////////  AÑO BISIESTO  //////////////////////////////////////////////
#include "iostream"

using namespace std;


int main()
{
    int year;

    cout << endl;
    cout << endl << " Ingresa un a"; 
    printf("%c",-92); 
    cout << "o y te dire si es bisiesto o no. " << endl;
    cin >> year;

    if(year % 400 == 0){        //Para ver si es divisible entre 400
        cout << endl;
        cout << endl << " El a";
        printf("%c",-92); 
        cout << "o es bisiesto " << endl << endl;
    }

    else if(year % 100 != 0){   //En caso que no sea divisible ni entre 100 ni entre 4 no es bisiesto
        if(year % 4 == 0){
        cout << endl;
        cout << endl << " El a";
        printf("%c",-92); 
        cout << "o es bisiesto " << endl << endl;
        }
        else{
        cout << endl;
        cout << endl << " El a";
        printf("%c",-92); 
        cout << "o no es bisiesto " << endl << endl;
        }
    }

    return 0;
}