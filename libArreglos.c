#include "libArreglos.h"
int n, i;
void escribirArreglo(int arr[]){
	for (i = 0; i < n; i++){
		escribirNumeroEntero(a[i]);
		escribir("  ");
	}
}
void leerArreglo()
{
	n = leerNumeroCon("Introduce el numero de elementos:");
	escribir("Introduce los elementos: ");
	saltarLinea();

	for (i = 0; i < n; i++)
		a[i] = leerNumeroEnteroCon("ingrese un numero");
}
void merge(int a[], int i1, int j1, int i2, int j2)
{
	int temp[50]; // Arreglo usado para la mezcla
	int j, k;
	i = i1; // Comenzando por la primera lista
	j = i2; // Comenzando por la segunda lista
	k = 0;
	while (i <= j1 && j <= j2) // mientras haya elementos en ambas
	{
		if (a[i] < a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}

	while (i <= j1) // copiando elementos restantes de la primera lista
		temp[k++] = a[i++];

	while (j <= j2) // copiando elementos restantes de la segunda lista
		temp[k++] = a[j++];

	// Transfiriendo elementos
	for (i = i1, j = 0; i <= j2; i++, j++)
		a[i] = temp[j];
}
void ordenarMergesort(int a[], int i, int j)
{
	int mid;
	if (i < j)
	{
		mid = (i + j) / 2;
		ordenarMergesort(a, i, mid);	 // Recursi�n a la izquierda
		ordenarMergesort(a, mid + 1, j); // Recursi�n a la derecha
		merge(a, i, mid, mid + 1, j);	 // Dos sublistas
	}
}

void mergeSort()
{
	leerArreglo();
	ordenarMergesort(a, 0, n - 1);
	escribirEncabezado("La lista ordenada con merge Sort es:  ");
	escribirArreglo(a);
}
void ordenarBubbleSort(int list[], int n)
{
	int c, d, t;
	for (c = 0; c < n - 1; c++)
	{
		for (d = 0; d < n - c - 1; d++)
		{
			if (list[d] > list[d + 1])
			{
				/* Intercambio */
				t = list[d];
				list[d] = list[d + 1];
				list[d + 1] = t;
			}
		}
	}
}
void BubbleSort()
{
	leerArreglo();
	ordenarBubbleSort(a, n);
	escribirEncabezado("Ordenar la lista metodo ordenarBubbleSort en orden ascendente:\n");
	escribirArreglo(a);
}

void swap(int *e1, int *e2)
{
	int tmp = *e1;
	*e1 = *e2;
	*e2 = tmp;
}
void insertion_sort(int s[], int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		j = i;
		while ((j > 0) && (s[j] < s[j - 1]))
		{
			swap(&s[j], &s[j - 1]);
			j = j - 1;
		}
	}
}
void insertionSort()
{
	leerArreglo();
	insertion_sort(a, n);
	escribirEncabezado("Ordenar la lista metodo ordenar insertion Sort en orden ascendente:\n");
	escribirArreglo(a);
}
void ordenarCockTailSort(int* arr,int MAX)
{
	int n = MAX;
	int i = 0;
	int c = 0;
	do {
		i = 0;
		while (i < n - 1) {
			if (arr[i] > arr[i + 1]) {
				arr[i] = arr[i] + arr[i + 1];
				arr[i + 1] = arr[i] - arr[i + 1];
				arr[i] = arr[i] - arr[i + 1];
			}
			i++;
		}
		n = n - 1;
		i = MAX - 1;
		c = 0;
		while (i >= c) {
			if (arr[i] < arr[i - 1]) {
				arr[i] = arr[i] + arr[i - 1];
				arr[i - 1] = arr[i] - arr[i - 1];
				arr[i] = arr[i] - arr[i - 1];
			}
			i--;
		}
		c = c + 1;
	} while (n != 0 && c != 0);
}
void cockTailSort(){
	leerArreglo();
	ordenarCockTailSort(a,n);
	escribirEncabezado("Ordenar la lista metodo cocktail Sort en orden ascendente:\n");
	escribirArreglo(a);
}
void ordenarQuickSort(int f, int l)
{
	int  j, t, p = 0;

	if (f < l)
	{
		p = f;
		i = f;
		j = l;

		while (i < j)
		{
			while (a[i] <= a[p] && i < l)
				i++;
			while (a[j] > a[p])
				j--;
			if (i < j)
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}

		t = a[p];
		a[p] = a[j];
		a[j] = t;
		ordenarQuickSort(f, j - 1);
		ordenarQuickSort(j + 1, l);
	}
}
void quickSort()
{
	leerArreglo();
	ordenarQuickSort(0, n - 1);
	escribirEncabezado("Ordenar la lista metodo quick Sort en orden ascendente:\n");
	escribirArreglo(a);
}
