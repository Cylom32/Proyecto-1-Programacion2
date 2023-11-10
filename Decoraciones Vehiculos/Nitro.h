//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_NITRO_H
#define DECORADOR_AUTOMOVIL_NITRO_H
#include "Decoraciones.h"

class Nitro : public  Decoraciones{
public:
    Nitro(string = "", string = "", double = 0.0, double = 0.0/*, Item* = nullptr*/);

    virtual~Nitro();

    //Metodos virtual puros de la clase Item
    virtual string getId() ;

    virtual void setId(string);

    virtual  string getNombre() ;

    virtual void setNombre(string);

    virtual double getPrecio() ;

    virtual void setPrecio(double);

    virtual int getTraccion();

    virtual void setTraccion(int);

    virtual double getVelocidad() ;

    virtual void setVelocidad(double);

    virtual double getPotencia() ;

    virtual void setPotencia(double);



    friend ostream& operator << (ostream& out, const Nitro &o) {
        out << "ID: " << endl << o.id << "Nombre: "<< o.nombre << endl << "Velocidad: "<< o.velocidad << endl
        << "Precio: " << o.precio<<endl;
        return out;
    }
    virtual string toString();


};
#endif //DECORADOR_AUTOMOVIL_NITRO_H
