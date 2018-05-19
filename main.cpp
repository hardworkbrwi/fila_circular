#include <iostream>

#include "lista.h"
#include "listacircular.h"

int main(){
    ListaCircular<int> lista1;
    lista1.InsereNoInicio(10);
    lista1.InsereNoInicio(20);
    lista1.InsereNoInicio(30);
    lista1.InsereNoInicio(40);
    lista1.InsereNoFinal(50);
    lista1.InsereNoFinal(60);
    lista1.InsereNoFinal(70);

    /* cout << lista1.size() << endl;
    cout << lista1 << endl;
    lista1.InsereNaPosicao(2, 45);

    cout << lista1.size() << endl;

    cout << lista1 << endl;

    lista1.RemoveNaPosicao(2); */

    cout << lista1 << endl;
    while(lista1.size() >= 0){
        lista1.RemoveNoInicio();
        cout << lista1 << endl;
    }

    cout << lista1 << endl;


    return 0;
}