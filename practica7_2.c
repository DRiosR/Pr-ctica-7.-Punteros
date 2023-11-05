/*
b) Ordenación de Palabras
1. Crea un programa que incluya un arreglo de apuntadores a caracteres,
donde cada apuntador apunta a una palabra (por ejemplo, "manzana",
"banana", "cereza", "uva", "naranja").
2. Utiliza apuntadores y la aritmética de direcciones para ordenar las palabras
en orden alfabético.
3. Imprime las palabras ordenadas en la consola.
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
