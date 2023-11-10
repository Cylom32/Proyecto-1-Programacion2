//
// Created by gabri on 26/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_ARCHIVADORA_H
#define DECORADOR_AUTOMOVIL_ARCHIVADORA_H
#include <fstream>
#include "Lista.h"
#include "Iterador.h"
#include "Jugador.h"

class Archivadora {
private :
    string ruta;
public:

    Archivadora();

    explicit Archivadora(const string &ruta);

    virtual ~Archivadora();

    //Para los jugadores
    void guardarListaJugador(Lista<Jugador>* list);

    Lista<Jugador>* recuperarListaJugador(std::istream&);

    //Para los vehiculos

    void guardarListaVehiculo(Lista<Vehiculo>* list);

    Lista<Vehiculo>* recuperarListaVehiculo(std::istream&);


    const string &getRuta() const;

    void setRuta(const string &ruta);


    //Para las decoraciones

    void guardarListaDecoraciones(Lista<Decoraciones>* list);

    Lista<Decoraciones>* recuperarListaDecoraciones(std::istream&);


};


#endif //DECORADOR_AUTOMOVIL_ARCHIVADORA_H
