#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float num1, num2;

        printf("CALCULADORA\n Ingrese los numeros para realizar las operaciones disponibles\n Primer numero: \n");
        scanf("%f", &num1);
        printf("Segundo numero: \n");
        scanf("%f", &num2);

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A= %.2f)\n",num1);
        printf("2- Ingresar 2do operando (B= %.2f)\n",num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");


        printf("Ingrese la opcion correspondiente a la operacion deseada: \n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Esta no es una operacion. \n");
                break;
            case 2:
                printf("Esta no es una operacion. \n");
                break;
            case 3:
                resSuma(num1, num2);
                break;
            case 4:
                resResta(num1, num2);
                break;
            case 5:
                resDivis(num1, num2);
                break;
            case 6:
                resMulti (num1, num2);
                break;
            case 7:
                factorial(num1);
                break;
            case 8:
                resSuma (num1,num2);
                resResta (num1, num2);
                resDivis(num1, num2);
                resMulti(num1, num2);
                factorial(num1);
                break;
            case 9:
                seguir = 'n';
                break;
        }


    return 0;
}
}
