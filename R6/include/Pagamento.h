#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>


class Pagamento
{
    public:
        void setValorPagamento(double v);
        void setNomeDoFuncionario(std::string n);
        double getValorPagamento();
        std::string getNomeDoFuncionario();

    private:
        double valorPagamento;
        std::string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
