/*
   Nombre del archivo: practica7_2.c
   Autor: Daniel Rios Rodriguez
   Fecha de creación: 10 de Noviembre de 2023
   Descripción: Este programa en C ordena alfabéticamente las palabras proporcionadas como argumentos de línea de comandos utilizando el algoritmo de burbuja
   para ordenamiento de cadenas.
*/
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int numero_de_palabras = 0;
    int *ptr, i, j;
    for (int i = 1; argv[i] != NULL; i++)
    {
        numero_de_palabras++;
    }

    for ( i = 1; i < numero_de_palabras; i++)
    {
        for ( j = 1; j < numero_de_palabras - i + 1; j++)
        {
            if (strcmp(argv[j], argv[j + 1]) > 0)
            {
                char *temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
        }
    }

        printf("palabras ordenadas:\n");

        for (i = 0; i <= numero_de_palabras; i++)
        {
            printf("%s\n", argv[i]);
        }

        return 0;
    }
