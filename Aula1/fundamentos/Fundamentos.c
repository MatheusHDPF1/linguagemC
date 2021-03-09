#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* 
	Fundamentos da Linguagem C
	@author Matheus Henrique De Paula Ferreira
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	printf("Olá Mundo\n");
	printf("café\n");
	system("pause");
	system("cls");
	system("color 5A");
	printf("Código de cores:\n\n");
	printf("0 - Preto\n");
	printf("1 - Azul\n");
	printf("2 - Verde\n");
	printf("3 - Verde-água\n");
	printf("4 - Vermelho\n");
	printf("5 - Roxo\n");
	printf("6 - Amarelo\n");
	printf("7 - Branco\n");
	printf("8 - Cinza\n");
	printf("9 - Azul claro\n");
	printf("A - Verde claro\n");
	printf("B - Verde-água claro\n");
	printf("C - Vermelho claro\n");
	printf("D - Lilás\n");
	printf("E - Amarelo claro\n");
	printf("F - Branco brilhante\n");
	system("pause");
	return 0;
}
