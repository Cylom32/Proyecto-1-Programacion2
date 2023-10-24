//
// Created by gabri on 22/10/2023.
//

#include "Vehiculo.h"



Vehiculo::Vehiculo() {this->artefactos=nullptr;}

Vehiculo::~Vehiculo() {
    if(this->artefactos!=nullptr){
    delete artefactos;
    }
}


void Vehiculo::agregarArtefacto(Decoraciones* obj){
    artefactos->agregar(obj);
}
void Vehiculo::eliminarArtefacto(Decoraciones* obj){
    artefactos->eliminar(obj);
}




string Vehiculo::getId() { return id;}

void Vehiculo::setId( string x){ this->id=x;}

string Vehiculo::getNombre() {return nombre;}

void Vehiculo::setNombre( string x){this->nombre=x;}

double Vehiculo::getPrecio() {return precio;}

void Vehiculo::setPrecio(double x){this->precio=x;}

int Vehiculo::getTraccion(){return traccion;}

void Vehiculo::setTraccion(int x){this->traccion=x;}

double Vehiculo::getVelocidad() {return this->getVelocidad();}

void Vehiculo::setVelocidad(double x){this->velocidad=x;}

double Vehiculo::getPotencia() {return potencia;}

void Vehiculo::setPotencia(double x){this->potencia=x;}

