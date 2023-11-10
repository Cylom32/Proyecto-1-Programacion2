//
// Created by gabri on 22/10/2023.
//

#include "Vehiculo.h"

Vehiculo::Vehiculo(string pla, string nom,double pre ,int trac, double ve, double pot){

    this->id = pla;
    this->nombre = nom;
    this->precio = pre;
    this->traccion = trac;
    this->velocidad = ve;
    this->potencia = pot;
    this->artefactos = new Lista<Decoraciones>();
    //this->asignado = asig;
}

Vehiculo::Vehiculo(const Vehiculo& otro) {
    this->id = otro.id;
    this->nombre = otro.nombre;
    this->precio = otro.precio;
    this->traccion = otro.traccion;
    this->velocidad = otro.velocidad;
    this->potencia = otro.potencia;
    // Clonar la lista de decoraciones
    this->artefactos = new Lista<Decoraciones>(*otro.artefactos);
}



Vehiculo::~Vehiculo() {  if (this->artefactos != nullptr) delete artefactos;  }

string Vehiculo::getId() {return id;}

void Vehiculo::setId(string x) { this->id = x; }

string Vehiculo::getNombre() { return nombre; }

void Vehiculo::setNombre(string x) { this->nombre = x; }

double Vehiculo::getPrecio() { return precio; }

void Vehiculo::setPrecio(double x) { this->precio = x; }

int Vehiculo::getTraccion() { return traccion; }

void Vehiculo::setTraccion(int x) { this->traccion = x; }

double Vehiculo::getVelocidad() { return this->velocidad; }

void Vehiculo::setVelocidad(double x) { this->velocidad = x; }

double Vehiculo::getPotencia() { return potencia; }

void Vehiculo::setPotencia(double x) { this->potencia = x; }

string Vehiculo::toString() {
    stringstream s;
    s<<"------------ Vehiculo ---------------"<<endl;
    s<<"Id: "<<id<<endl;
    s<<"Nombre: "<<nombre<<endl;
    s<<"Precio: "<<precio<<endl;
    s<<"Traccion: "<<traccion<<endl;
    s<<"Velocidad: "<<velocidad<<endl;
    s << "Potencia: " << potencia << endl;
    s<<"-----   Modificaciones Hechas   ----"<<endl;
    if(artefactos->getInicio() != nullptr){
        s<<artefactos->toString();
    }
    else {
        s<<"Aun no se han hecho modificaciones."<<endl;
    }
    s << "----------------------------------------" << endl;
    return s.str();
}

string Vehiculo::toStringDecoradores() {
    stringstream s;
    s << "------------ Vehiculo ---------------" << endl;
    s << "Nombre: " << nombre << endl;
    s << "Id: " << id << endl;
    s << "Precio: " << precio << endl;
    s << "Traccion: " << traccion << endl;
    s << "Velocidad: " << velocidad << endl;
    s << "Potencia: " << potencia << endl;
    s<<"-----   Modificaciones Hechas   ----"<<endl;
    if(artefactos!= nullptr){
        s<<artefactos->toString();
    }
    else {
        s<<"Aun no se han hecho modificaciones."<<endl;
    } 
    s << "----------------------------------------" << endl;
    return s.str();
}

Item *Vehiculo::getItem() {
    throw new string(" Error de ruta. ");
}

void Vehiculo::setItem(Item *) {
    throw new string(" Error de ruta. ");
}

Lista<Decoraciones> *Vehiculo::getArtefactos() const {
    return artefactos;
}

void Vehiculo::setArtefactos(Lista<Decoraciones> *arte) {
    this->artefactos = arte;
}


void Vehiculo::incremento(Decoraciones* dec) {
    this->setPrecio(precio + dec->getPrecio());
    this->setTraccion(traccion + dec->getTraccion());
    this->setPotencia(potencia + dec->getPotencia());
    this->setVelocidad(velocidad + dec->getVelocidad());
    this->artefactos->agregar(dec);
    dec->setEstado(true);
}


void Vehiculo::elimina(Decoraciones* dec){
    this->setPrecio(this->precio - dec->getPrecio());
    this->setTraccion(this->traccion - dec->getTraccion());
    this->setPotencia(this->potencia - dec->getPotencia());
    this->setVelocidad(this->velocidad - dec->getVelocidad());
    this->artefactos->eliminar(dec);

}


Vehiculo* Vehiculo::obtenerInformacion(std::istream& is){

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
        return new Vehiculo(id, nombre, precio,traccion,velocidad,potencia);
    }

    throw std::runtime_error("Error al obtener la informacion del vehiculo");
 }


void Vehiculo::guardar(std::ostream& os) const{
    os << id <<'\t'<<nombre<<'\t'<<precio<<'\t'<<traccion<<'\t'<<velocidad<<'\t'<<potencia<<'\n';
 }






