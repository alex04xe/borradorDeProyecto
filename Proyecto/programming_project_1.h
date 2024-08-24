#pragma once
#include <iostream>
using namespace std;

void showMainMenu() {
    cout << "=========== CINE 2.0 ===========" << endl;
    cout << "  1) Archivo" << endl;
    cout << "  2) Mantenimiento" << endl;
    cout << "  3) Reserva" << endl;
    cout << "  4) Venta" << endl;
    cout << "  Seleccione una opcion: ";
}

void showMenuFile() {
    cout << endl;
    cout << "  --------Archivo--------" << endl;
    cout << "  1) Acerca de" << endl;
    cout << "  2) Salir" << endl;
    cout << "  Seleccione una opcion : ";
}

void showAcercaDe() {
    cout << endl;
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout << "::          ------ Acerca de ------           ::" << endl;
    cout << "::     Proyecto de Programacion CINE 2.0.     ::" << endl;
    cout << "::  Desarrollado por: Fabian Abarca Espinoza. ::" << endl;
    cout << "::           Curso: Programacion I.           ::" << endl;
    cout << "::     Universidad Nacional, Perez Zeledon.   ::" << endl;
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout << endl;
}