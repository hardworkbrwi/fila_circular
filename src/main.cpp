#include <iostream>

//#include "lista.h"
//#include "listacircular.h"
#include "filacircular.h"

int main(){
    FilaCircular<string> fila1;
    fila1.InsereNoFinal("Bruno");
    fila1.InsereNoFinal("João Pedro");
    fila1.InsereNoFinal("Brenda");
    fila1.InsereNoFinal("Everton");
    fila1.InsereNoFinal("Willian");
    fila1.InsereNoFinal("Ágatha");
    fila1.InsereNoFinal("Mikahella");
    

    /* cout << fila1.size() << endl;
    cout << fila1 << endl;
    fila1.InsereNaPosicao(2, 45);

    cout << fila1.size() << endl;

    cout << fila1 << endl;

    fila1.RemoveNaPosicao(2); */

    cout << fila1 << endl;
    while(fila1.size() >= 0){
        fila1.RemoveNoInicio();
        cout << fila1 << endl;
    }


    return 0;
}