/*
   Nombre del archivo: practica7_3.c
   Autor: Daniel Rios Rodriguez
   Fecha de creación: 10 de Noviembre de 2023
   Descripción: ste programa en C toma nueve argumentos de línea de comandos y los organiza en una matriz de 3x3. Luego, calcula la suma de todos los elementos de la matriz
   y encuentra el número mayor. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int matriz[3][3], vec[9];
    int i, j, acu = 0, mayor = 0;
    for (i = 0; i < 9; i++)
    {
        vec[i] = atoi(argv[i+1]);
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz[i][j] = vec[3 * i + j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            acu = acu + matriz[i][j];
            if (mayor < matriz[i][j])
            {
                mayor = matriz[i][j];
            }
        }
    }
    printf("suma = %d\n", acu);
    printf("numero mayor = %d\n", mayor);
}