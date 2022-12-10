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
		escribirEncabezado("Ha salido de menu operaciones con matrices");
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
		glbItemsMenu[0]="*** OPERACIONES CON MATRICES **";
		glbItemsMenu[1]="Suma";
		glbItemsMenu[2]="Multiplicacion";
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
			
