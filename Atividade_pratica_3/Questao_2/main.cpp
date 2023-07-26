#include "Quadratica.hpp"
#include "Senoide.hpp"
#include "Linear.hpp"

int main()
{
    double resultado;

    //cria um container de ponteiros do tipo Funcao
    Funcao *f[3];

    f[0] = new Quadratica(1,2,4);
    f[1] = new Senoide();
    f[2] = new Linear(1,4);

    cout << "*** Calculo de integrais usando a regra do trapezio: ***"<<endl<<endl;
    cout << "*** Funcoes ***" << endl;
    cout << "(1) x^2 + 2x + 4" << endl;
    cout << "(2) sen(x) / x" << endl;
    cout << "(3) x + 4" << endl;
    cout << endl;

    for (int i=0; i<3; i++)
    {
        resultado = f[i]->getIntegral(1,4,1000);
        cout << "Integral da Funcao (" << i+1 << "): " << resultado;
        cout << endl;
    }

    for (int i=0; i<3; i++)
    {
        delete f[i];
    }

    return 0;
}