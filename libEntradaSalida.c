#include "libEntradaSalida.h"
//servicos de control
void borrarPantalla()
{
	system("cls");
}
void pausar()
{
	system("pause");
}
void escribir(char *prmCadena)
{
	printf(prmCadena);
}
void saltarLinea(){
	escribir("\n");
}
	//servicios de salida
void escribirSeparador()
{
	escribir("--------------------------------------------");
	saltarLinea();
}
void escribirEncabezado(char *prmCadena)
{
	escribirSeparador();
	escribir(prmCadena);
	saltarLinea();
	escribirSeparador();
}
void escribirNumeroEntero(int prmNumero){
	printf("%i ",prmNumero);
}
void escribirNumeroEnteroCon(char* prmCadena,int prmNumero){
		escribir(prmCadena);
		escribirNumeroEntero(prmNumero);
		saltarLinea();
	}
void escribirNumero(float prmNumero){
	printf("%.2f ",prmNumero);
}
void escribirNumeroCon(char* prmCadena,float prmNumero){
	escribirSeparador();
	escribir(prmCadena);
	escribirNumero(prmNumero);
	saltarLinea();
	escribirSeparador();
}
	//servicios de entrada
float leerNumeroCon(char *prmEtiqueta)
{
	float varNumero;
	escribir(prmEtiqueta);
	scanf("%f", &varNumero);
	return varNumero;
}
int leerNumeroEnteroCon(char *prmEtiqueta)
{
	int varNumero;
	escribir(prmEtiqueta);
	scanf("%i", &varNumero);
	return varNumero;
}

