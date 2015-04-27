/***************************************************
Fahrenheit (°F) = [ Celsius (°C) x 1.8 ] + 32
usando "const"
Abel Cesar, Farias Juarez
20150413
*****************************************************/

#include <stdio.h> 

int main(void){
	const int tablaDesde = -25;
	const int tablaHasta = 75;
	const float factorConversion = 1.8;
	const int ajusteConversion = 32;
	
	printf("\t%s -->\t%s\n","Celsius", "Fahrenheit");
	for(int cel= tablaDesde ; cel < tablaHasta; cel++){
		  printf("\t%03d -->\t%04.2f\n",cel, ( (cel * factorConversion) + ajusteConversion) );
    }	
}
