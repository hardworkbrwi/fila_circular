#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

#include "lista.h"

template <typename T> class ListaCircular; // Declaracao antecipada da classe
template <typename T> // Definicao antecipada do template para o operador de insercao
std::ostream& operator<<( std::ostream&, ListaCircular<T> const & );

template <typename T>
class ListaCircular : public ListaLigada<T>{
    protected:
        bool InsereNoInicio(T _valor);
    
    public:
        ListaCircular();
        ~ListaCircular();
        
        bool InsereNoFinal(T _valor);
        //bool RemoveNoInicio();
        //bool RemoveNoFinal();
        
        friend std::ostream& operator<< <T>( std::ostream&, ListaCircular<T> const &l);
};


template <typename T>
ListaCircular<T>::ListaCircular(){}

template <typename T>
ListaCircular<T>::~ListaCircular(){}

template <typename T>
bool ListaCircular<T>::InsereNoInicio( T valor ){
    auto novo = make_shared<Node<T>>( valor );
    if( !novo ) return false;

    if( this->tamanho == 0){
        novo->setNext( novo );
        this->cauda = novo;
    }else{
        novo->setNext( this->cabeca );
        this->cauda->setNext( novo );
    }
    this->cabeca = novo;
    this->tamanho++;

    return true;
}

template <typename T>
bool ListaCircular<T>::InsereNoFinal(T valor){
    if( this->tamanho == 0 ){
        InsereNoInicio( valor );
        return true;
    }

    auto novo = make_shared<Node<T>>( valor );
    this->cauda->setNext( novo );
    this->cauda = novo;
    novo->setNext( this->cabeca );
    this->tamanho++;

    return true;
}


template <typename T>
std::ostream& operator<< ( std::ostream& o, ListaCircular<T> const &l ) {
	auto atual = l.cabeca;

    for( int i = 0; i < l.tamanho; i++ ){
        o << atual->getValor() << " ";
		atual = atual->getNext();
    }
    
    return o;
}


#endif