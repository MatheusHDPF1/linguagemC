#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Sistema de Gestão de Academias
	@author Matheus Henrique De Paula Ferreira
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char professor [30]={"Carlos Henrique"};
	char personal = 's';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	system("color 70");
	printf("   ###     ######     ###    ########  ######## ##     ## ####    ###    \n");
  	printf("  ## ##   ##    ##   ## ##   ##     ## ##       ###   ###  ##    ## ##   \n");
 	printf(" ##   ##  ##        ##   ##  ##     ## ##       #### ####  ##   ##   ##  \n");
	printf("##     ## ##       ##     ## ##     ## ######   ## ### ##  ##  ##     ## \n");
	printf("######### ##       ######### ##     ## ##       ##     ##  ##  ######### \n");
	printf("##     ## ##    ## ##     ## ##     ## ##       ##     ##  ##  ##     ## \n");
	printf("##     ##  ######  ##     ## ########  ######## ##     ## #### ##     ## \n\n\n");
	
	printf("######## #### ######## ##    ## ########  ######   ######  \n");
	printf("##        ##     ##    ###   ## ##       ##    ## ##    ## \n");
	printf("##        ##     ##    ####  ## ##       ##       ##       \n");
	printf("######    ##     ##    ## ## ## ######    ######   ######  \n");
	printf("##        ##     ##    ##  #### ##             ##       ## \n");
	printf("##        ##     ##    ##   ### ##       ##    ## ##    ## \n");
	printf("##       ####    ##    ##    ## ########  ######   ######  \n");
	int opcao;
	printf("_______________________________________________________________________\n\n");
	printf("1 - Gestão de Funcionários\n");
	printf("2 - Cadastrar Aluno(a)\n");
	printf("3 - Sobre\n\n");
	printf("Digite a opção: ");
	scanf("%d", &opcao);
	switch(opcao) {
	   case 1:
			system("cls");
			system("color 30");
			printf("Gestão de Funcionários\n\n");
			printf("Professor: %s\n", professor);
			printf("Personal Trainer(s/n): %c\n", personal);
			printf("Período: %d\n", periodo);
			printf("Salário: R$ %.2lf\n", salario);
			printf("Carga horária semanal: %.1f\n", cargaHoraria);
			printf("__________________________________________________\n\n");
	    break;
	    case 2:
	    	system("cls");
	    	system("color f0");
	    	fflush(stdin);
	    	char aluno[50];
	    	char sexo;
	    	int idade;
	    	float peso,altura,imc;
	    	printf("Cadastro de Aluno(a)\n\n");
		    printf("Nome Do Aluno(a): ");
			gets(aluno);
			printf("Sexo(M/F): ");
			scanf("%c", &sexo);
			printf("Idade :");
			scanf("%d", &idade);
			printf("Peso(Kg): ");
			scanf("%f", &peso);
			printf("Altura(m): ");
			scanf("%f", &altura);
			imc = peso /(altura * altura);
			system("pause");
			system("cls");
			printf("Ficha do Aluno(a): \n");
			printf("_________________________________\n");
			printf("Aluno(a): %s\n", aluno);
			printf("Sexo: %c\n", sexo);
			printf("Idade: %d\n", idade);
			printf("Peso(kg): %.f\n", peso);
			printf("Altura(m): %.2f\n", altura);
			printf("IMC: %.2f\n", imc);
			printf("_________________________________\n");
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
		break;
		case 3:
			system("cls");
			system("color 0f");
			printf("Sistema de Gestão de Academias\n\n");
			printf("@author Matheus Henrique De Paula Ferreira\n");
			printf("https://github.com/MatheusHDPF1\n");
			printf("___________________________________________________\n\n");
		break;
		default:
			printf("Opção não encontrada\n");
		break;
	}
	system("pause");
	return 0;
	
}
