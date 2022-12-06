#include "mnuMatrices.h"

void procesarMnuMatrices(){
	switch (glbOpcion)
	{
	case 1:
		sumarMatrices();
		break;
	case 2:
		multiplicarMatrices();
		break;
	case 3:
		escribirEncabezado("Ha salido de operaciones con matrices");
		saltarLinea();
		break;
	default:
		escribirEncabezado("El valor de la opcion indicada no existe...");
	}
}
	void configurarMnuMatrices(){
		glbOpcSalir=3;
		glbNumItems=5;
		dimensionarItems();
		glbItemsMenu[0]="operaciones con matrices";
		glbItemsMenu[1]="suma";
		glbItemsMenu[2]="multiplicacion";
		glbItemsMenu[3]="Salir";
		glbItemsMenu[4]="ingrese una opcion:  ";
	}
		void iterarMenuMatrices(){
			do
			{
				configurarMnuMatrices();
				escribirMenu();
				borrarPantalla();
				procesarMnuMatrices();
				pausar();
			} while (glbOpcion != glbOpcSalir);
			//opcional llamar a un menu anterior
			iterarMenuPrincipal();
		}
			
