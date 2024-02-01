/*
    			***** ESTRUCTURA CASE *****
    			
    El presente c�digo tiene como finalidad la implementaci�n de la estructura case 
    para determinar el n�mero que fue seleccionado a partir del valor ingresado por
    el usuario.
    
    Fecha: 09-Octubre-2023
    Version: 1.0
    
*/
#include<stdio.h>                 									 // Libreria Principal de entrada y salida de datos

int main()															 // Funci�n principal
{
  int nu;															 // Declara una variable de tipo entero la cual almacenar� el valor ingresado
  
  printf("Ingresa un numero: ");										 // Imprime texto en consola solicitando alg�n n�mero 
  scanf("%i",&nu);													 // Lee el valor ingresado y lo almacena en la variable correspondiente especificando que el valor es de tipo entero
  
    switch(nu)														 // Inicio de la estructura switch que trabajar� con respecto a la variable con el n�mero 
    {
        case 1:														 // Casos posibles
        printf("El numero seleccionado es el 1");					 // Texto que se imprime en consola seg�n sea el n�mero que fue seleccionado
        break;														 // Detiene las lineas de c�digo del caso 
        case 2:
        printf("El numero seleccionado es el 2");
        break;
        case 3: 
        printf("El numero seleccionado es el 3");
        break;
        default:													 // Establece una acci�n por defecto en caso de que no se ingrese un valor valido
        printf("numero no encontrado");
    }
    
    return 0;														 // Programa finalizado con �xito
}

