#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

		//funçao de ler struct

	
void ler(struct data *cotacao_moeda){
int i=0;

 for(i= 0; i<2 ;i++){
 	scanf(" %[0-9 ]s", cotacao_moeda[i].dia);
	getchar();
	scanf("%f", &cotacao_moeda[i].dados.dola);
	getchar();
	scanf("%f", &cotacao_moeda[i].dados.real);
	//getchar();
	}

}
