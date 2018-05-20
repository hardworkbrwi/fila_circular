#ifndef FILACIRCULAR_H
#define FILACIRCULAR_H

#include "listacircular.h"

template <typename T>
class FilaCircular : public ListaCircular<T>{
    public:
        FilaCircular();
        ~FilaCircular();
        //bool InsereNoFinal
        //bool RemoveNoInicio
        
};

template <typename T>
FilaCircular<T>::FilaCircular(){}

template <typename T>
FilaCircular<T>::~FilaCircular(){}

#endif