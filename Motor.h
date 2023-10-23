//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_MOTOR_H
#define DECORADOR_AUTOMOVIL_MOTOR_H

#include "Decoraciones.h"
class Motor: public Decoraciones{
public:

    Motor();
    Motor(Item*);

    virtual ~Motor() ;

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


#endif //DECORADOR_AUTOMOVIL_MOTOR_H
