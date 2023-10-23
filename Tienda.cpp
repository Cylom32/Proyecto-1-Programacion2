//
// Created by gabri on 22/10/2023.
//

#include "Tienda.h"

Tienda::Tienda() {}
Tienda::Tienda(bool asignado) : asignado(asignado) {}



Tienda::~Tienda() {

}

bool Tienda::Asignado() const {
    return asignado;
}

void Tienda::setAsignado(bool x) {
    Tienda::asignado = x;
}


string Tienda::getId() { return id;}

 void Tienda::setId( string x){ this->id=x;}

 string Tienda::getNombre() {return nombre;}

 void Tienda::setNombre( string x){this->nombre=x;}

 double Tienda::getPrecio() {return precio;}

 void Tienda::setPrecio(double x){this->precio=x;}

int Tienda::getTraccion(){return traccion;}

 void Tienda::setTraccion(int x){this->traccion=x;}

 double Tienda::getVelocidad() {return this->getVelocidad();}

 void Tienda::setVelocidad(double x){this->velocidad=x;}

 double Tienda::getPotencia() {return potencia;}

 void Tienda::setPotencia(double x){this->potencia=x;}

