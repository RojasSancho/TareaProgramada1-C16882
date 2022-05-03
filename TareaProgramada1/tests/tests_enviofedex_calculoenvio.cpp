#include <gtest/gtest.h>
#include "../src/envioFedEX.h"

namespace
{
    TEST(Test_EnvioFedex_CalculoEnvio, Test_DistanciaMayorA500YPesoMenorOIgualA10) {

        // Arrange
        EnvioFedEX envioFedEX(650,8);


        // Act
        float actual = envioFedEX.calculoEnvio();
        float esperada = 50.00;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);

    }

    TEST(Test_EnvioFedex_CalculoEnvio, Test_DistanciaMayorA500YPesoMayorA10) {

        // Arrange
        EnvioFedEX envioFedEX(510,17);


        // Act
        float actual = envioFedEX.calculoEnvio();
        float esperada = 60.00;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);

    }

    TEST(Test_EnvioFedex_CalculoEnvio, Test_DistanciaMenorOIgualA500YPesoMenorOIgualA10) {

        // Arrange
        EnvioFedEX envioFedEX(370,4);


        // Act
        float actual = envioFedEX.calculoEnvio();
        float esperada = 35.00;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);

    }

    TEST(Test_EnvioFedex_CalculoEnvio, Test_DistanciaMenorOIgualA500YPesoMayorA10) {
        
        // Arrange 
        EnvioFedEX envioFedEX(475,27);


        // Act
        float actual = envioFedEX.calculoEnvio();
        float esperada = 45.00;

        // Assert
        EXPECT_FLOAT_EQ(esperada, actual);

    }



}