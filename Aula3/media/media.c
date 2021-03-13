#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Cálculo da média 
	@author Matheus Henrique De Paula Ferreira
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	printf("Cálculo da média\n");
	float nota1,nota2,media;
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	media = (nota1 + nota2) / 2;
	printf("Resultado: %.1f\n", media);
	system("pause");
	return 0;
}
