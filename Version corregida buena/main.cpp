#include <iostream>
#include "Vehiculo.h"
#include "Motor.h"
#include "Llantas.h"
#include "Nitro.h"
#include "Jugador.h"
#include "Lista.h"
int main() {


//Creacion de un jugador
//
    Jugador * pla=new Jugador("1111","Gabriel",5000);

    Vehiculo * carro1 = new Vehiculo();
    carro1->setNombre("Batimovil");
    carro1->setId("1111");
    carro1->setPrecio(2500);

    Motor* motor = new Motor(carro1);
    motor->setNombre("motor1");
    motor->setPotencia(123);
    Llantas* llantas = new Llantas(motor);
    llantas->setNombre("llantas1");
    llantas->setTraccion(456);
    Nitro* nitro = new Nitro(llantas);
    nitro->setNombre("nitro1");
    nitro->setVelocidad(789);

    //cout<<*nitro<<endl;

    Lista<Item>* garaje= new Lista<Item>();
    garaje->agregar(nitro);
    pla->setGaraje(garaje);
    cout<<*pla<<endl;








    return 0;
}
