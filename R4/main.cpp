#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    std::string nome;
    int idade, telefone;

    Pessoa *P1 = new Pessoa();
    Pessoa *P2 = new Pessoa();

    cout << "Digite o nome da Pessoa 1: "; cin >> nome;
    P1->setNome(nome);
    cout << "Digite a idade da Pessoa 1: "; cin >> idade;
    P1->setIdade(idade);
    cout << "Digite o telefone da Pessoa 1: "; cin >> telefone;
    P1->setTelefone(telefone);

    cout << "Digite o nome da Pessoa 2: "; cin >> nome;
    P2->setNome(nome);
    cout << "Digite a idade da Pessoa 2: "; cin >> idade;
    P2->setIdade(idade);
    cout << "Digite o telefone da Pessoa 2: "; cin >> telefone; cout << endl;
    P2->setTelefone(telefone);

    cout << "O nome da pessoa 1 eh: " << P1->getNome() << endl;
    cout << "O nome da pessoa 2 eh: " << P2->getNome() << endl << endl;
    cout << "A idade da pessoa 1 eh: " << P1->getIdade() << endl;
    cout << "A idade da pessoa 2 eh: " << P2->getIdade() << endl << endl;
    cout << "O telefone da pessoa 1 eh: " << P1->getTelefone() << endl;
    cout << "O telefone da pessoa 2 eh: " << P2->getTelefone() << endl << endl;

    return 0;
}
