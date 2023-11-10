#include <iostream>
#include "Vehiculo.h"
#include "Motor.h"
#include "Llantas.h"
#include "Nitro.h"
#include "Jugador.h"
#include "Lista.h"
#include "Tienda.h"
#include "Archivadora.h"

////Proyecto #1 programacion 2
////Estudiantes:
//// Gabriel Chavarría Calero (118770145)
//// Rodney Morera Scott (402640339)
//// Gabriel Jimenez Navarro (118990637)


int main() {

////------  Recuperacion del Jugador ------\\\\

Archivadora archivadora("jugadores.txt");
ifstream archivoEntrada(archivadora.getRuta());
Lista<Jugador>* listaRecuperada = archivadora.recuperarListaJugador(archivoEntrada);

Jugador* jugadorCopia=listaRecuperada->retornar("111");





////------  Recuperacion de los Vehiculos ------\\\\

Archivadora archivadora2("Vehiculos.txt");
ifstream archivoEntrada1(archivadora2.getRuta());
Lista<Vehiculo>* garajeRecuperado=archivadora2.recuperarListaVehiculo(archivoEntrada1);


Vehiculo* carro1 = garajeRecuperado->retornar("V1");
Vehiculo* carro2 = garajeRecuperado->retornar("V2");
Vehiculo* carro3 = garajeRecuperado->retornar("V3");


////Agregar los vehiculos al garaje del Jugador
jugadorCopia->agregarItem(carro1);
jugadorCopia->agregarItem(carro2);
jugadorCopia->agregarItem(carro3);


//Mostrando la informacion del jugador con los vehiculos del garaje
//cout<<jugadorCopia->toString()<<endl;




////------  Recuperacion de las decoraciones ------\\\\

Archivadora archivadora3("Decoraciones.txt");

ifstream archivoEntrada2(archivadora3.getRuta());
Lista<Decoraciones>* decoracionesRecuperada=archivadora3.recuperarListaDecoraciones(archivoEntrada2);




//Para la lista
Decoraciones* arte1 =decoracionesRecuperada->retornar("M1");
Decoraciones* arte2 = decoracionesRecuperada->retornar("M2");
Decoraciones* arte3 = decoracionesRecuperada->retornar("LL1");
Decoraciones* arte4 = decoracionesRecuperada->retornar("LL2");
Decoraciones* arte5 = decoracionesRecuperada->retornar("LL3");
Decoraciones* arte6 = decoracionesRecuperada->retornar("N1");
Decoraciones* arte7 = decoracionesRecuperada->retornar("N2");
Decoraciones* arte8 = decoracionesRecuperada->retornar("N3");


//Creacion de la clase Tienda
Tienda * store = new Tienda();

store->agregarArtefactos(arte1);
store->agregarArtefactos(arte2);
store->agregarArtefactos(arte3);
store->agregarArtefactos(arte4);
store->agregarArtefactos(arte5);
store->agregarArtefactos(arte6);
store->agregarArtefactos(arte7);
store->agregarArtefactos(arte8);



cout << " ---------------------- FIN TIENDA ------------------------- " << endl << endl;

cout << "Paso #1: Muestre en pantalla todos los vehiculos del jugador sin decoraciones " << endl << endl;
cout << jugadorCopia->toString() << endl;
cout << " ------------------------------- FIN PASO #1 ----------------------------------------- " << endl << endl;



//// Al vehículo V1 le debe agregar las llantas Ll1 y el motor M2
    carro1->incremento(arte3); //arte3->setEstado(true);
    carro1->incremento(arte2); //arte2->setEstado(true);


//// Al vehículo V2 se le agrega: El nitro N3 y Las Llantas Ll3

    carro2->incremento(arte8); //arte8->setEstado(true);
    carro2->incremento(arte5); //arte5->setEstado(true);


//// Al vehículo V3 se le agrega: El motor M1 y el Nitro N1
    // Con lista
    carro3->incremento(arte1); //arte1->setEstado(true);
    carro3->incremento(arte6); //arte6->setEstado(true);

    cout << "Paso #2: Muestre nuevamente en pantalla todos los vehiculos ahora ya con sus decoraciones asignadas. " << endl << endl;
   cout << jugadorCopia->toString() << endl;


cout << " ------------------------------- FIN PASO #2 ----------------------------------------- " << endl << endl;
cout<<"Removiendo las decoraciones de los carros."<<endl;
// Remueva todas las decoraciones
    carro1->elimina(arte3);
    carro1->elimina(arte2);

    carro2->elimina(arte8);
    carro2->elimina(arte5);

    carro3->elimina(arte1);
    carro3->elimina(arte6);
cout<<"Las decoraciones han sido eliminadas con exito! ."<<endl<<endl;

    cout << "Paso #3: Muestre los vehiculos sin decoraciones. " << endl << endl;
    cout << jugadorCopia->toString() << endl;
    cout << " ------------------------------- FIN PASO #3 ----------------------------------------- " << endl;

    delete jugadorCopia;

system("pause");
return 0;
}











