cmake_minimum_required(VERSION 3.26)
project(Decorador_Automovil)

set(CMAKE_CXX_STANDARD 17)

add_executable(Decorador_Automovil main.cpp
        Utilidades.h
        Nodo.h
        Lista.h
        Iterador.h
        Item.cpp
        Item.h
        Tienda.cpp
        Tienda.h
        Decoraciones.cpp
        Decoraciones.h
        Motor.cpp
        Motor.h
        Llantas.cpp
        Llantas.h
        Nitro.cpp
        Nitro.h
        Vehiculo.cpp
        Vehiculo.h
        Jugador.cpp
        Jugador.h)
