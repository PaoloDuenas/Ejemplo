#include "iostream"

using namespace std;

int main()
{
    int n;

    cout << endl;
    cout << " DETERMINAR SI UN NUMERO ES POSITIVO, NEGATIVO O CERO " << endl << endl;
    cout << " ESCRIBA UN NUMERO " << endl << endl;
    cin >> n;

    if(n == 0){
        cout << endl << " EL NUMERO ES CERO ";
    }
    else if(n < 0){
        cout << endl << " EL NUMERO ES NEGATIVO ";
    }
    else if(n > 0){
        cout << endl << " EL NUMERO ES POSITIVO ";
    }
    return 0;
}