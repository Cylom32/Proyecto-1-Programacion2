//
// Created by gabri on 22/10/2023.
//

#include "Nitro.h"
Nitro::Nitro(string _id, string nom, double vel, double pre/*, Item* it*/) {
    this->id = _id;
    this->nombre = nom;
    this->velocidad = vel;
    this->precio = pre;
    //this->ptrItem = it;
}

Nitro::~Nitro() {
    if (this->ptrItem != nullptr) delete ptrItem;
}

string Nitro::getId() { return id; }

void Nitro::setId(string x) { this->id=x;}

string Nitro::getNombre() { return nombre;}

void Nitro::setNombre(string x){ this->nombre=x;}

double Nitro::getPrecio() { return this->precio; }

void Nitro::setPrecio(double x) { this->precio=x; }

int Nitro::getTraccion() { return this->traccion; }

void Nitro::setTraccion(int x) { this->traccion=x; }

double Nitro::getVelocidad() { return  this->velocidad; }

void Nitro::setVelocidad(double x) { this->velocidad = x; }

double Nitro::getPotencia() { return this->potencia; }

void Nitro::setPotencia(double x) { this->potencia = x; }

string Nitro::toString() {
    stringstream s;
    //if (ptrItem != nullptr) s << ptrItem->toString() << endl;
    s << " -------Informacion del Nitro -------"<<endl;
    s << " Id: "<< id << endl;
    s << " Nombre: "<< nombre << endl;
    s << " Velocidad: "<< velocidad << endl;
    s << " Precio: "<< precio << endl;
    if (this->estado) s<< "Estado: Asignado. " << endl;
    else s << "Estado: No Asignado. " << endl;
    s << "-------------------------------------"<<endl;
    return s.str();
}

