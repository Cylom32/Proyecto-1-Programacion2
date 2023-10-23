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

double Llantas::getPrecio() {return precio;}

void Llantas::setPrecio(double x){this->precio=x;}

int Llantas::getTraccion(){return traccion;}

void Llantas::setTraccion(int x){this->traccion=x;}

double Llantas::getVelocidad() {return velocidad;}

void Llantas::setVelocidad(double x){this->velocidad=x;}

double Llantas::getPotencia() {return potencia;}

void Llantas::setPotencia(double x){this->potencia=x;}