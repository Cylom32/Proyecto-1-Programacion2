//
// Created by gabri on 22/10/2023.
//

#include "Jugador.h"

Jugador::Jugador(string _id, string nomb, double din) {
    this->id = _id;
    this->nombre = nomb;
    this->dinero = din;
    this->garaje = new Lista<Vehiculo>();
}

Jugador::~Jugador() {
if (this->garaje!= nullptr) delete garaje;
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

void Jugador::agregarItem(Item* obj){
    this->garaje->agregar(dynamic_cast<Vehiculo*>(obj));
}

ostream &operator<<(ostream &os, const Jugador &jugador) {
    os << "id: " << jugador.id << " nombre: " << jugador.nombre << " dinero: " << jugador.dinero << " garaje: "
       << *jugador.garaje;
    return os;
}


string Jugador::toString(){
    stringstream s;
    s << " ------------- Informacion del Jugador -------------"<<endl;
    s << " Nombre : " << nombre << endl;
    s << " Id: " << id << endl;
    s << " Dinero: " << dinero << endl;
    s << " ---- Informacion del Garaje del Jugador ---- " << endl;
    if (this->garaje != nullptr) s << this->garaje->toString() << endl;
    else
        s<<"Aun no tiene carros disponibles."<<endl;
    return s.str();
}


string  Jugador::toStringJugador(){ stringstream s;
    s << " ------------- Informacion del Jugador -------------"<<endl;
    s << " Nombre : " << nombre << endl;
    s << " Id: " << id << endl;
    s << " Dinero: " << dinero << endl;

return s.str();
}


Jugador* Jugador::obtenerInformacion(std::istream& is) {
    std::string id,nombre, dinero_str;

    if (std::getline(is, id, '\t') &&
        std::getline(is, nombre, '\t') &&
        std::getline(is, dinero_str, '\n')) {

        double dinero = std::stod(dinero_str);
        return new Jugador(nombre, id, dinero);
    }

    throw std::runtime_error("Error al obtener la informacion del jugador");
}



void Jugador::guardar(std::ostream& os) const{
    os << id <<'\t'<<nombre<<'\t'<<dinero<<'\n';
}



