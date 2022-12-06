#include "mnuAritmetica.h"

	void procesarMnuAritmetica(){
		switch (glbOpcion)
		{
		case 1:
			sumar();
			break;
		case 2:
			restar();
			break;
		case 3:
			multiplicar();
			break;
		case 4:
			dividir();
			break;
		case 5:
			escribir("ha salido de utilidades aritmeticas");
			saltarLinea();
			break;
		default:
			escribirEncabezado("El valor de la opcion indicada no existe...");
		}
	}
		void configurarMenu(){
			glbOpcSalir=5;
			glbNumItems=7;
			dimensionarItems();
			glbItemsMenu[0]="**** MENU ARITMETICA ***";
			glbItemsMenu[1]="Operacion Suma";
			glbItemsMenu[2]="Operacion Resta";
			glbItemsMenu[3]="Operacion Producto";
			glbItemsMenu[4]="Operacion Division";
			glbItemsMenu[5]="Salir";
			glbItemsMenu[6]="ingrese una opcion:  ";
		}
			void iterarMenu(){
				configurarMenu();
				do
				{
					escribirMenu();
					borrarPantalla();
					procesarMnuAritmetica();
					pausar();
				} while (glbOpcion != glbOpcSalir);
				//opcional llamar a un menu anterior
				iterarMenuPrincipal();
			}
				
