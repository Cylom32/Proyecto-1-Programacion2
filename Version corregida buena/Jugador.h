//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_JUGADOR_H
#define DECORADOR_AUTOMOVIL_JUGADOR_H
#include"Lista.h"
#include "Vehiculo.h"
#include "Item.h"
class Jugador {
private:
    string id;
    string nombre;
    double dinero;
    Lista<Item>*garaje;
public:
    Jugador();

    Jugador(const string &id, const string &nombre, double dinero);

    virtual ~Jugador();

    const string &getId() const;

    void setId(const string &id);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    double getDinero() const;

    void setDinero(double dinero);

    Lista<Item> *getGaraje() const;

    void setGaraje(Lista<Item> *garaje);
};


#endif //DECORADOR_AUTOMOVIL_JUGADOR_H
