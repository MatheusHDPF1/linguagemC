#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	@author Matheus Henrique De Paula Ferreira

*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Obrigatoriedade de votar\n\n");
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if (idade < 16 ){
		printf("Proibido votar\n");
	} else if (idade > 17 && idade < 71){
		printf("Voto obrigatório\n");
	} else {
		printf("Voto facultativo\n");
	}
    system("pause");
	return 0;
}
