#include "envioFedEX.h"

using namespace std;

EnvioFedEX::EnvioFedEX(int distancia, int peso) {

    this->distancia = distancia;
    this->peso = peso;
}

float EnvioFedEX::calculoEnvio() {

    float costoEnvio = 35.00;
    if(this->distancia > 500) {

        costoEnvio = costoEnvio + 15.00;
    }

    if(this->peso > 10) {

        costoEnvio = costoEnvio + 10.00;
    }

    return costoEnvio;
}

