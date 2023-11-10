//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_ITEM_H
#define DECORADOR_AUTOMOVIL_ITEM_H
#include "Utilidades.h"

class Item {
protected:
    string id;
    string nombre;
    double precio;
    int traccion;
    double velocidad;
    double potencia;
public:
    virtual ~Item();

    virtual string getId() = 0;

    virtual void setId( string id) = 0;

    virtual  string getNombre() = 0;

    virtual void setNombre(string nombre) = 0;

    virtual double getPrecio() = 0;

    virtual void setPrecio(double precio) = 0;

    virtual int getTraccion() = 0;

    virtual void setTraccion(int traccion) = 0;

    virtual double getVelocidad() = 0;

    virtual void setVelocidad(double velocidad) = 0;

    virtual double getPotencia() = 0;

    virtual void setPotencia(double potencia) = 0;

    virtual Item* getItem() = 0;

    virtual void setItem(Item*) = 0;

    friend ostream& operator << (ostream& out, const Item &o) {
        out << "ID: " << endl << o.id << "Nombre: "<< o.nombre << endl << "Traccion: "<< o.traccion << endl << "Velocidad: "<< o.velocidad << endl << "Potencia: "<< o.potencia << endl << "Precio: " << o.precio;;
        return out;
    }
    virtual string toString() = 0;


    virtual void guardar(std::ostream& os) const=0 ;
};


#endif //DECORADOR_AUTOMOVIL_ITEM_H
