#include"libSeries.h"
int varAuxiliar;
int escribirOpciones(){
	int aux;
	saltarLinea();
	printf("\n\n1. repetir\n"); 
	printf("2. salir\n");
	aux=leerNumeroEnteroCon("ingrese su opcion: ");
	return aux;
}
void escribirFibonacci(){
	do{
		borrarPantalla();
	int numero=leerNumeroEnteroCon("cuantos numeros quieres crear:  ");
	int	x=0,y=1,z;	
	escribir("0 1 ");
	for(int i=0;i<numero-2;i++){
		z=x+y;
		escribirNumeroEntero(z);
		x=y;
		y=z;
	}
	varAuxiliar=escribirOpciones();
} while(varAuxiliar!=2);
}

	void escribirPrimos(){
		do {
			borrarPantalla();
			int topeMayor=leerNumeroEnteroCon("escribe el tope:  ");
			escribir("Primos\n\n");
				
				int pausa =0;
				for (int i=0; i<topeMayor; i++){
					int j=0;
					int c= 0;
					while(j<=i){ 
						j++;
						
						if(i%j==0){
							c++ ; 	
						}
						//system("pause"); 
					}
					if(pausa==25){
						pausar(); 
						pausa=0;
					}
					if(c==2){
						pausa++;
						printf("%i\n",i);
						
					}
				}
				varAuxiliar=escribirOpciones();
		} while(varAuxiliar!=2);
	}

void escribirPares(){
	do{
		borrarPantalla();
		int varN=leerNumeroEnteroCon("ingrese el tope:  ");
		for(int i =1;i<=varN;i++){
			if(i%2==0){
				escribirNumeroEntero(i);
			}
		}
		varAuxiliar=escribirOpciones();
	} while(varAuxiliar!=2);
		
	}

void escribirImPares(){
	do{
		
	borrarPantalla();
	int varN=leerNumeroEnteroCon("ingrese un tope:  ");
	for(int i =1;i<=varN;i++){
		if(i%2!=0){
			escribirNumeroEntero(i);
		}
	}
	varAuxiliar=escribirOpciones();
} while(varAuxiliar!=2);
}

