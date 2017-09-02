#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float resSuma ( float num1, float num2)
{
    float resultado=num1+num2;
    printf("El resultado de la suma es: %.2f\n",resultado);
    return 0;
}

float resResta ( float num1, float num2)
{
    float resultado=num1-num2;
    printf("El resultado de la resta es: %.2f\n",resultado);
    return 0;
}
float resMulti( float num1, float num2)
{
    float resultado=num1*num2;
    printf("El resultado de la multiplicacion es: %.2f\n", resultado);
    return 0;
}
float resDivis (float num1, float num2)
{
    int retorno;
    if (num2==0)
    {
        printf("No se puede dividir por 0\n");
        retorno=-1;
    }
    else
    {
        float resultado=num1/num2;
        printf("El resultado de la division es: %.2f\n", resultado);
        retorno = 0;
    }
return retorno;
}
float factorial (float num1)
{
    float auxFactorial=num1-1;
    float resultado=num1*auxFactorial;
    printf("El resultado del factorial es: %.2f\n", resultado);
    return 0;
}
