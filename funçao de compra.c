#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"



//funçoes de compra
// compra dola
float compra_dola(float real, struct data cotacao_moeda[]){

	float h;
	
	int i =0;

for(i= 0; i<2; i++){
	h = real * cotacao_moeda[i].dados.dola;
	
	printf("%s", cotacao_moeda[i].dia); 
	printf("\n%f\n",h);  
}

	return h;
}

// compra real
float compra_real(float dola , struct data cotacao_moeda[]){
	float h;
	int i =0;
	
for(i= 0; i<2; i++){
	h = dola * cotacao_moeda[i].dados.real;
	
	printf("%s", cotacao_moeda[i].dia); 
	printf("\n%f\n",h);  
}
	return h;
}