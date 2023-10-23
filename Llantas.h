//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_LLANTAS_H
#define DECORADOR_AUTOMOVIL_LLANTAS_H

#include "Decoraciones.h"
class Llantas: public  Decoraciones{
public:
    Llantas();
    Llantas(Item*);
    virtual~Llantas();

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
};


#endif //DECORADOR_AUTOMOVIL_LLANTAS_H
