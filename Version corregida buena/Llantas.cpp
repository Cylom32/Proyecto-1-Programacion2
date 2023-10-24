//
// Created by gabri on 22/10/2023.
//

#include "Llantas.h"
Llantas::Llantas(Item*dec) {this->ptrItem=dec;}
Llantas::Llantas() {this->ptrItem= nullptr;}

Llantas::~Llantas() {
}



string Llantas::getId() {return id; }

void Llantas::setId( string x){this->id=x;}

string Llantas::getNombre() {return nombre;}

void Llantas::setNombre( string x){this->nombre=x;}

double Llantas::getPrecio() {return this->ptrItem->getPrecio();}

void Llantas::setPrecio(double x){this->precio=x;}

int Llantas::getTraccion(){return this->ptrItem->getTraccion()+this->traccion;}

void Llantas::setTraccion(int x){this->traccion=x;}

double Llantas::getVelocidad() {return this->ptrItem->getVelocidad()+this->velocidad;}

void Llantas::setVelocidad(double x){this->velocidad=x;}

double Llantas::getPotencia() {return this->ptrItem->getPotencia()+this->potencia;}

void Llantas::setPotencia(double x){this->potencia=x;}

string Llantas::toString() {
    stringstream s;
    s<<"-------Informacion de las llantas -------"<<endl;
    s<<"Nombre: "<<"    "<<endl;
    s<<"Traccion: "<<traccion<<endl;
    s<<"------------------------------------------"<<endl;
    return s.str();
}