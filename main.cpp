#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    int x, d, m, a;
    Data *dt1 = new Data();

    cout << "Digite o dia: "; cin >> d;
    cout << "Digite o mes: "; cin >> m;
    cout << "Digite o ano: "; cin >> a;

    x = dt1->verifier(d,m,a);

    if(x==1) cout << "Data valida!\n";
    else if(x==0) cout << "Data invalida!\n";
    else cout << "Error\n";

    dt1->avancarDia(d,m,a);

    cout << "A nova data eh: " << dt1->dia << "/" << dt1->mes << "/" << dt1->ano;

    return 0;
}
