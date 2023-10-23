//
// Created by gabri on 22/10/2023.
//

#include "Jugador.h"

Jugador::Jugador() {this->garaje=new Lista<Vehiculo>();}

Jugador::Jugador(const string &id, const string &nombre, double dinero) : id(id), nombre(nombre), dinero(dinero) {
    this->garaje= new Lista<Vehiculo>();
}

Jugador::~Jugador() {
if(this->garaje!= nullptr)
    {delete garaje; }
}

const string &Jugador::getId() const {
    return id;
}

void Jugador::setId(const string &id) {
    Jugador::id = id;
}

const string &Jugador::getNombre() const {
    return nombre;
}

void Jugador::setNombre(const string &nombre) {
    Jugador::nombre = nombre;
}

double Jugador::getDinero() const {
    return dinero;
}

void Jugador::setDinero(double dinero) {
    Jugador::dinero = dinero;
}

Lista<Vehiculo> *Jugador::getGaraje() const {
    return garaje;
}

void Jugador::setGaraje(Lista<Vehiculo> *garaje) {
    Jugador::garaje = garaje;
}

