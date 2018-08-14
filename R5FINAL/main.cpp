#include <iostream>
#include "ControleDeGastos.h"

using namespace std;

int main()
{
    ControleDeGastos *gasto = new ControleDeGastos();
    Despesa agua;
    Despesa luz;

    agua.setValor(100);
    agua.setTipoDeGasto("agua");

    luz.setValor(250);
    luz.setTipoDeGasto("luz");

    agua.getTipoDeGasto();
    agua.getValor();
    luz.getTipoDeGasto();
    luz.getValor();

    gasto->addDespesa(agua);
    gasto->addDespesa(luz);

    cout << "O seu gasto e de: " << gasto->calculaTotalDeDespesas() << endl;

    return 0;
}
