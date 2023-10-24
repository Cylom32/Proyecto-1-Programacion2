//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_VEHICULO_H
#define DECORADOR_AUTOMOVIL_VEHICULO_H

#include "Decoraciones.h"
#include "Lista.h"
class Vehiculo:public Item {
private:
    Lista<Decoraciones>*artefactos;
public:

    Vehiculo();

    virtual~Vehiculo() ;

    void agregarArtefacto(Decoraciones* obj);
    void eliminarArtefacto(Decoraciones* obj);

//Metodos virtual puros de la clase Item
    virtual string getId() ;

    virtual void setId( string id);

    virtual  string getNombre() ;

    virtual void setNombre( string nombre);

    virtual double getPrecio() ;

    virtual void setPrecio(double precio);

    virtual int getTraccion();

    virtual void setTraccion(int traccion);

    virtual double getVelocidad() ;

    virtual void setVelocidad(double velocidad);

    virtual double getPotencia() ;

    virtual void setPotencia(double potencia);

    friend ostream& operator << (ostream& out, const Vehiculo &o) {
        out << "ID: " << endl << o.id << "Nombre: "<< o.nombre << endl << "Traccion: "<< o.traccion << endl << "Velocidad: "<< o.velocidad << endl << "Potencia: "<< o.potencia << endl << "Precio: " << o.precio;;
        return out;
    }
    virtual string toString();
};


#endif //DECORADOR_AUTOMOVIL_VEHICULO_H
