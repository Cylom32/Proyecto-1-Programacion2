//
// Created by gabri on 22/10/2023.
//

#include "Llantas.h"
Llantas::Llantas(string _id, string nom, double trac, double pre/*, Item* it*/) {
    this->id = _id;
    this->nombre = nom;
    this->traccion = trac;
    this->precio = pre;
    //this->ptrItem = it;
}

Llantas::~Llantas() {
    if (this->ptrItem != nullptr) delete ptrItem;
}

string Llantas::getId() { return id; }

void Llantas::setId(string x) { this->id = x; }

string Llantas::getNombre() { return nombre; }

void Llantas::setNombre(string x) { this->nombre = x; }

double Llantas::getPrecio() { return  this->precio; }

void Llantas::setPrecio(double x) { this->precio = x; }

int Llantas::getTraccion() { return  this->traccion; }

void Llantas::setTraccion(int x) { this->traccion = x; }

double Llantas::getVelocidad() { return  this->velocidad; }

void Llantas::setVelocidad(double x) { this->velocidad = x; }

double Llantas::getPotencia() { return  this->potencia; }

void Llantas::setPotencia(double x) { this->potencia = x; }



string Llantas::toString() {
    stringstream s;
    if (this->ptrItem != nullptr) s << ptrItem->toString() << endl;
    s<<"-------Informacion de las Llantas -------"<<endl;
    s<<"Id: "<< this->id <<endl;
    s<<"Nombre: "<< this->nombre << endl;
    s<<"Traccion: " << this->traccion << endl;
    s<<"Precio: " << this->precio << endl;
    if (this->estado) s<< "Estado: Asignado. " << endl;
    else s << "Estado: No Asignado. " << endl;
    s<<"------------------------------------------"<<endl;
    return s.str();
}

