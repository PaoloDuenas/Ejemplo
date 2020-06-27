#include "iostream"                                             //Ejercicio 1 Corto 4//
#include "string"                                               //Paolo Dueñas 00230720//
using namespace std;
void Codificador(char[]);

int main(void)
{
    char palabra[100];
    
    cout << endl;
    cout << " Introduzca una palabra: ";
    cin.getline(palabra,100,'\n');
    
    Codificador(palabra);

    return 0;
}


void Codificador(char letra[])
{
    int i;
    while(letra[i]!=0)
    {
        if (letra[i]=='M'||letra[i]=='m'){
        letra[i]='0';
        cout << letra[i];
        }
        else if (letra[i]=='U'||letra[i]=='u'){
        letra[i]='1';
        cout << letra[i];
        }
        else if (letra[i]=='R'||letra[i]=='r'){
        letra[i]='2';
        cout << letra[i];
        }
        else if (letra[i]=='C'||letra[i]=='c'){
        letra[i]='3';
        cout << letra[i];
        }
        else if (letra[i]=='I'||letra[i]=='i'){
        letra[i]='4';
        cout << letra[i];
        }
        else if (letra[i]=='E'||letra[i]=='e'){
        letra[i]='5';
        cout << letra[i];
        }
        else if (letra[i]=='L'||letra[i]=='l'){
        letra[i]='6';
        cout << letra[i];
        }
        else if (letra[i]=='A'||letra[i]=='a'){
        letra[i]='7';
        cout << letra[i];
        }
        else if (letra[i]=='G'||letra[i]=='g'){
        letra[i]='8';
        cout << letra[i];
        }
        else if (letra[i]=='O'||letra[i]=='o'){
        letra[i]='9';
        cout << letra[i];
        }
        else 
        cout << letra[i];
        
        i++;
    }
}