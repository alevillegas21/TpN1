/*
 * funciones.c
 *
 *  Created on: 13 abr. 2021
 *      Author: Alexis villegas
 */
#include <stdio.h>
#include <stdlib.h>

int sumar(int arg1,int arg2) //esta funcion sirve para sumar dos numeros.
{int resultado;
	resultado= arg1+arg2; //esta sentencia realiza la suma entre los dos numeros ingresados.
	return resultado; //el resultado devuelve el valor de la suma.

}

float dividir(int arg1,int arg2) //esta funcion sirve para dividir dos numeros.
{float resultado;
if (arg2==0){ //este if sirve para prevenir la division por cero.
 printf("no se puede dividir por cero \n");
}
else {
	resultado= (float) arg1/arg2;  //esta sentencia realiza la division entre los dos numeros ingresados.
}
return resultado; //el resultado devuelve el valor de la division.

}

int multiplicar(int arg1,int arg2) //esta funcion sirve para multiplicar dos numeros.
{
	int resultado;
	resultado = arg1*arg2;  //esta sentencia realiza la multiplicacion entre los dos numeros ingresados.
	return resultado; //el resultado devuelve el valor de la multiplicacion.
}
int restar(int arg1,int arg2) //esta funcion sirve para restar dos numeros.
{int resultado;
	resultado= arg1-arg2;  //esta sentencia realiza la resta entre los dos numeros ingresados.
	return resultado; //el resultado devuelve el valor de la resta.

}

int func_factorial (int arg1) //esta funcion sirve para calcular el factorial de un numero.
	{
	int resultado=1; //resultado es la variable que almacenara el factorial del numero ingresado, tiene que comenzar valiendo uno para que al realizar la primer multiplicacion no modifique el resultado final
	if (arg1 > 0)
		{
		while(arg1>1) //en esta estructura repetitiva es donde se calcula el factorial.
			{
			resultado = resultado*arg1;
			arg1--;
			}
		}
	return resultado; //el resultado devuelve el valor de la funcion factorial.
	 }

