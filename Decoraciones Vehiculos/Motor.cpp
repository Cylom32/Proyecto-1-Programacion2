//
// Created by gabri on 22/10/2023.
//

#include "Motor.h"
Motor::Motor(string i, string nom, double pot, double pre/*, Item* it*/){
    this->id = i;
    this->nombre = nom;
    this->potencia = pot;
    this->precio = pre;
    //this->ptrItem = it;
}

Motor::~Motor() {
    if (this->ptrItem != nullptr) delete ptrItem;
}

string Motor::getId() { return id; }

void Motor::setId(string x) { this->id = x;}

string Motor::getNombre() { return nombre; }

void Motor::setNombre(string x) { this->nombre = x; }

double Motor::getPrecio() { return  this->precio; }

void Motor::setPrecio(double x) { this->precio = x; }

int Motor::getTraccion() { return  this->traccion; }

void Motor::setTraccion(int x) { this->traccion = x; }

double Motor::getVelocidad() {
    /*if (this->ptrItem != nullptr)*/ return  this->velocidad;
    //else return 0.0;
}

void Motor::setVelocidad(double x) { this->velocidad = x; }

double Motor::getPotencia() { return this->potencia; }

void Motor::setPotencia(double x) { this->potencia=x; }


//}

string Motor::toString() {
    stringstream s;
   // if (this->ptrItem != nullptr) s << ptrItem->toString() << endl;
    s << " -------Informacion del motor ------- " << endl;
    s << " Id: " << id << endl;
    s << " Nombre: " << nombre << endl;
    s << " Potencia: " << potencia << endl;
    s << " Precio: " << precio << endl;
    if (this->estado) s<< "Estado: Asignado. " << endl;
    else s << "Estado: No Asignado. " << endl;
    s << " ------------------------------------- " << endl;
    return s.str();
}



