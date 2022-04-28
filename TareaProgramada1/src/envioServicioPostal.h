#ifndef ENVIOSERVICIOPOSTAL_H
#define ENVIOSERVICIOPOSTAL_H

#include "envio.h"

using namespace std;

class EnvioServicioPostal : public Envio {

    int tipoDeClase; 

    public:

    EnvioServicioPostal(int distancia, int peso, int tipoDeClase);

    virtual float calculoEnvio();

};

#endif