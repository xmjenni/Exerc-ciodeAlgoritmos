#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	int n;
	printf("Informe um número \n");
	scanf("%d",&n);
	do {
		printf("Informe um número \n");
		scanf("%d",&n);
	} while (n > 0);
}
