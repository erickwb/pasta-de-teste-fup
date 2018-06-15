
struct DADOS
{

	float dola;//moeda 1
	float real;//moeda 2
	
};
struct data{
	char dia[9];
	struct DADOS dados;
};

 
 
void ler(struct data *cotacao_moeda);
//funçoes de venda
float venda_dola(float dola, struct data cotacao_moeda[]);//venda dola
float venda_reais(float real, struct data cotacao_moeda[]);//venda real
//funçoes de compra
float compra_dola(float real, struct data cotacao_moeda[]);//compra dola
float compra_real(float dola , struct data cotacao_moeda[]);//compra real

//menu
void menu_programa(void);