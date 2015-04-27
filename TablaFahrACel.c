/***************************************************
Programa que imprime por pantalla una tabla de 
conversion de Fahrenheit a Celsius.
usando "const"
Abel Cesar, Farias Juarez
20150427
*****************************************************/

#include <stdio.h> 

/***************************************************
Celsius (°C) = [ Fahrenheit (°F) - 32 ] / 1.8
Abel Cesar, Farias Juarez
20150427
*****************************************************/
float celcius(int fhar){
	const float factorConversion = 1.8;
	const int ajusteConversion = 32;
		 	
	return (fhar - ajusteConversion) / factorConversion; 
}

int main(void){
	
	const int tablaDesde = 0;
	const int tablaHasta = 300;
	const int siguiente = 10;
	
	printf("\t%s -->\t%s\n","Fahrenheit", "Celsius");
	
	for(int fahr = tablaDesde ; fahr < tablaHasta; fahr = fahr + siguiente){
		  printf("\t%03d -->\t%04.2f\n",fahr, celcius(fahr) );
    }	
    
}
