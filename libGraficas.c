#include "libGraficas.h"

void dibujarCuadrado(){
	int varFilas=leerNumeroCon("ingresa el numero de filas para el cuadrado");
	for(int i=0;i<varFilas;i++){
		for(int j=0;j<varFilas;j++){
			escribir("* ");
		}
		saltarLinea();
	}
}

void dibujarRectangulo(){
	int varFilas=leerNumeroCon("ingresa el numero de filas para el rectangulo: ");
	for(int i=0;i<varFilas;i++){
		for(int j=0;j<varFilas*2;j++){
			escribir("* ");
		}
		saltarLinea();
	}
}

void dibujarTriangulo(){
	int varFilas=leerNumeroCon("ingresa el numero de filas para el triangulo: ");
	for(int i=0;i<varFilas;i++){
		for(int j=0;j<varFilas-i;j++){
			escribir(" ");
		}
		for(int k=0;k<=2*i;k++){
			escribir("*");
		}
		saltarLinea();
	}
}
