#include <gtest/gtest.h>
#include "../src/envioServicioPostal.h"

namespace
{
    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De0A3KgYPrimeraClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 1, 1); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 135.00;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }
}
