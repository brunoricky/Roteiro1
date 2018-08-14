#include "Pagamento.h"

void Pagamento::setNomeDoFuncionario(std::string n)
{
    this->nomeDoFuncionario = n;
}

void Pagamento::setValorPagamento(double v){
    this->valorPagamento = v;
}

std::string Pagamento::getNomeDoFuncionario(){
    return this->nomeDoFuncionario;
}

double Pagamento::getValorPagamento(){
    return this->valorPagamento;
}

