//////////////////////////////////////////////  CALCULO DE SALARIOS  //////////////////////////////////////////////
#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    int n, i, wrkdhour, wrkdxtra, mes;
    float horanorm, horaextr, normtotal, extrtotal, salariototal, total, ss, afp, renta;

    cout << endl;
    cout << endl << " Calculo de salarios mensuales. " << endl;
    cout << " Ingrese numero de empleados: " << endl;
    cin >> n;

    // "for" para hacer la intoduccion de las horas de trabajo de n empleados y su respectivo calculo de salario. 
    
    for (i = 0; i < n; i++)  
    {
        cout << endl;
        cout << endl << " Ingrese la cantidad de horas trabajadas al mes " << endl;
        cin >> wrkdhour;
        cout << endl;
        cout << endl << " Ingrese la cantidad de horas extra realizadas al mes " << endl;
        cin >> wrkdxtra;

        // Calculo de salario.
        
        horanorm = 1.75;
        horaextr = 2.50;
        total = 0;

        normtotal = wrkdhour * horanorm;
        extrtotal = wrkdxtra * horaextr;

        salariototal = normtotal + extrtotal;

        cout << endl << salariototal;
        
        //Calculo de los descuentos.
        ss = salariototal * 0.04;
        afp = salariototal * 0.0625;
        renta = salariototal * 0.10;

        total = salariototal - (ss + afp);

        cout << endl << total;

        if(total > 500)
         total = total - renta;
        
        cout << endl;
        cout << endl << " Bien, su salario totales de: $" << total << " Gracias por la espera. " << endl << endl;

    }
    return 0;
}
