#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa
{
    public:
        double getValor();
        std::string getTipoDeGasto();

        void setValor(double v);
        void setTipoDeGasto(std::string t);

    private:
        double valor;
        std::string tipoDeGasto;
};

#endif // DESPESA_H
