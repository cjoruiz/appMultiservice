#include "libOperacionesMatematicas.h"
void resultado(){
	
}
void sumar(){
	escribirEncabezado("OPERACION DE SUMA ENTRE DOS OPERANDOS");
	escribirNumeroCon("el resultado de la suma es: ", leerNumeroCon("introduce un valor para el sumando-1:  ") + leerNumeroCon("introduce un valor para el sumando-2:  "));
}
void restar(){
		escribirEncabezado("OPERACION DE RESTA ENTRE DOS OPERANDOS");
		escribirNumeroCon("el resultado de la resta es: ", leerNumeroCon("introduce un valor para el minuendo-1:  ") - leerNumeroCon("introduce un valor para el minuendo-2:  "));
	}
void multiplicar(){
	escribirEncabezado("OPERACION DE PRODUCTO ENTRE DOS OPERANDOS");
	escribirNumeroCon("el resultado del producto es: ", leerNumeroCon("introduce un valor para el factor-1:  ") * leerNumeroCon("introduce un valor para el factor-2:  "));
}
void dividir(){
	escribirEncabezado("OPERACION DE DIVISION ENTRE DOS OPERANDOS");
	float varOperando1 = leerNumeroCon("introduce un valor para el dividiendo-1:  ");
	float varOperando2 = leerNumeroCon("introduce un valor para el divisor-2:  ");
	if (varOperando2 != 0){
		escribirNumeroCon("el resultado de la division es: ", varOperando1 / varOperando2);
	}else
		escribirEncabezado("No se puede dividir entre cero...\n");
}
