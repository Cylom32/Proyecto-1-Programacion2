//
// Created by gabri on 22/10/2023.
//

#include "Jugador.h"

Jugador::Jugador() {this->garaje=new Lista<Item>();}

Jugador::Jugador(const string &id, const string &nombre, double dinero) : id(id), nombre(nombre), dinero(dinero) {
    this->garaje= new Lista<Item>();
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

Lista<Item> *Jugador::getGaraje() const {
    return garaje;
}

void Jugador::setGaraje(Lista<Item> *garaje) {
    Jugador::garaje = garaje;
}

void Jugador::agregarItem( Item* obj){
    this->garaje->agregar(obj);
}

ostream &operator<<(ostream &os, const Jugador &jugador) {
    os << "id: " << jugador.id << " nombre: " << jugador.nombre << " dinero: " << jugador.dinero << " garaje: "
       << *jugador.garaje;
    return os;
}
