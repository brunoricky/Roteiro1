#include "Pessoa.h"

std::string Pessoa::getNome()
{
    return this->nome;
}

void Pessoa::setNome(std::string n){
    this->nome = n;
}

int Pessoa::getIdade(){
    return this->idade;
}

void Pessoa::setIdade(int i){
    this->idade = i;
}

int Pessoa::getTelefone(){
    return this->telefone;
}

void Pessoa::setTelefone(int t){
    this->telefone = t;
}
