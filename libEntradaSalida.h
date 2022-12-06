#ifndef LIBENTRADASALIDA_H
#define LIBENTRADASALIDA_H
//biblioteca del lenguage
#include <stdlib.h>
#include <stdio.h>
//servicios de control
void borrarPantalla();
void pausar();
void saltarLinea();
//servicios de salida
void escribir(char *prmCadena);
void escribirSeparador();
void escribirEncabezado(char *prmCadena);
void escribirNumeroEntero(int prmNumero);
void escribirNumeroEnteroCon(char* prmCadena,int prmNumero);
void escribirNumero(float prmNumero);
void escribirNumeroCon(char* prmCadena,float prmNumero);
//servicios de entrada
float leerNumeroCon(char *prmEtiqueta);
int leerNumeroEnteroCon(char *prmEtiqueta);
#endif
