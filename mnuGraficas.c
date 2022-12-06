#include "mnuGraficas.h"

void procesarMnuGraficas(){
	switch (glbOpcion)
	{
	case 1:
		dibujarCuadrado();
		break;
	case 2:
		dibujarRectangulo();
		break;
	case 3:
		dibujarTriangulo();
		break;
	case 4:
		escribirEncabezado("Ha salido de utilidades graficas");
		saltarLinea();
		break;
	default:
		escribirEncabezado("El valor de la opcion indicada no existe...");
	}
}
	void configurarMnuGraficas(){
		glbOpcSalir=4;
		glbNumItems=6;
		dimensionarItems();
		glbItemsMenu[0]="utilidades graficas";
		glbItemsMenu[1]="dibujar Cuadrado";
		glbItemsMenu[2]="Dibujar Rectangulo";
		glbItemsMenu[3]="dibujar Triangulo";
		glbItemsMenu[4]="Salir";
		glbItemsMenu[5]="ingrese una opcion:  ";
	}
		void iterarMenuGraficas(){
			do
			{
				configurarMnuGraficas();
				escribirMenu();
				borrarPantalla();
				procesarMnuGraficas();
				pausar();
			} while (glbOpcion != glbOpcSalir);
			//opcional llamar a un menu anterior
			iterarMenuPrincipal();
		}
			
