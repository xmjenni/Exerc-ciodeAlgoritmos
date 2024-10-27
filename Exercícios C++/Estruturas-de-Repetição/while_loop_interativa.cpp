#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	
	setlocale(LC_ALL,"Portuguese");
	int numero,triplo;
	printf("Digite um número \n");
	scanf("%d",&numero);
	
	while (numero!=-999){
		triplo= numero * 3;
		printf("Triplo %d \n",triplo);
		printf("Digite um número \n");
		scanf("%d",&numero);
	}
}
