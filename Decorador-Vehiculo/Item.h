//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_ITEM_H
#define DECORADOR_AUTOMOVIL_ITEM_H
#include "Utilidades.h"

class Item {
public:
    //Atributos publicos
    string id;
    string nombre;
    double precio;
    int traccion;
    double velocidad;
    double potencia;

    virtual ~Item();

    virtual string getId() =0;

    virtual void setId( string id)=0;

    virtual  string getNombre() =0;

    virtual void setNombre( string nombre)=0;

    virtual double getPrecio() =0;

    virtual void setPrecio(double precio)=0;

    virtual int getTraccion()=0;

    virtual void setTraccion(int traccion)=0;

    virtual double getVelocidad() =0;

    virtual void setVelocidad(double velocidad)=0;

    virtual double getPotencia() =0;

    virtual void setPotencia(double potencia)=0;


};


#endif //DECORADOR_AUTOMOVIL_ITEM_H
