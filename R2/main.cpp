#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

int main()
{
    int numero;
    float quantidade, preco, faturaTotal;
    std::string descricao;

    Invoice *inv1 = new Invoice();

    std::cout << "Digite o numero: "; std::cin >> inv1->numero;
    std::cout << "Digite a quantidade: "; std::cin >> inv1->quantidade;
    std::cout << "Digite o preco: "; std::cin >> inv1->preco;
    getchar();
    std::cout << "Digite a descricao: "; std::getline( std::cin, inv1->descricao);

    faturaTotal = inv1->getInvoiceAmount(inv1->preco, inv1->quantidade);

    std::cout << inv1->descricao << "\n\n";
    std::cout << "A fatura total eh: " << faturaTotal << "\n\n";

    return 0;
}
