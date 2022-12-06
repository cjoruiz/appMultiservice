#include "libMatrices.h"
void escribirMatriz(int **prmMatriz, int prmFila, int prmColumn)
{
	saltarLinea();
	escribirSeparador();
	for (int i = 0; i < prmFila; i++)
	{
		for (int j = 0; j < prmColumn; j++)
		{
			escribirNumeroEntero(prmMatriz[i][j]);
			escribir("\t");
		}
		saltarLinea();
	}
	saltarLinea();
}
int **crearmatriz(int fila, int column)
{
	int **aux;
	aux = malloc(fila * sizeof(int *));
	for (int i = 0; i < fila; i++)
	{
		aux[i] = malloc(column * sizeof(int));
	}
	for (int i = 0; i < fila; i++)
	{
		escribirNumeroEnteroCon("ingrese los numeros de la fila ", i + 1);
		for (int j = 0; j < column; j++)
		{
			aux[i][j] = leerNumeroEnteroCon("ingrese un numero:  ");
		}
	}
	borrarPantalla();
	escribir("contenido de la matriz: ");
	saltarLinea();
	escribirMatriz(aux, fila, column);
	pausar();
	borrarPantalla();
	return aux;
}
void sumarMatriz(int prmFilas, int prmColumn, int prmColumnA)
{
	glbProducto = malloc(prmFilas * sizeof(int *));
	for (int i = 0; i < prmFilas; i++)
	{
		glbProducto[i] = malloc(prmColumn * sizeof(int));
	}
	for (int i = 0; i < prmFilas; i++)
	{
		for (int j = 0; j < prmColumnA; j++)
		{
			glbProducto[i][j] = glbMatrizA[i][j] + glbMatrizB[i][j];
		}
	}
}
void multiplicarMatriz(int prmFilas, int prmColumn, int prmColumnA)
{
	glbProducto = malloc(prmFilas * sizeof(int *));
	for (int i = 0; i < prmFilas; i++)
	{
		glbProducto[i] = malloc(prmColumn * sizeof(int));
	}
	for (int a = 0; a < prmColumn; a++)
	{
		for (int i = 0; i < prmFilas; i++)
		{
			int suma = 0;
			for (int j = 0; j < prmColumnA; j++)
			{
				suma += glbMatrizA[i][j] * glbMatrizB[j][a];
			}
			glbProducto[i][a] = suma;
		}
	}
}
void sumarMatrices()
{
	int filasA = leerNumeroCon("matriz A\nnumero de filas:  ");
	int columnA = leerNumeroCon("numero de columnas:  ");
	int columnB = columnA;
	glbMatrizA = crearmatriz(filasA, columnA);
	escribirNumeroEnteroCon("matriz B\nnumero de filas:  ", filasA);
	escribirNumeroEnteroCon("numero de columnas:  ", columnB);
	glbMatrizB = crearmatriz(filasA, columnA);
	sumarMatriz(filasA, columnB, columnA);
	escribir("MatrizA");
	escribirMatriz(glbMatrizA, filasA, columnA);
	escribir("MatrizB");
	escribirMatriz(glbMatrizB, filasA, columnB);
	escribir("resultado de la suma (MatrizA + MatrizB)");
	escribirMatriz(glbProducto, filasA, columnB);
}
void multiplicarMatrices()
{
	int filasA = leerNumeroCon("matriz A\nnumero de filas:  ");
	int columnA = leerNumeroCon("numero de columnas:  ");
	glbMatrizA = crearmatriz(filasA, columnA);
	escribirNumeroEnteroCon("matriz B\nnumero de filas: ", columnA);
	int columnB = leerNumeroCon("numero de columnas:  ");
	glbMatrizB = crearmatriz(columnA, columnB);
	multiplicarMatriz(filasA, columnB, columnA);
	escribir("MatrizA");
	escribirMatriz(glbMatrizA, filasA, columnA);
	escribir("MatrizB");
	escribirMatriz(glbMatrizB, columnA, columnB);
	escribir("resultado del Producto (MatrizA * MatrizB)");
	escribirMatriz(glbProducto, filasA, columnB);
}
