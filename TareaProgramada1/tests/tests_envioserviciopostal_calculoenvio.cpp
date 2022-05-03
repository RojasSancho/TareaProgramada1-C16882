#include <gtest/gtest.h>
#include "../src/envioServicioPostal.h"

namespace
{
    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De1KgYPrimeraClase) {

        // Arrange
        EnvioServicioPostal envioServicioPostal(450, 1, 1); 
        
        // Act
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 135.00;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De2KgYSegundaClase) {

        // Arrange
        EnvioServicioPostal envioServicioPostal(450, 2, 2); 
        
        // Act
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 12.6;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De3KgYTerceraClase) {

        // Arrange
        EnvioServicioPostal envioServicioPostal(450, 3, 3); 
        
        // Act
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 5.4;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De4KgYPrimeraClase) {

        // Arrange
        EnvioServicioPostal envioServicioPostal(450, 4, 1); 
        
        // Act
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 202.5;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De5KgYSegundaClase) {

        // Arrange
        EnvioServicioPostal envioServicioPostal(450, 5, 2); 
        
        // Act
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 23.85;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De6KgYTerceraClase) {

        // Arrange
        EnvioServicioPostal envioServicioPostal(450, 6, 3); 
        
        // Act
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 5.4;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De9KgYPrimeraClase) {

        // Arrange
        EnvioServicioPostal envioServicioPostal(450, 9, 1); 
        
        // Act
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 270.00;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De10KgYSegundaClase) {

        // Arrange
        EnvioServicioPostal envioServicioPostal(450, 10, 2); 
        
        // Act
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 33.75;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Test_EnvioServicioPostal_CalculoEnvio, Test_De11KgYTerceraClase) {

        // Arrange
        EnvioServicioPostal envioServicioPostal(450, 11, 3); 
        
        // Act
        float actual = envioServicioPostal.calculoEnvio();
        float esperada = 5.4;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);
    }
}