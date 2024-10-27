#include <stdio.h>
#include <stdlib.h>
int main (){
	int num;
	printf("Informe um numero \n");
	scanf("%d",&num);
	if (num >20){
		printf("Maior que 20 \n");
}	else if (num <20){
		printf("Menor que 20 \n");
}	else {
		printf("Igual a 20");
}
}
