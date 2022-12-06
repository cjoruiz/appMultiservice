#include "libMenu.h"
void escribirMenu(){
	borrarPantalla();
	escribir(glbItemsMenu[0]);
	saltarLinea();
	for(int varOpcion=1;varOpcion<glbNumItems-1;varOpcion++){
		escribirNumeroEntero(varOpcion);escribir(". ");
		escribir(glbItemsMenu[varOpcion]);
		saltarLinea();
	}
	escribirSeparador();
	glbOpcion = leerNumeroCon(glbItemsMenu[glbNumItems-1]);
}
void dimensionarItems(){
		glbItemsMenu=malloc(glbNumItems*sizeof(char*));
		for(int i=0;i<glbNumItems;i++){
			glbItemsMenu[i]=malloc(100*sizeof(char));
		}
	}
		
		
