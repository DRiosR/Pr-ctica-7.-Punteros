/*
c) Matriz Multidimensional
1. Crea una matriz bidimensional de enteros, por ejemplo, 3x3, con algunos
valores.
2. Utiliza apuntadores y la aritmética de direcciones para recorrer la matriz y
realizar las siguientes operaciones:
✓ Calcula la suma de todos los elementos de la matriz.
✓ Encuentra el elemento más grande en la matriz y muestra su valor y
posición.
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