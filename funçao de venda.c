#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

//funçoes de venda
//venda dola

float venda_dola(float dola,struct data cotacao_moeda[]){
float h;
int i =0;
for(i= 0; i<2; i++){

h = dola / cotacao_moeda[i].dados.real;

	printf("%s", cotacao_moeda[i].dia);
	printf("\n%f\n",h);   
}	                   
	return h;
}
//venda real
float venda_reais(float real,struct data cotacao_moeda[]){
float h;
int i =0;

for(i= 0; i<2; i++){

h = real / cotacao_moeda[i].dados.dola ;

	printf("%s\n", cotacao_moeda[i].dia);
	printf("\n%f",h);
	       
}		                   
	return h;
}	