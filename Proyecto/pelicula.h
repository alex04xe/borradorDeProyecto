#pragma once
#include <iostream>
using namespace std;

class Pelicula {
private:
    string nombre;
    int anio = 5;
    int duracion=10;
    string pais;
    string resena;

public:
    Pelicula(string nombre, int anio, int duracion, string pais, string resena);

};