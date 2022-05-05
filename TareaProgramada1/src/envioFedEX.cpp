#include "envioFedEX.h"

using namespace std;

EnvioFedEX::EnvioFedEX(int distancia, int peso) {

    this->distancia = distancia;
    this->peso = peso;
}

float EnvioFedEX::calculoEnvio() {

    float costoEnvio = 35.00;
    if(this->distancia > 500) { // Si la distancia es mayor a 500 km

        costoEnvio = costoEnvio + 15.00;
    }

    if(this->peso > 10) { // Si el peso es mayor a 10 kg

        costoEnvio = costoEnvio + 10.00;
    }

    return costoEnvio;
}

