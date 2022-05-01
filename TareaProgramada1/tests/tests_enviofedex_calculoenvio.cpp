#include <gtest/gtest.h>
#include "../src/envioFedEX.h"

namespace
{
    TEST(Test_EnvioFedex_CalculoEnvio, Test_DistanciaMayorA500YPesoMenorOIgualA10)
    
    {
        //
        EnvioFedEX envioFedEX(650,8);


        //
        float actual = envioFedEX.calculoEnvio();
        float esperada = 50.00;

        //
        EXPECT_FLOAT_EQ(esperada, actual);

    }

    TEST(Test_EnvioFedex_CalculoEnvio, Test_DistanciaMayorA500YPesoMayorA10)
    
    {
        //
        EnvioFedEX envioFedEX(510,17);


        //
        float actual = envioFedEX.calculoEnvio();
        float esperada = 60.00;

        //
        EXPECT_FLOAT_EQ(esperada, actual);

    }

    TEST(Test_EnvioFedex_CalculoEnvio, Test_DistanciaMenorOIgualA500YPesoMenorOIgualA10)
    
    {
        //
        EnvioFedEX envioFedEX(370,4);


        //
        float actual = envioFedEX.calculoEnvio();
        float esperada = 35.00;

        //
        EXPECT_FLOAT_EQ(esperada, actual);

    }

    TEST(Test_EnvioFedex_CalculoEnvio, Test_DistanciaMenorOIgualA500YPesoMayorA10)
    
    {
        //
        EnvioFedEX envioFedEX(475,27);


        //
        float actual = envioFedEX.calculoEnvio();
        float esperada = 45.00;

        //
        EXPECT_FLOAT_EQ(esperada, actual);

    }



}