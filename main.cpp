#include <iostream>

#include "lista.h"
#include "listacircular.h"

int main(){
    ListaCircular<int> lista1;
    lista1.InsereNoInicio(10);
    cout << lista1.size() << endl;
    cout << lista1 << endl;

    return 0;
}