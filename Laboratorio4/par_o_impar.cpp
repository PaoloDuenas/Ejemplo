#include "iostream"

using namespace std;

int main()
{
    int x;

    cout << endl;
    cout << " DETERMINAR SI UN NUMERO ES PAR O IMPAR " << endl << endl;
    cout << " ESCRIBA UN NUMERO " << endl << endl;
    cin >> x;

    if(x % 2 == 0){
        cout << endl <<  " EL NUMERO ES PAR " << endl << endl;
    }
    else {
        cout << endl << " EL NUMERO ES IMPAR " << endl << endl;
    }
    return 0;
}
