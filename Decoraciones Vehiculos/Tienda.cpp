//
// Created by gabri on 22/10/2023.
//

#include "Tienda.h"

Tienda::Tienda() {
   this->catalogo = new Lista<Decoraciones>();
}




Tienda::~Tienda() {
if (this->catalogo != nullptr) delete this->catalogo;
}







Lista<Decoraciones> *Tienda::getCatalogo() const {
    return catalogo;
}

void Tienda::setCatalogo(Lista<Decoraciones> *artefactos) {
    Tienda::catalogo = artefactos;
}





void Tienda::agregarArtefactos(Decoraciones*dec){
    this->catalogo->agregar(dec);
}



string Tienda::toString() {
    stringstream s;
    s<<"------ Artefactos disponibles ------"<<endl;
    if (this->catalogo != nullptr) s << catalogo->toString();
    return s.str();
}


//void Tienda::agregarJugador(Jugador*pla){
//    this->jugadores->agregar(pla);
//}
//Lista<Jugador> *Tienda::getJugadores() const {
//    return jugadores;
//}
//
//void Tienda::setJugadores(Lista<Jugador> *jugadores) {
//    Tienda::jugadores = jugadores;
//}
//
//
//Jugador* Tienda::retornarJugador(string id){
//    if(this->jugadores->encontrado(id)== true){
//        this->jugadores->buscar(id);
//    }
//    else return nullptr;
//}