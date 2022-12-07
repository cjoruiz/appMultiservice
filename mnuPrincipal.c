#include "mnuPrincipal.h"

void procesarMnuPrincipal(){
	switch (glbOpcion)
	{
	case 1:
		iterarMenu();
		
		break;
	case 2:
			iterarMenuGraficas();
		break;
	case 3:
		iterarMenuArreglos();
		break;
	case 4:
		iterarMenuMatrices();
		break;
	case 5:
		iterarMenuSeries();
		break;
	case 6:
		escribirEncabezado("Ha salido de la aplicacion...");
		break;
	default:
		escribirEncabezado("El valor de la opcion indicada no existe...");
	}
}
	void configurarMenuPrincipal(){
		glbOpcSalir=6;
		glbNumItems=8;
		dimensionarItems();
		glbItemsMenu[0]="**** MENU PRINCIPAL ***";
		glbItemsMenu[1]="utilidades Aritmeticas";
		glbItemsMenu[2]="utilidades Graficas";
		glbItemsMenu[3]="ordenamiento de arreglos";
		glbItemsMenu[4]="operaciones con matrices";
		glbItemsMenu[5]="series";
		glbItemsMenu[6]="Salir";
		glbItemsMenu[7]="ingrese una opcion:  ";
	}

	void iterarMenuPrincipal(){
			//iterar el menu
		configurarMenuPrincipal();
			do
			{
				escribirMenu();
				borrarPantalla();
				procesarMnuPrincipal();
				//pausar();
			} while (glbOpcion != glbOpcSalir);
		}
			
			
