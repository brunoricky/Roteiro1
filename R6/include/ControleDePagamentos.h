#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

class ControleDePagamentos
{
    public:
        void addPagamento(Pagamento x);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(std::string input);

    private:
        Pagamento pagamentos[5];
};

#endif // CONTROLEDEPAGAMENTOS_H
