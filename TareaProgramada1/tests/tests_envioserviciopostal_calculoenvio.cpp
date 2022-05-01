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

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De0A3KgYSegundaClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 1, 2); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 12.6;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De0A3KgYTerceraClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 1, 3); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 5.4;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De4A8KgYPrimeraClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 7, 1); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 202.5;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }
}
