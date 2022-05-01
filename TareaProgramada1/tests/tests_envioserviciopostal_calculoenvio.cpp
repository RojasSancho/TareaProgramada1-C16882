#include <gtest/gtest.h>
#include "../src/envioServicioPostal.h"

namespace
{
    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De1KgYPrimeraClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 1, 1); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 135.00;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De2KgYSegundaClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 2, 2); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 12.6;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De3KgYTerceraClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 3, 3); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 5.4;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De4KgYPrimeraClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 4, 1); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 202.5;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De5KgYSegundaClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 5, 2); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 23.85;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De6KgYTerceraClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 6, 3); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 5.4;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De9KgYPrimeraClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 9, 1); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 270.00;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De10KgYSegundaClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 10, 2); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 33.75;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De11KgYTerceraClase) {
        //
        EnvioServicioPostal envioServicioPostal(450, 11, 3); 
        
        //
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 5.4;

        //
        EXPECT_FLOAT_EQ(esperada, actual);
    }
}

