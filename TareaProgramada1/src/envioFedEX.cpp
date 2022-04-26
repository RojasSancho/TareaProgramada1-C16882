#include "envioFedEX.h"

using namespace std;

EnvioFedEX::EnvioFedEX(int distancia, int peso) {

    this->distancia = distancia;
    this->peso = peso;
}

float EnvioFedEX::calculoEnvio() {

    float costoEnvio = 0;
    if(this->distancia > 500) {

        costoEnvio = costoBase + 15.00;
    }

    if(this->peso > 10) {

        costoEnvio = costoBase + 10.00;
    }

    return costoEnvio;
}

