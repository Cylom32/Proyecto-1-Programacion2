//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_LISTA_H
#define DECORADOR_AUTOMOVIL_LISTA_H
#include "Nodo.h"
template<class T>
class Lista {
private:
    Nodo<T>* inicio;
    Nodo<T>* final;
public:
    Lista() {
        inicio= nullptr;
        final= nullptr;
    }

    virtual ~Lista() {
        while(inicio!=nullptr){
            Nodo<T>* temp= inicio;
            inicio=inicio->getSiguiente();
            delete temp;
        }
    }

    Nodo<T> *getInicio()  {
        return inicio;
    }

    void setInicio(Nodo<T> *inicio) {
        Lista::inicio = inicio;
    }

    Nodo<T> *getFinal()  {
        return final;
    }

    void setFinal(Nodo<T> *final) {
        Lista::final = final;
    }

    void agregar(T* obj){
        Nodo<T>* nuevo= new Nodo<T>();
        nuevo->setInfo(obj);
        if(inicio== nullptr){
            inicio= final= nuevo;

        }
        else{
            final->setSiguiente(nuevo);
            final=nuevo;
        }

    }

    bool vacia(){
        return inicio==nullptr;
    }


    string toString() {
        stringstream s;
        Nodo<T>* aux = inicio;

        while (aux != nullptr) {
            T* elemento = aux->getInfo();
            s << elemento->toString() << endl; // Suponemos que la clase T tiene un método toString
            aux = aux->getSiguiente();
        }

        return s.str();
    }

    bool encontrado(string id){
        bool encontrado=false;
        Nodo<T>*aux=inicio;
        while (aux!= nullptr){
            if(aux->getInfo()->getId()==id){
                encontrado= true;
            }
            aux=aux->getSiguiente();
        }
        return encontrado;

    }

    T* buscar(string id) {
        Nodo<T>* aux = inicio;

        while (aux != nullptr) {
            if (aux->getInfo()->getId() == id) {
                return aux->getInfo();
            }
            aux = aux->getSiguiente();
        }

        return nullptr;
    }

    void eliminar(T* valor) {
        Nodo<T>* actual = inicio;
        Nodo<T>* anterior = nullptr;

        while (actual != nullptr) {
            if (actual->getInfo() == valor) {

                if (anterior == nullptr) {

                    inicio = actual->getSiguiente();
                    delete actual;
                    actual = inicio;
                } else {

                    anterior->setSiguiente(actual->getSiguiente());
                    delete actual;
                    actual = anterior->getSiguiente();
                }
            } else {

                anterior = actual;
                actual = actual->getSiguiente();
            }
        }
    }
};

#endif //DECORADOR_AUTOMOVIL_LISTA_H
