#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "envio.h"

using namespace std;

class EnvioFedEX : public Envio {

    float costoBase = 35.00; //Costo base del tipo de envio FedEX

    public:
    EnvioFedEX(int distancia, int peso);

    virtual float calculoEnvio();

};

#endif