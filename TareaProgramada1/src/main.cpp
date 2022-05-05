#include "envio.h"
#include "envioFedEX.h"
#include "envioServicioPostal.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {

    vector<Envio *> arregloDeEnvios;

    EnvioFedEX* envioPorFedEX1 = new EnvioFedEX(550, 6); // Envio por FedEX de 550 km y con peso de 6 kg
    arregloDeEnvios.push_back(envioPorFedEX1);

    EnvioFedEX* envioPorFedEX2 = new EnvioFedEX(420, 27); // Envio por FedEX de 420 km y con peso de 27 kg
    arregloDeEnvios.push_back(envioPorFedEX2);

    EnvioServicioPostal* envioPorServicioPostal1 = new EnvioServicioPostal(500, 2, 1); // Envio por Servicio Postal de primera clase de 500 km y con peso de 2 kg
    arregloDeEnvios.push_back(envioPorServicioPostal1);

    EnvioServicioPostal* envioPorServicioPostal2 = new EnvioServicioPostal(470, 6, 1); // Envio por Servicio Postal de primera clase de 470 km y con peso de 6 kg
    arregloDeEnvios.push_back(envioPorServicioPostal2);

    EnvioServicioPostal* envioPorServicioPostal3 = new EnvioServicioPostal(470, 12, 1); // Envio por Servicio Postal de primera clase de 470 km y con peso de 12 kg
    arregloDeEnvios.push_back(envioPorServicioPostal3);

    double totalMontoEnvios = 0;

    for (Envio* envio : arregloDeEnvios) {

        totalMontoEnvios += envio->calculoEnvio();   
         
    }

    std::cout << "El monto total final de los envios es de: " << totalMontoEnvios << std::endl;

    delete envioPorServicioPostal1;
    delete envioPorServicioPostal2;
    delete envioPorServicioPostal3;

    delete envioPorFedEX1;
    delete envioPorFedEX2;
}