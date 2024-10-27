#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int numconta,i,saldosnegativos;
	float saldo;
	i = 1;
	saldosnegativos = 0;
		
	while (i<=5){
		printf("Informe numero da conta \n");
		scanf("%d",&numconta);
		printf("Informe seu saldo \n");
		scanf("%f",&saldo);
		
		if (saldo > 0){
			printf("Saldo Positivo \n");
}		else {
			printf("Saldo Negativo \n");
			saldosnegativos++;
}
		i++;
	}
		printf("Total de contas negativas %d \n",saldosnegativos);
	
}

