#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um programa onde o computador "pensa" em um n�mero entre 1 e 100. Pe�a ao usu�rio para adivinhar esse n�mero. 
//Cada vez que o usu�rio errar, o programa deve dar uma dica: "O n�mero � maior" ou "O n�mero � menor". 
//O loop continua at� que o usu�rio acerte o n�mero.

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	int numero_secreto;
	printf("Bem vindo ao n�mero secreto, voc� � capaz de acertar?  \n");
	
	while (numero_secreto != 58) {
		printf("Digite um n�mero entre 1 e 100 \n");
		scanf("%d",&numero_secreto);
	if (numero_secreto < 58){
		printf("Dica: O n�mero � maior \n");
}	else if (numero_secreto > 58){
		printf("Dica: O n�mero � menor \n");
}	else {
	printf("Parab�ns, voc� acertou !! \n");
}
}
}


