/**
 * @file	filacircular.h
 * @brief	Implementação da classe FilaCircular em C++
 * @author	Bruno César L. Silva
 * @since	18/05/2018
 * @date	20/05/2018
 */


#ifndef FILACIRCULAR_H
#define FILACIRCULAR_H

#include "listacircular.h"


/**
* @brief Implementacao da classe FilaCircular
* @detail Define um template de fila circular
* como classe derivada de ListaCircular
*/
template <typename T>
class FilaCircular : public ListaCircular<T>{
    public:
        /**
        * @brief Método construtor padrão de FilaCircular
        */
        FilaCircular();

        /**
        * @brief Método destrutor de FilaCircular
        */
        ~FilaCircular();
        //bool InsereNoFinal
        //bool RemoveNoInicio
        
};

template <typename T>
FilaCircular<T>::FilaCircular(){}

template <typename T>
FilaCircular<T>::~FilaCircular(){}

#endif