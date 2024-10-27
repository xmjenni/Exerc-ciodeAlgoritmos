#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){

	setlocale(LC_ALL,"Portuguese");
	int codigodoproduto, quantidade,i;
	char descricao [9];
	float valordacompra,preco, desconto;	
	i=1;
	
	while (i<=4) {
		
		printf("Informe o código do produto \n");
		scanf("%d",&codigodoproduto);	
		printf("Informe a descrição \n");
		scanf("%s",&descricao);		
		printf("Informe o preço \n");
		scanf("%f",&preco);	
		printf("Informe a quantidade \n");
		scanf("%d",&quantidade);
		valordacompra = preco * quantidade;
		quantidade = quantidade * 2;
		
		if (valordacompra<=100) {
			desconto = valordacompra - (valordacompra*0.9);
			valordacompra=valordacompra - desconto;
			printf("Valor total com desconto %f \n",valordacompra);
		}
		else {
			desconto = valordacompra - (valordacompra*0.95);
			valordacompra=valordacompra - desconto;
			printf("Valor total com desconto %f \n",valordacompra);
		}
	}

}
