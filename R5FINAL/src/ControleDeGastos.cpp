#include "ControleDeGastos.h"

void ControleDeGastos::addDespesa(Despesa x)
{
    static int i=0;
    despesas[i++] = x;
}

double ControleDeGastos::calculaTotalDeDespesas(){
    int j;
    double soma=0;

    for(j=0; j<5; j++){
        soma+= despesas[j].getValor();
    }
    return soma;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string input){
    int j, flag=0;
    for(j=0; j<5; j++){
        if(input == despesas[j].getTipoDeGasto()){
            flag = 1;
        }

    }
    if(flag==1) return true;
    else return false;

}
