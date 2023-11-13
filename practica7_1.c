/*
   Nombre del archivo: practica7_1.c
   Autor: Daniel Rios Rodriguez
   Fecha de creación: 10 de Noviembre de 2023
   Descripción:Este programa toma dos números de punto flotante como argumentos de línea de comandos y realiza operaciones de suma, resta, multiplicación y división,
   mostrando los resultados formateados en la consola..
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float suma;
    float num1;
    float num2;

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    printf("______________________________\n");
    suma = num1 + num2;
    printf("SUMA DE %.0f y %.0f = %.0f\n", num1, num2, suma);
    printf("______________________________\n");
    suma = num2 - num1;
    printf("RESTA DE %.0f y %.0f = %.0f\n", num2, num1, suma);
    printf("______________________________\n");
    suma = num2 * num1;
    printf("MULTIPLICACION DE %.0f y %.0f = %.0f\n", num1, num2, suma);
    printf("______________________________\n");
    suma = (num1 / num2);
    printf("DIVISION DE %.0f y %.0f = %f\n", num1, num2, suma);
    printf("______________________________\n");

    return 0;
}
