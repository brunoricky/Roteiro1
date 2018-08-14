#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"

class ControleDeGastos
{
    public:
        void addDespesa(Despesa x);
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo(std::string input);

    private:
        Despesa despesas[5];

};

#endif // CONTROLEDEGASTOS_H
