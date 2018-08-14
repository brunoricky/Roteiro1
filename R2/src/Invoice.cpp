#include "Invoice.h"

int Invoice::getInvoiceAmount(int p,int q)
{
    if(p<0) this->preco = 0;
    else if(q<0) this->quantidade = 0;
    return p*q;
}
