#define N 20
#include <stdio.h>   
void leer_matriz(int A[N][N], int filas, int columnas);
void escribir_matriz(int A[N][N], int filas, int columnas);
void multiplicar(int A[N][N], int B[N][N], int C[N][N], int varFilas, int n, int p);
int main ()
{
	int varFilas, n, p;
	int A[N][N], B[N][N], C[N][N];
	printf("\n Datos de la Matriz A: \n");
	printf("Filas: ");
	scanf("%d", &varFilas);
	printf("Columnas: ");
	scanf("%d", &n);
	leer_matriz(A, varFilas, n);
	printf("\n Datos de la Matriz B: \n");
	printf("Filas: %i\n",n);
	printf("Columnas: ");
	scanf("%d", &p);
	leer_matriz(B, n, p);
	printf("\n Matriz A:\n");
	escribir_matriz(A, varFilas, n);
	printf("\n Matriz B: \n");
	escribir_matriz(B, n, p);
	multiplicar(A, B, C, varFilas, n, p);
	printf("\n Matriz C: \n");
	escribir_matriz(C, varFilas, p);
}
void leer_matriz(int A[N][N], int filas, int columnas)
{
	int i, j;
	for (i=0; i<filas; i++)
	{
		for (j=0; j<columnas; j++)
		{
			printf("Ingresa la entrada [%d][%d]: ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	return;
}
void escribir_matriz(int A[N][N], int filas, int columnas)
{
	int i, j;
	for (i=0; i<filas; i++)
	{
		for (j=0; j<columnas; j++)
		{
			printf("\t%d", A[i][j]);
		}
		printf("\n");
	}
	return;
}
void multiplicar(int A[N][N], int B[N][N], int C[N][N], int m, int n, int p)
{
	int i, j, k;
	//limpiar o inicializar matriz C
	for(i=0; i<m; i++){
		for(k=0; k<p; k++)
		C[i][k]=0;
	}	
		for (i=0; i<m; i++){
			for (j=0; j<n; j++)
				for (k=0; k<p; k++)
					C[i][k] = C[i][k] + A[i][j]*B[j][k];
	}
}
