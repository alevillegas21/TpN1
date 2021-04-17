/*
 ============================================================================
 Name        : programa1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main(void) {
	int numero1;
	int numero2;
	int suma;
	int multiplicacion;
	float division;
	int resta;
	int factorial;
   setbuf(stdout,NULL);

	printf("ingrese numero: ");
	scanf ("%d",&numero1);
	printf("ingrese otro numero: ");
	scanf ("%d",&numero2);

	int usuario = 0;
	int opcFactoreo;
   do {
	printf("******MENU DE OPCIONES******\n opcion 1 : suma\n opcion 2 : resta\n opcion 3 : multiplicacion\n opcion 4 : division\n opcion 5 : factorial\n opcion 6 : salir del programa\n"
			);


	printf("ingrese la opcion deseada: ");
	scanf("%d", &usuario);

	switch(usuario)
		{
	    case 1 : suma= sumar(numero1, numero2);
	             printf ("la suma es %d \n", suma);
	             break;
	    case 2 : resta = restar (numero1,numero2);
	    	     printf ("la resta es %d\n", resta);
		         break;
	    case 3 : multiplicacion = multiplicar (numero1,numero2);
		         printf ("la multiplicacion es %d\n", multiplicacion);
		         break;
	    case 4 : division = dividir(numero1, numero2);
	             if(numero2 !=0){
	            	 printf ("la division es %.2f \n", division);
	             }

	             break;
	    case 5 : printf ("¿desea calcular el factorial del primer o segundo numero? : ");
	             scanf("%d", &opcFactoreo);
	             if (opcFactoreo == 1)
	             	 {
	            	 factorial= func_factorial(numero1) ;
	            	 printf ("el factorial de %d es %d\n", numero1, factorial);
	             	 }

	             else  	{
	            	 factorial= func_factorial(numero2);
	            	 printf ("el factorial de %d es %d\n", numero2, factorial);
	             	 	 }



	    }
                 }while(usuario!=6);


	return EXIT_SUCCESS;
}


