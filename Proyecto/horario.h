#pragma once
#include <iostream>
using namespace std;

class Horario {
private:
    string fecha;
    string horaInicio;
    string horaFin;

public:
    Horario(string fecha, string horaInicio, string horaFin);
};