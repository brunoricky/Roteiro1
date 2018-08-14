#include "ControleDePagamentos.h"

void ControleDePagamentos::addPagamento(Pagamento x)
{
    static int i=0;
    pagamentos[i++] = x;
}

double ControleDePagamentos::calculaTotalDePagamentos(){
    int j;
    double soma=0;

    for(j=0; j<5; j++){
        soma+= pagamentos[j].getValorPagamento();
    }
    return soma;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string input){
    int j, flag=0;
    for(j=0; j<5; j++){
        if(input == pagamentos[j].getNomeDoFuncionario()){
            flag = 1;
        }

    }
    if(flag==1) return true;
    else return false;

}
