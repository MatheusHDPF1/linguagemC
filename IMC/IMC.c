#include <stdio.h>
#include <stdlib.h>

/* 
	Cálculo do IMC 
	@author Matheus Henrique De Paula Ferreira
*/

int main(int argc, char *argv[]) {
	float imc, altura, peso;
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	imc = peso /(altura * altura);
	printf("IMC = %.2f\n", imc);
	system("pause");
	return 0;
}
