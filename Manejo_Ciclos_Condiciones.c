/*
            ***** CICLOS Y CONDICIONES *****
            
        Fecha: 20-Febrero-2024
        Versión: 1.0

*/

#include <stdio.h>                                                                                  // Biblioteca estandar de entrada y salida de datos

#define TAMANO_VECTOR 5                                                                             // Constante con el tamaño del vector

int main()                                                                                           // Función Principal
{
    int numeros[TAMANO_VECTOR];                                                                      // Declaración del vector con respecto a la constante
    int buffer;                                                                                      // Variable para almacenar temporalmente

    printf("Ingresa los cinco valores del vector: ");
    fflush(stdin);                                                                                   // Limpieza del buffer de entrada
    scanf("%i %i %i %i %i",&numeros[0],&numeros[1],&numeros[2],&numeros[3],&numeros[4]);             // Ingreso de datos

    //Metodo bubblesort para evaluar los valores del vector
    for (int i=0; i<TAMANO_VECTOR; i++)
    {
        for(int k=0; k<TAMANO_VECTOR; k++)
        {
             if(numeros[k] > numeros[k+1])
            {
                buffer = numeros[k];
                numeros[k]= numeros[k+1];
                numeros[k+1] = buffer;
            }
        }
    }

    // Ciclo for para mostar los valores del vector con iteraciones respecto al tamaño
    for(int i=TAMANO_VECTOR;i>0; i--)
    {
         printf("%i es el valor del vector en la posicion %i del vector \n", numeros[i],i-1);
    }
    return 0;                       // Programa terminado con éxito
}
