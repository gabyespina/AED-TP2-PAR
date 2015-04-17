/* MUESTRA EN LA PANTALLA, SI EL NUMERO ES PAR O IMPAR --
   DEVUELVE 0 (CERO) SI EL NUMERO ES IMPAR, Y 1(UNO) SI EL NUMERO ES PAR.
   GABRIEL ESPINA - K1091
   17/04/15
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    bool espar;

    cout<< " Numero -> "; cin>>num;
    espar = (num/2)*2 == num;

    cout<< endl << "  0 = Impar" << endl << "  1 = Par"<<endl<<endl;

    cout<< endl <<"  " << espar<< endl;
    return 0;
}
