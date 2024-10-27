#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	
	setlocale(LC_ALL,"Portuguese");
	int principalcalorias,sobremesacalorias,bebidasacalorias, totalcalorias;
	
		printf("Informe o seu prato principal\n 1- Vegetariano \n 2- Peixe \n 3-Frango \n 4- Carne \n ");
		scanf("%d",&principalcalorias);
	
	switch(principalcalorias) {
		
		case 1:
			principalcalorias = 180;
			printf("Voce escolheu o Vegetariano\n");
			break ;
			
		case 2 :
			principalcalorias = 230;
			printf("Voce escolheu o Peixe \n");
			break;
		
		case 3:
			principalcalorias =250;
			printf("Voce escolheu o Frango\n");
			break;
			
		case 4:
			principalcalorias = 350;
			printf("Voce escolheu Carne\n");
			break;
			
		default:
			printf("Prato incorreto");
			break;			
	}
	
		printf("\n Informe a sua sobremesa \n 1- Abacaxi \n 2- Sorvete \n 3-Mousse \n 4- Torta \n ");
		scanf("%d",&sobremesacalorias);
		
		switch (sobremesacalorias) {
			
			case 1:
			sobremesacalorias =	75;
			printf("Voce escolheu Abacaxi\n");
			break;
			
			case 2:
				sobremesacalorias=110;
				printf("Voce escolheu o Sorvete\n");
				break;
				
			case 3:
				sobremesacalorias=170;
				printf("Voce escolheu o Mousse\n");
				break;
			
			case 4:
				sobremesacalorias = 200;
				printf("Voce escolheu Torta\n");
				break;
				
			default:
				printf("Prato incorreto \n");
				break;
    }
		
		printf("\n Informe sua bebida \n 1- Chá \n 2- Suco de Laranja \n 3-Suco de Melão \n 4- Refrigerante \n ");
		scanf("%d",&bebidasacalorias);
		
		switch (bebidasacalorias) {
			
			case 1:
				bebidasacalorias =	200;
				printf("Voce escolheu o Chá\n");
			break;
			
			case 2:
				bebidasacalorias=70;
				printf("Voce escolheu o Suco de Laranja\n");
				break;
				
			case 3:
				bebidasacalorias=100;
				printf("Voce escolheu o Suco de melão\n");
				break;
			
			case 4:
				bebidasacalorias = 65;
				printf("Voce escolheu o Refrigerante\n");
			default:
				printf("Prato incorreto \n");
				break;
   }
   
   		totalcalorias = principalcalorias + sobremesacalorias + bebidasacalorias;
   		printf("\n O total de calorias do seus pratos são de %d \n", totalcalorias);
			
		
}
