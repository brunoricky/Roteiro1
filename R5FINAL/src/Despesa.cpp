#include "Despesa.h"

double Despesa::getValor()
{
    return this->valor;
}

void Despesa::setValor(double v){
    this->valor = v;
}

std::string Despesa::getTipoDeGasto(){
    return this->tipoDeGasto;
}

void Despesa::setTipoDeGasto(std::string t){
    this->tipoDeGasto = t;
}
