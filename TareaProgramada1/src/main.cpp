#include "envio.h"
#include "envioFedEX.h"
#include "envioServicioPostal.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {

    vector<Envio *> envios;

    EnvioFedEX* envioPorFedEX1 = new EnvioFedEX(550, 6);
    envios.push_back(envioPorFedEX1);

    EnvioFedEX* envioPorFedEX2 = new EnvioFedEX(420, 27);
    envios.push_back(envioPorFedEX2);

    EnvioServicioPostal* envioPorServicioPostal1 = new EnvioServicioPostal(470, 2, 1);
    envios.push_back(envioPorServicioPostal1);

    EnvioServicioPostal* envioPorServicioPostal2 = new EnvioServicioPostal(470, 6, 1);
    envios.push_back(envioPorServicioPostal2);

    EnvioServicioPostal* envioPorServicioPostal3 = new EnvioServicioPostal(470, 12, 1);
    envios.push_back(envioPorServicioPostal3);

    double totalMontoEnvios = 0;


    for (Envio* envio : envios) {

        totalMontoEnvios += envio->calculoEnvio();     
    }

    std::cout << "El monto total final de los envios es de: " << totalMontoEnvios << std::endl;

}