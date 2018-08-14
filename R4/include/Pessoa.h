#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa
{
    public:
        std::string getNome();
        int getIdade();
        int getTelefone();

        void setNome(std::string n);
        void setIdade(int i);
        void setTelefone(int t);

    private:
        std::string nome;
        int idade, telefone;

};

#endif // PESSOA_H
