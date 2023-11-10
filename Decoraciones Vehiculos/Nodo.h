//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_NODO_H
#define DECORADOR_AUTOMOVIL_NODO_H
#include "Utilidades.h"

template<class T>
class Nodo{

private:
    T* info;
    Nodo<T>* siguiente;
public:
    Nodo();
    Nodo(T* info, Nodo<T>* sig= nullptr);
    virtual ~Nodo();
    T* getInfo();
    Nodo<T>* getSiguiente();

    void setInfo(T*);
    void setSiguiente(Nodo<T>*);


};
template<class T>
Nodo<T>::Nodo(){
    this->info= nullptr;
    this->siguiente=nullptr;
}
template<class T>
Nodo<T>::Nodo(T* i, Nodo<T>* sig ):info(i),siguiente(sig){}

template<class T>
Nodo<T>::~Nodo(){

    if(info!= nullptr){delete info;}
}


template<class T>
T* Nodo<T>::getInfo(){
    return info;
}

template<class T>
Nodo<T>* Nodo<T>::getSiguiente(){
    return siguiente;
}


template<class T>
void Nodo<T>::setInfo(T* x){ info=x;}


template<class T>
void Nodo<T>::setSiguiente(Nodo<T>* x){siguiente=x;}
#endif //DECORADOR_AUTOMOVIL_NODO_H
