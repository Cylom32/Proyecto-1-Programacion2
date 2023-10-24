//
// Created by gabri on 22/10/2023.
//

#include "Motor.h"

Motor::Motor(Item* dec) {
    this->ptrItem=dec;
}
Motor::Motor() {this->ptrItem= nullptr;}

Motor::~Motor() {

}

string Motor::getId() {return id; }

 void Motor::setId( string x){this->id=x;}

  string Motor::getNombre() {return nombre;}

 void Motor::setNombre( string x){this->nombre=x;}

 double Motor::getPrecio() {return precio;}

 void Motor::setPrecio(double x){this->precio=x;}

 int Motor::getTraccion(){return traccion;}

 void Motor::setTraccion(int x){this->traccion=x;}

 double Motor::getVelocidad() {return velocidad;}

 void Motor::setVelocidad(double x){this->velocidad=x;}

 double Motor::getPotencia() {return potencia;}

 void Motor::setPotencia(double x){this->potencia=x;}


string Motor::toString(){
    stringstream s;
    s<<"-------Informacion del motor -------"<<endl;
    s<<"Nombre: "<<"    "<<endl;
    s<<"Potencia: "<<potencia<<endl;
    s<<"------------------------------------------"<<endl;
    return s.str();
}

