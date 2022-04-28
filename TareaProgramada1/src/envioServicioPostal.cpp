#include "envioServicioPostal.h"

using namespace std;

EnvioServicioPostal::EnvioServicioPostal(int distancia, int peso, int tipoDeClase) {

    this->distancia = distancia;
    this->peso = peso;
    this->tipoDeClase = tipoDeClase;
}

float EnvioServicioPostal::calculoEnvio() {

    float costoEnvio = 0;
    if((this->peso > 0) && (this->peso <= 3)) { //Caso de 0-3 kg 

        switch(this->tipoDeClase) {

            case 1: 
                costoEnvio = this->distancia * 0.300; //En primera clase
            
            case 2:
                costoEnvio = this->distancia * 0.0280; //En segunda clase

            case 3:
                costoEnvio = this->distancia * 0.0120; //En tercera clase
        }

    } else if((this->peso >= 4) && (this->peso <= 8)) { //Caso de 4-8 kg

        switch(this->tipoDeClase) {

            case 1: 
                costoEnvio = this->distancia * 0.450;
            
            case 2:
                costoEnvio = this->distancia * 0.0530;

            case 3:
                costoEnvio = this->distancia * 0.0120;
        }

    }

    return costoEnvio;
}

