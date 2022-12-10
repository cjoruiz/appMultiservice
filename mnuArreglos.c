#include "mnuArreglos.h"

void procesarMnuArreglos(){
	switch (glbOpcion)
	{
	case 1:
		BubbleSort();
		break;
	case 2:
		cockTailSort();
		break;
	case 3:
		insertionSort();
		break;
	case 4:
		mergeSort();
		break;
	case 5:
		quickSort();
		break;
	case 6:
		escribirEncabezado("Ha salido de menu ordenamiento de arreglos");
		break;
	default:
		escribirEncabezado("El valor de la opcion indicada no existe...");
	}
}
	void configurarMenuArreglos(){
		glbOpcSalir=6;
		glbNumItems=8;
		dimensionarItems();
		glbItemsMenu[0]="**** MENU ORDENAMIENTO DE ARREGLOS ***";
		glbItemsMenu[1]="Burbuja";
		glbItemsMenu[2]="Cocktail";
		glbItemsMenu[3]="Insercion";
		glbItemsMenu[4]="Merge";
		glbItemsMenu[5]="QuickSort";
		glbItemsMenu[6]="Salir";
		glbItemsMenu[7]="ingrese una opcion:  ";
	}
		void iterarMenuArreglos(){
			configurarMenuArreglos();
			do
			{
				escribirMenu();
				borrarPantalla();
				procesarMnuArreglos();
				pausar();
			} while (glbOpcion != glbOpcSalir);
			//opcional llamar a un menu anterior
			iterarMenuPrincipal();
		}
			
			
