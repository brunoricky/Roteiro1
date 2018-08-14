#include <iostream>
#include "ControleDePagamentos.h"

using namespace std;

int main()
{
    ControleDePagamentos *Pagamento1 = new ControleDePagamentos();
    Pagamento Funcionario1;
    Pagamento Funcionario2;

    Funcionario1.setValorPagamento(2500);
    Funcionario1.setNomeDoFuncionario("Joao");
    Funcionario2.setValorPagamento(5000);
    Funcionario2.setNomeDoFuncionario("Rubens");

    Funcionario1.getNomeDoFuncionario();
    Funcionario1.getValorPagamento();
    Funcionario2.getNomeDoFuncionario();
    Funcionario2.getValorPagamento();

    Pagamento1->addPagamento(Funcionario1);
    Pagamento1->addPagamento(Funcionario2);

    cout << "O seu gasto e de: " << Pagamento1->calculaTotalDePagamentos() << endl;


    return 0;
}
