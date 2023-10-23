//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_ITERADOR_H
#define DECORADOR_AUTOMOVIL_ITERADOR_H

#include "Nodo.h"
template <class T>
class Iterador{
private:
    Nodo<T> *nodo_Actual ;
public:


    Iterador(Nodo<T>*n):nodo_Actual(n){}

    virtual ~Iterador(){
        //  if(nodo_Actual!= nullptr){delete nodo_Actual;}
    }

    bool masELementos(){return nodo_Actual!=nullptr;}

    T* operator*(){return nodo_Actual->getInfo();}

    Nodo<T>* getTNodo() const{return nodo_Actual;}

    Iterador<T>& operator++(){
        if(nodo_Actual){
            nodo_Actual=nodo_Actual->getSiguiente();
        }
        return*this;
    }

};
#endif //DECORADOR_AUTOMOVIL_ITERADOR_H
