/*
            ***** MANEJO DE CONDICIONES *****

    El presente código implementa el uso de condiciones anidadas con la estructura
    switch case con el fin de determinar si una fecha es valida o no partiendo de
    los datos ingresados por el usuario y calculando si el año es biciesto.

    Fecha: 17-Febrero-2024
    Versión: 1.0

*/

#include <stdio.h>                             // Libreria estandar de entrada y salida


// DECLARACIÓN DE CONSTANTES PARA EL NÚMERO DEL MES Y LA CANTIDAD DE DIAS DE LOS MISMOS
#define MIN_DIAS 28
#define TREINTA_DIAS 30
#define DIA_BICIESTO 29
#define MAX_DIAS 31
#define ENERO 1
#define FEBRERO 2
#define MARZO 3
#define ABRIL 4
#define MAYO 5
#define JUNIO 6
#define JULIO 7
#define AGOSTO 8
#define SEPTIEMBRE 9
#define OCTUBRE 10
#define NOVIEMBRE 11
#define DICIEMBRE 12

// Función Principal
int main()
{
    // Declaración de variables de tipo entero para los valores a solicitar
    int dia;
    int mes;
    int anio;

   // Instrucciones del programa
    printf("INGRESA LOS DATOS EN NUMEROS ENTEROS");
    printf("\n MES     NUMERO");
    printf("\nEnero      1");
    printf("\nFebrero    2");
    printf("\nMarzo      3");
    printf("\nAbril      4");
    printf("\nMayo       5");
    printf("\nJunio      6");
    printf("\nJulio      7");
    printf("\nAgosto     8");
    printf("\nSeptiembre 9");
    printf("\nOctubre   10");
    printf("\nNoviembre 11");
    printf("\nDiciembre 12");

    // Ingreso de datos
    printf("\nIngresa el dia: ");
    scanf("%i", &dia);
    printf("\nIngresa el Mes: ");
    scanf("%i",&mes);
    printf("\nIngresa el anio: ");
    scanf("%i",&anio);

    // Estructura switch con respecto a los meses
    switch (mes)
    {
        case ENERO:
                    // Instrucciones dentro de los cases
                    if(dia < MAX_DIAS)
                    {
                        printf("Fecha  valida");

                    }
                     else
                     {
                        printf("Fecha no valida");
                     }

            break;  // Fin del caso
        case FEBRERO:

                     if (anio %4 == 0 && anio !=0 || anio %400 == 0)                            // Determina si el año es biciesto
                     {
                         if(dia == DIA_BICIESTO)
                         {
                             printf("Fecha valida");
                         }
                         else
                         {
                             if (dia < MIN_DIAS)
                            {
                                printf("Fecha valida");
                            }
                         }

                     }
                      else
                      {
                          printf("Fecha no valida");
                      }
            break;
        case MARZO:

                    if(dia < MAX_DIAS)
                    {
                        printf("Fecha valida");
                    }
                     else
                     {
                        printf("Fecha no valida");
                     }
            break;
        case ABRIL:

                    if(dia < TREINTA_DIAS)
                    {
                        printf("Fecha valida");
                    }
                     else
                     {
                        printf("Fecha no valida");
                     }
            break;
        case MAYO:

                    if(dia < MAX_DIAS)
                    {
                        printf("Fecha valida");
                    }
                     else
                     {
                        printf("Fecha no valida");
                     }
            break;
        case JUNIO:

                    if(dia < TREINTA_DIAS)
                    {
                         printf("Fecha valida");
                    }
                     else
                     {
                        printf("Fecha no valida");
                     }
            break;
        case JULIO:

                    if(dia < MAX_DIAS)
                    {
                        printf("Fecha valida");
                    }

                     else
                     {
                         printf("Fecha no valida");
                     }
            break;
        case AGOSTO:

                    if(dia < MAX_DIAS)
                    {
                        printf("Fecha valida");
                    }
                     else
                     {
                         printf("Fecha no valida");
                     }
            break;
        case SEPTIEMBRE:

                    if(dia < TREINTA_DIAS)
                    {
                        printf("Fecha valida");
                    }
                     else
                     {
                        printf("Fecha no valida");
                     }
            break;
        case OCTUBRE:

                    if(dia < MAX_DIAS)
                    {
                        printf("Fecha valida");
                    }
                     else
                     {
                         printf("Fecha no valida");
                     }
            break;
        case NOVIEMBRE:

                    if(dia < TREINTA_DIAS)
                    {
                        printf("Fecha valida");
                    }
                     else
                     {
                         printf("Fecha no valida");
                     }
            break;
        case DICIEMBRE:

                    if(dia < MAX_DIAS)
                    {
                        printf("Fecha valida");
                    }
                     else
                     {
                         printf("Fecha no valida");
                     }
            break;
        default:
                    printf("Fecha no valida!");
        break;
    }

    return 0;                                               // Programa terminado con éxito
}
