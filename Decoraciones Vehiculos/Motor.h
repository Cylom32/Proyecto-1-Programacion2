//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_MOTOR_H
#define DECORADOR_AUTOMOVIL_MOTOR_H

#include "Decoraciones.h"
#include "Vehiculo.h"
class Motor: public Decoraciones{
public:
    Motor(string = "", string = "", double = 0.0, double = 0.0/*, Item* = nullptr*/);

    virtual ~Motor() ;

    //Metodos virtual puros de la clase Item
    virtual string getId();

    virtual void setId(string);

    virtual string getNombre();

    virtual void setNombre(string);

    virtual double getPrecio();

    virtual void setPrecio(double);

    virtual int getTraccion();

    virtual void setTraccion(int);

    virtual double getVelocidad();

    virtual void setVelocidad(double);

    virtual double getPotencia();

    virtual void setPotencia(double);



    friend ostream& operator << (ostream& out, const Motor &o) {
        out << "ID: " << endl << o.id << "Nombre: "<< o.nombre << endl << "Potencia: "<< o.potencia << endl << "Precio: " << o.precio;
        return out;
    }
    virtual string toString();

};


#endif //DECORADOR_AUTOMOVIL_MOTOR_H
