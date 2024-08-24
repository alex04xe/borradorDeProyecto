#pragma once
#include <iostream>
using namespace std;

class Sala {
private:
    int numero;
    int cantidadButacas;
    double precio;
    bool** butacas;

public:
    Sala(int numero, int cantidadButacas, double precio);
    ~Sala();
};