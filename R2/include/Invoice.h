#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
    public:
        int numero;
        float quantidade, preco;
        std::string descricao;
        int getInvoiceAmount(int p, int q);

    private:
};

#endif // INVOICE_H
