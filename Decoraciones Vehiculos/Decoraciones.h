//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_DECORACIONES_H
#define DECORADOR_AUTOMOVIL_DECORACIONES_H

#include "Item.h"
class Decoraciones: public Item {
protected:
    bool estado;
    Item* ptrItem;
public:

    Decoraciones(string="",string="",double=0.0,int=0 ,double=0.0,double=0.0);

    virtual~Decoraciones();

    //Metodos virtual puros de la clase Item
    virtual string getId() ;

    virtual void setId( string id) ;

    virtual  string getNombre() ;

    virtual void setNombre( string nombre) ;

    virtual double getPrecio() ;

    virtual void setPrecio(double precio) ;

    virtual int getTraccion() ;

    virtual void setTraccion(int traccion) ;

    virtual double getVelocidad() ;

    virtual void setVelocidad(double velocidad) ;

    virtual double getPotencia() ;

    virtual void setPotencia(double potencia) ;

    virtual string toString() ;

    virtual Item* getItem() ;

    virtual void setItem(Item*) ;

    bool isEstado() const;

    void setEstado(bool estado);

    static Decoraciones* obtenerInformacion(std::istream& is);
    virtual  void guardar(std::ostream& os) const;


};


#endif //DECORADOR_AUTOMOVIL_DECORACIONES_H
