//
// Created by gabri on 22/10/2023.
//

#include "Decoraciones.h"


Decoraciones::Decoraciones(string ced,string nom,double pre,int trac,double veloc,double pot){
    this->id=ced;
    this->nombre=nom;
    this->precio=pre;
    this->traccion=trac;
    this->velocidad=veloc;
    this->potencia=pot;
    this->ptrItem= nullptr;
}

Decoraciones::~Decoraciones() {
    if(this->ptrItem!= nullptr){
        delete this->ptrItem;
    }
}

string Decoraciones::getId() { return id; }

void Decoraciones::setId(string x) { this->id = x; }

string Decoraciones::getNombre() { return nombre; }

void Decoraciones::setNombre(string x) { this->nombre = x; }

//Validaciones de que el puntero item no sea nulo para poder obtener los valores correspondientes en cada caso
double Decoraciones::getPrecio() {
    if (this->ptrItem != nullptr) return this->ptrItem->getPrecio() + this->precio;
    else return this->precio;
}

void Decoraciones::setPrecio(double x) { this->precio = x; }

int Decoraciones::getTraccion() {
    if (this->ptrItem != nullptr) return this->ptrItem->getTraccion() + this->traccion;
    else return this->traccion;
}

void Decoraciones::setTraccion(int x) { this->traccion = x; }

double Decoraciones::getVelocidad() {
    if (this->ptrItem != nullptr) return this->ptrItem->getVelocidad() + this->velocidad;
    else return this->velocidad;
}

void Decoraciones::setVelocidad(double x) { this->velocidad = x; }

double Decoraciones::getPotencia() {
    if (this->ptrItem != nullptr) return this->ptrItem->getPotencia() + this->potencia;
    else return this->potencia;
}

void Decoraciones::setPotencia(double x) { this->potencia = x; }

Item *Decoraciones::getItem() { return this->ptrItem; }

void Decoraciones::setItem(Item *art) {
    if (this->ptrItem != nullptr) delete ptrItem;
    ptrItem = art;
}

string Decoraciones::toString() {
    stringstream s;
    if (this->ptrItem != nullptr) s << ptrItem->toString() << endl;
    s<<"-------Informacion de las Decoraciones -------"<<endl;
    s<<"Id: "<< this->id <<endl;
    s<<"Nombre: "<< this->nombre << endl;
    s<<"Precio: " << this->precio << endl;
    s<<"Traccion: " << this->traccion << endl;
    s<<"Velocidad: " << this->velocidad << endl;
    s<<"Potencia: " << this->potencia << endl;

    s<<"------------------------------------------"<<endl;
    return s.str();
}


 Decoraciones* Decoraciones::obtenerInformacion(std::istream& is){
    std::string id,nombre, precio_str,traccion_str,velocidad_str,potencia_str;

    if (std::getline(is, id, '\t') &&
        std::getline(is, nombre, '\t') &&
        std::getline(is, precio_str, '\t')&&
        std::getline(is, traccion_str, '\t')&&
        std::getline(is, velocidad_str, '\t')&&
        std::getline(is, potencia_str, '\n'))
    {
        double precio = std::stod(precio_str);
        int traccion = std::stoi(traccion_str);
        double velocidad = std::stod(velocidad_str);
        double potencia = std::stod(potencia_str);
        return new Decoraciones(nombre, id, precio,traccion,velocidad,potencia);
    }

    throw std::runtime_error("Error al obtener la informacion de la decoracion");
}

void Decoraciones::guardar(std::ostream& os) const{
    os << id <<'\t'<<nombre<<'\t'<<precio<<'\t'<<traccion<<'\t'<<velocidad<<'\t'<<potencia<<'\n';
}

bool Decoraciones::isEstado() const {
    return estado;
}

void Decoraciones::setEstado(bool estado) {
    Decoraciones::estado = estado;
}

