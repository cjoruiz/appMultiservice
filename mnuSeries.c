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
		escribirEncabezado("Ha salido menu series");
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
		glbItemsMenu[0]="series";
		glbItemsMenu[1]="fibonacci";
		glbItemsMenu[2]="primos";
		glbItemsMenu[3]="pares";
		glbItemsMenu[4]="impares";
		glbItemsMenu[5]="salir";
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
			
