//
// Created by gabri on 22/10/2023.
//

#include "Nitro.h"
Nitro::Nitro(Item* dec) {
    this->ptrItem=dec;
}
Nitro::Nitro() {this->ptrItem= nullptr;}

Nitro::~Nitro() {

}

string Nitro::getId() {return id; }

void Nitro::setId( string x){this->id=x;}

string Nitro::getNombre() {return nombre;}

void Nitro::setNombre( string x){this->nombre=x;}

double Nitro::getPrecio() {return this->ptrItem->getPrecio()+this->precio;}

void Nitro::setPrecio(double x){this->precio=x;}

int Nitro::getTraccion(){return this->ptrItem->getTraccion()+this->traccion;}

void Nitro::setTraccion(int x){this->traccion=x;}

double Nitro::getVelocidad() {return this->ptrItem->getVelocidad()+this->velocidad;}

void Nitro::setVelocidad(double x){this->velocidad=x;}

double Nitro::getPotencia() {return this->ptrItem->getPotencia()+this->potencia;}

void Nitro::setPotencia(double x){this->potencia=x;}

string Nitro::toString(){
    stringstream s;
    s<<"-------Informacion del Nitro -------"<<endl;
    s<<"Nombre: "<<nombre<<endl;
    s<<"Velocidad: "<<velocidad<<endl;
    s<<"------------------------------------------"<<endl;
    return s.str();
}
