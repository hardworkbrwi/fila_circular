#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

#include "lista.h"
/* 
template <typename T> class ListaCircular; // Declaracao antecipada da classe
template <typename T> // Definicao antecipada do template para o operador de insercao
std::ostream& operator<<( std::ostream&, ListaCircular<T> const & );
 */
template <typename T>
class ListaCircular : public ListaLigada<T>{
    public:
        ListaCircular();
        ~ListaCircular();
        bool InsereNoInicio(T _valor);
        /*bool InsereNoFinal(T _valor);
        bool InsereNaPosicao(int pos, T _valor);
        bool RemoveNoInicio();
        bool RemoveNoFinal();
        bool RemoveNaPosicao(int pos);

        int size();

        friend std::ostream& operator<< <T>( std::ostream&, ListaLigada<T> const &l); */
};


template <typename T>
ListaCircular<T>::ListaCircular(){}

template <typename T>
ListaCircular<T>::~ListaCircular(){}

template <typename T>
bool ListaCircular<T>::InsereNoInicio( T valor ){
    int teste;
    auto novo = make_shared<Node<T>>( valor );
    if( !novo ) return false;

    if( this->tamanho == 0){
        novo->setNext( novo );
        this->cauda = novo;
    }else{
        novo->setNext( this->cabeca );
        auto aux = this->cauda->getNext();
        aux->setNext( novo );
    }
    this->cabeca = novo;

    return true;
}


#endif