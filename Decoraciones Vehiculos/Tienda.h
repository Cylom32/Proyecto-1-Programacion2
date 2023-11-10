//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_TIENDA_H
#define DECORADOR_AUTOMOVIL_TIENDA_H

#include "Decoraciones.h"
#include "Lista.h"
#include "Jugador.h"
class Tienda{
private:
    Lista<Decoraciones>* catalogo;
   // Lista<Jugador>*jugadores;
public:
    Tienda();
    virtual ~Tienda();

    virtual string toString();

    Lista<Decoraciones> *getCatalogo() const;

    void setCatalogo(Lista<Decoraciones> *artefactos);

    void agregarArtefactos(Decoraciones*);




    //void agregarJugador(Jugador*);
    //Lista<Jugador> *getJugadores() const;

    //void setJugadores(Lista<Jugador> *jugadores);

    //Jugador* retornarJugador(string id);



};


#endif //DECORADOR_AUTOMOVIL_TIENDA_H
