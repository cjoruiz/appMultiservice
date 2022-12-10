#include "mnuSeries.h"

void procesarMnuSeries(){
	switch (glbOpcion)
	{
	case 1:
		escribirFibonacci();
		break;
	case 2:
		escribirPrimos();
		break;
	case 3:
		escribirPares();
		break;
	case 4:
		escribirImPares();
		break;
	case 5:
		escribirEncabezado("Ha salido de menu series");
		saltarLinea();
		break;
	default:
		escribirEncabezado("El valor de la opcion indicada no existe...");
	}
}
	void configurarMnuSeries(){
		glbOpcSalir=5;
		glbNumItems=7;
		dimensionarItems();
		glbItemsMenu[0]="** MENU SERIES ***";
		glbItemsMenu[1]="Fibonacci";
		glbItemsMenu[2]="Primos";
		glbItemsMenu[3]="Pares";
		glbItemsMenu[4]="Impares";
		glbItemsMenu[5]="Salir";
		glbItemsMenu[6]="ingrese una opcion:  ";
	}
		void iterarMenuSeries(){
			do
			{
				configurarMnuSeries();
				escribirMenu();
				borrarPantalla();
				procesarMnuSeries();
				pausar();
			} while (glbOpcion != glbOpcSalir);
			//opcional llamar a un menu anterior
			iterarMenuPrincipal();
		}
			
