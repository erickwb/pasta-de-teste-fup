#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"



			//funçao de menu

void menu_programa(){

	int opcao;
	int operacao;
	
	struct data *cotacao_moeda; //ponteiro
	cotacao_moeda = (struct data*)malloc(2*sizeof(struct data));
	
do{
	//menu 	
	// escolher entre compra e venda.
	// escolher opçao de moeda.
	

	printf("                              <<<<<< Casa de Cambio >>>>> \n");
	printf("\n\n");
	printf("Informe o dia operacao e a cotacao de dolares e reais respectivamente\n");
	ler(cotacao_moeda);
	printf("\n\n");
	printf("   Para venda de moeda escolha a -> opcao 1\n\n");
	printf("\nEscolha a moeda que deseja vender\n\n");
	printf("    Reais -> opcao 2\n\n");
	printf("    Dolares -> opcao 3\n\n");
	printf("   Para compra de moeda escolha a ->  opcao 2\n\n\n");
	printf("    Reais-> opcao 3\n\n");
	printf("    Dolares -> opcao 4\n\n");
	
		scanf("%d", &opcao);
		scanf("%d", &operacao);
	

switch(opcao){
	case 1:
		//venda de moeda 
		//venda real
		if(opcao == 1){
			if(operacao == 2){
				printf("Digite o valor em reais a ser vendido\n ");
				float real;
				scanf("%f", &real);
				printf("\n");
				printf ("\n%f",venda_reais(real, cotacao_moeda));
			}
			
			if(operacao == 3){
				//venda dola
				printf("Digite o valor em dolares a ser vendido\n ");
				float dola;
				scanf("%f", &dola);
				printf("\n");
				printf("\n%f", venda_dola(dola, cotacao_moeda));
			}
			
		}
		case 2:
		//compra moeda
		//compra real
			if(opcao == 2){
				if(operacao ==3){
					printf("Digite o valor em reais a ser comprado\n");
					float real;
					scanf("%f", &real);
					printf("\n");
					printf("\n%f", compra_real(real, cotacao_moeda));
				}
			if(operacao==4){
				//compra dola
					printf("Digite o valor em dolares a ser comprado\n");
					float dola;
					scanf("%f", &dola);
					printf("\n");
					printf("\n%f", compra_dola(dola, cotacao_moeda));
					
				}
			
			
			
			}
			
			
		break;
	
		default: 
			printf("Opcao Invalida! Por favor insira uma opcao valida. \n");
}
}while(opcao!=0&&operacao!=0);
}