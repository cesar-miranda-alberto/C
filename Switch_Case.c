/*
    			***** ESTRUCTURA CASE *****
    			
    El presente código tiene como finalidad la implementación de la estructura case 
    para determinar el número que fue seleccionado a partir del valor ingresado por
    el usuario.
    
    Fecha: 09-Octubre-2023
    Version: 1.0
    
*/
#include<stdio.h>                 									 // Libreria Principal de entrada y salida de datos

int main()															 // Función principal
{
  int nu;															 // Declara una variable de tipo entero la cual almacenará el valor ingresado
  
  printf("Ingresa un numero: ");										 // Imprime texto en consola solicitando algún número 
  scanf("%i",&nu);													 // Lee el valor ingresado y lo almacena en la variable correspondiente especificando que el valor es de tipo entero
  
    switch(nu)														 // Inicio de la estructura switch que trabajará con respecto a la variable con el número 
    {
        case 1:														 // Casos posibles
        printf("El numero seleccionado es el 1");					 // Texto que se imprime en consola según sea el número que fue seleccionado
        break;														 // Detiene las lineas de código del caso 
        case 2:
        printf("El numero seleccionado es el 2");
        break;
        case 3: 
        printf("El numero seleccionado es el 3");
        break;
        default:													 // Establece una acción por defecto en caso de que no se ingrese un valor valido
        printf("numero no encontrado");
    }
    
    return 0;														 // Programa finalizado con éxito
}

