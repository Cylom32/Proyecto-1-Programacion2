//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_DECORACIONES_H
#define DECORADOR_AUTOMOVIL_DECORACIONES_H

#include "Item.h"
class Decoraciones: public Item {
protected:
    Item* ptrItem;
public:

    //Al parecer por el momento no es necerario un constructor de esta clase
    //Quizas mas adelante se pueda implementar

    virtual~Decoraciones() ;

    //Metodos virtual puros de la clase Item
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


#endif //DECORADOR_AUTOMOVIL_DECORACIONES_H
