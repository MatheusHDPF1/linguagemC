#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* 
	@Author Matheus Henrique De Paula Ferreira
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
    system("pause");
	printf("Ol� mundo\n");
	printf("Matheus Henrique\n");
	system("pause");
	printf("c�digo de cores:\n\n");
    system("color 11");
	printf("0 - Preto\n");
	printf("1 - Azul\n");
	printf("2 - Verde\n");
	printf("3 - Verde-�gua\n");
	printf("4 - Vermelho\n");
	printf("5 - Roxo\n");
	printf("6 - Amarelo\n");
	printf("7 - Branco\n");
	printf("8 - Cinza\n");
	printf("9 - Azul claro\n");
	printf("A - Verde claro\n");
	printf("B - Verde-�gua claro\n");
	printf("C - Vermelho claro\n");
	printf("D - Lil�s\n");
	printf("E - Amarelo claro\n");
	printf("F - Branco brilhante\n");
	return 0;
}
