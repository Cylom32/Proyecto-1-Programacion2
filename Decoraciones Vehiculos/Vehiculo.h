//
// Created by gabri on 22/10/2023.
//

#ifndef DECORADOR_AUTOMOVIL_VEHICULO_H
#define DECORADOR_AUTOMOVIL_VEHICULO_H

#include "Decoraciones.h"
#include "Lista.h"
class Vehiculo:public Item {
 private:
    Lista<Decoraciones>* artefactos;
public:

    Vehiculo(string = "", string = "",double = 0.0,int = 0 , double = 0.0, double = 0.0 );

    virtual~Vehiculo() ;

    Vehiculo(const Vehiculo&);


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
    string toStringDecoradores();

    Lista<Decoraciones> *getArtefactos() const;

    void setArtefactos(Lista<Decoraciones> *artefactos);

    virtual Item* getItem();

    virtual void setItem(Item*);
    void incremento(Decoraciones*);
    void elimina(Decoraciones*);//decremento
    static  Vehiculo* obtenerInformacion(std::istream& is);
    virtual  void guardar(std::ostream& os) const;



};


#endif //DECORADOR_AUTOMOVIL_VEHICULO_H
