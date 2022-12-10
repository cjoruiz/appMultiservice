#include"libSeries.h"
void escribirFibonacci(){
	int numero=leerNumeroEnteroCon("cuantos numeros quieres crear:  ");
	int	x=0,y=1,z;	
	escribir("0 1 ");
	for(i=0;i<numero-2;i++){
		z=x+y;
		escribirNumeroEntero(z);
		x=y;
		y=z;
	}
	saltarLinea();
}

	void escribirPrimos(){
			int topeMayor=leerNumeroEnteroCon("escribe el tope:  ");
			escribir("Primos\n\n");
				
				int pausa =0;
				for (i=0; i<topeMayor; i++){
					int j=0;
					int c= 0;
					while(j<=i){ 
						j++;
						if(i%j==0){
							c++ ; 	
						}
					}
					if(pausa==25){
						saltarLinea();
						pausar(); 
						pausa=0;
					}
					if(c==2){
						pausa++;
						escribirNumeroEntero(i);
						
					}
				}
		saltarLinea();
	}

void escribirPares(){
		int varN=leerNumeroEnteroCon("ingrese el tope:  ");
		for(i =1;i<=varN;i++){
			if(i%2==0){
				escribirNumeroEntero(i);
			}
		}
saltarLinea();
	}

void escribirImPares(){
	int varN=leerNumeroEnteroCon("ingrese un tope:  ");
	for(i =1;i<=varN;i++){
		if(i%2!=0){
			escribirNumeroEntero(i);
		}
	}
	saltarLinea();
}

