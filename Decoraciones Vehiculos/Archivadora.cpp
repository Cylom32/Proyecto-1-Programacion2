//
// Created by gabri on 26/10/2023.
//

#include "Archivadora.h"

Archivadora::Archivadora() {}
Archivadora::Archivadora(const string &ruta) : ruta(ruta) {}

const string &Archivadora::getRuta() const {
    return ruta;
}

void Archivadora::setRuta(const string &ruta) {
    Archivadora::ruta = ruta;
}

Archivadora::~Archivadora() {

}
void Archivadora::guardarListaJugador(Lista<Jugador>* list) {
    // Abre el archivo en modo de escritura, no en modo de agregado
    ofstream salida(ruta);

    if (!salida.is_open()) {
        cerr << "No se pudo abrir el archivo para escritura." << endl;
        return;
    }

    Iterador<Jugador> iter = list->getInicio();

    while (iter.masELementos()) {
        Jugador* actual = *iter;
        actual->guardar(salida);
        ++iter;
    }

    salida.close();
}


Lista<Jugador>* Archivadora::recuperarListaJugador(std::istream& is) {
    Lista<Jugador>* lista = new Lista<Jugador>(); // Crea una nueva lista

    std::string linea;
    while (std::getline(is, linea)) {
        std::istringstream entrada(linea);
        Jugador* jugadorRecuperado = Jugador::obtenerInformacion(entrada);
        if (jugadorRecuperado != nullptr) {
            lista->agregar(jugadorRecuperado);
        }
    }

    return lista;
}

//Para vehiculos;
void Archivadora::guardarListaVehiculo(Lista<Vehiculo>* list){

    ofstream salida(ruta);

    if (!salida.is_open()) {
        cerr << "No se pudo abrir el archivo para escritura." << endl;
        return;
    }

    Iterador<Vehiculo> iter = list->getInicio();

    while (iter.masELementos()) {
        Item* actual = *iter;
        actual->guardar(salida);
        ++iter;
    }

    salida.close();


}

Lista<Vehiculo>* Archivadora::recuperarListaVehiculo(std::istream&is){
    Lista<Vehiculo>* lista = new Lista<Vehiculo>(); // Crea una nueva lista

    std::string linea;
    while (std::getline(is, linea)) {
        std::istringstream entrada(linea);
        Vehiculo* vehiculoRecuperado = Vehiculo::obtenerInformacion(entrada);
        if (vehiculoRecuperado != nullptr) {
            lista->agregar(vehiculoRecuperado);
        }
    }

    return lista;}



//P A R A     L A S      D E C O R A C I O N E S


void Archivadora::guardarListaDecoraciones(Lista<Decoraciones>* list){
    ofstream salida(ruta);

    if (!salida.is_open()) {
        cerr << "No se pudo abrir el archivo para escritura." << endl;
        return;
    }

    Iterador<Decoraciones> iter = list->getInicio();

    while (iter.masELementos()) {
        Item* actual = *iter;
        actual->guardar(salida);
        ++iter;
    }

    salida.close();

}

Lista<Decoraciones>* Archivadora::recuperarListaDecoraciones(std::istream& is){

    Lista<Decoraciones>* lista = new Lista<Decoraciones>(); // Crea una nueva lista

    std::string linea;
    while (std::getline(is, linea)) {
        std::istringstream entrada(linea);
        Decoraciones* decoracionRecuperada = Decoraciones::obtenerInformacion(entrada);
        if (decoracionRecuperada != nullptr) {
            lista->agregar(decoracionRecuperada);
        }
    }

    return lista;
}