#pragma once
#include <iostream>
#include "pelicula.h"
#include "sala.h"
#include "horario.h"
using namespace std;

class Reserva {
private:
    static int consecutivoGlobal;
    int consecutivo;
    Pelicula* pelicula;
    Sala* sala;
    Horario* horario;
    int cantidadButacasReservadas;

public:
    Reserva(Pelicula* pelicula, Sala* sala, Horario* horario, int cantidadButacasReservadas);
};