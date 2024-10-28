#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um programa onde o computador "pensa" em um número entre 1 e 100. Peça ao usuário para adivinhar esse número. 
//Cada vez que o usuário errar, o programa deve dar uma dica: "O número é maior" ou "O número é menor". 
//O loop continua até que o usuário acerte o número.

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	int numero_secreto;
	printf("Bem vindo ao número secreto, você é capaz de acertar?  \n");
	
	while (numero_secreto != 58) {
		printf("Digite um número entre 1 e 100 \n");
		scanf("%d",&numero_secreto);
	if (numero_secreto < 58){
		printf("Dica: O número é maior \n");
}	else if (numero_secreto > 58){
		printf("Dica: O número é menor \n");
}	else {
	printf("Parabéns, você acertou !! \n");
}
}
}


