#include <gtest/gtest.h>
#include "../src/envioFedEX.h"

namespace
{
    TEST(Test_EnvioFedex_CalculoEnvio, Test_DistanciaMayorA500YPesoMenorA10)
    
    {
        //
        EnvioFedEX envioFedEX(501,10);


        //
        float actual = envioFedEX.calculoEnvio();
        float esperada = 50.00;

        //
        EXPECT_FLOAT_EQ(esperada, actual);

    }

}