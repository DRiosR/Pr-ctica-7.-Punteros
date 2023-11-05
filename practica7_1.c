/*
a) Argumentos en la Línea de Comandos
1. Crea un programa que tome dos números enteros como argumentos desde
la línea de comandos.
2. Utiliza apuntadores para capturar estos argumentos y realizar las siguientes
operaciones:
✓ Suma los dos números y muestra el resultado.
✓ Resta el segundo número del primero y muestra el resultado.
✓ Multiplica los dos números y muestra el resultado.
✓ Divide el primer número por el segundo y muestra el resultado.
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
