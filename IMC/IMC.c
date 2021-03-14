#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Cálculo do IMC 
	@author Matheus Henrique De Paula Ferreira
*/

int main(int argc, char *argv[]) {
	float imc, altura, peso;
	setlocale(LC_ALL, "Portuguese");
	system("color F0");
	printf(":::::::::::::::    ::::  :::::::: \n" );
    printf( "   :+:    +:+:+: :+:+:+:+:    :+: \n");
    printf( "   +:+    +:+ +:+:+ +:++:+         \n");
    printf( "   +#+    +#+  +:+  +#++#+         \n");
    printf( "   +#+    +#+       +#++#+        \n");
    printf( "   #+#    #+#       #+##+#    #+# \n" );
	printf("##############       ### ########\n\n" );
	printf("Digite sua altura(m): ");
	scanf("%f", &altura);
	printf("Digite seu peso(Kg): ");
	scanf("%f", &peso);
	imc = peso /(altura * altura);
	printf("IMC = %.2f\n", imc);
	if (imc < 17){
		printf("Muito abaixo do peso\n");
	} else if (imc < 18.5){
		printf("Abaixo do peso\n");
	} else if (imc < 25){
		printf("Peso normal\n");
	} else if (imc < 30){
		printf("Acima do peso\n");
	} else if (imc < 35){
		printf("Obesidade I\n");
	} else if (imc < 40){
		printf("Obesidade II (severa)\n");
	} else 
	    printf ("Obesidade III (mórbita)\n");
	system("pause");
	return 0;
}
