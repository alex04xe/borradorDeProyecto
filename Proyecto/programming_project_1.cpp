#include <iostream>
#include "programming_project_1.h"
using namespace std;

int main()
{
    int opcionPrincipal, opcionArchivo;
    do {
        showMainMenu();
        cin >> opcionPrincipal;
        switch (opcionPrincipal) {
        case 1:
            showMenuFile();
            cin >> opcionArchivo;
            switch (opcionArchivo) {
            case 1:
                showAcercaDe();
                break;
            case 2:
                cout << "Saliendo del sistema..." << endl;
                opcionPrincipal = 5;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
            }
            break;
        case 2:
            cout << "Mantenimiento seleccionado" << endl;
            break;
        case 3:
            cout << "Reserva seleccionada" << endl;
            break;
        case 4:
            cout << "Venta seleccionada" << endl;
            break;
        case 5:
            cout << "Saliendo del sistema..." << endl;
            break;
        default:
            cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcionPrincipal != 5);
    return 0;
}