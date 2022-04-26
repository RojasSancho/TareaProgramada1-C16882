#ifndef ENVIO_H
#define ENVIO_H

using namespace std;

class Envio {

    //Privado

    protected:
    int distancia;
    int peso;

    public:
    virtual float calculoEnvio() = 0;

    virtual int obtenerDistancia();
    
    virtual int obtenerPeso();

};

#endif