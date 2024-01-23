/*
				***** OPERACIONES ARITMÉTICAS*****
		
		El siguiente código implementa el cálculo de las operaciones aritméticas de los valores dados 
		por el usuario través del lenguaje C.
		Fecha: 08-Octubre-2021
		Version: 1.0
		
*/

#include <stdio.h>

int main()
{
	int n1,n2,n3,rsum,rrest,rmul,rdiv;												// Declaración de variables para almacenar los números y resultados de las operaciones
	
	printf("OPERACIONES ARITMETICAS DE NUMEROS ENTEROS\n\n");						// Imprime texto de título en consola
	printf("Ingresa el primer numero entero:\n");									// Imprime texto en consola solicitando el primer valor	 
	scanf("%d",&n1);																// Lee el valor ingresado por el usuario, especifica que es en formato decimal y lo almacena el variable del primer número
	printf("Ingresa el segundo numero entero:\n\t\t\t");							// Imprime texto en consola solicitando el segundo valor y agrega un salto de line y tres tabulaciones para el texto siguiente	
	scanf("%d",&n2);																// Lee el valor ingresado por el usuario, especifica que es en formato decimal y lo almacena el variable del segundo número
	rsum = n1 + n2;																	// Calcula la suma y almacena el valor en su variable de resultado correspondiente
	rrest = n1 - n2;																// Calcula la resta y almacena el valor en su variable de resultado correspondiente
	rmul = n1 * n2;																	// Calcula la multiplicación y almacena el valor en su variable de resultado correspondiente
	rdiv = n1 / n2;																	// Calcula la división y almacena el valor en su variable de resultado correspondiente
	printf("***** LOS RESULTADOS SON *****\n");										// Imprime texto en consola anunciando los resultados agregando las tabulaciones y saltos de linea previamente asignado y agrega un nuevo salto de linea
	printf("Suma: %d\n",rsum);														// Imprime texto en consola con el resultado de la suma especificando que este será en formato decimal y agregando salto de linea y concatenado la variable de resultado
	printf("Resta: %d\n",rrest);													// Imprime texto en consola con el resultado de la resta especificando que este será en formato decimal y agregando salto de linea y concatenado la variable de resultado
	printf("Multiplicacion: %d\n",rmul);											// Imprime texto en consola con el resultado de la multiplicación especificando que este será en formato decimal y agregando salto de linea y concatenado la variable de resultado
	printf("Division: %d\n",rdiv);													// Imprime texto en consola con el resultado de la división especificando que este será en formato decimal y agregando salto de linea y concatenado la variable de resultado
	
	return 0;																		// Programa finalizado con éxito
}
