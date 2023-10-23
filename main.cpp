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

 Item * carro1 = new Vehiculo();
 carro1->setId("1111");
 carro1->setNombre("V1");
 carro1->setPotencia(250);
 carro1->setPrecio(120000);
 carro1->setTraccion(12);
 carro1->setVelocidad(259);



 Lista<Decoraciones>*garaje= new Lista<Decoraciones>();
 garaje->agregar(carro1);

 pla->setGaraje(garaje);

 Motor* mot= new Motor();




    std::cout << "Hello, World!" << std::endl;
    return 0;
}
