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

double Nitro::getPrecio() {return precio;}

void Nitro::setPrecio(double x){this->precio=x;}

int Nitro::getTraccion(){return traccion;}

void Nitro::setTraccion(int x){this->traccion=x;}

double Nitro::getVelocidad() {return velocidad;}

void Nitro::setVelocidad(double x){this->velocidad=x;}

double Nitro::getPotencia() {return potencia;}

void Nitro::setPotencia(double x){this->potencia=x;}