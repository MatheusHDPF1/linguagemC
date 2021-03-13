#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Estudo das variáveis
	@author Matheus Henrique De Paula Ferreira
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char professor [30]={" José de Assis "};
	char personal = 's';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	printf("ACADEMIA PHISICAL\n");
	printf("____________________________________\n");
	printf("Professor: %s\n", professor);
	printf("Personal Trainer (s/n): %c\n", personal);
	printf("Periodo: %d\n", periodo);
	printf("Carga horária semanal: %.1f\n", cargaHoraria);
	printf("Salário: R$ %.2lf\n", salario);
	printf("____________________________________\n");
	system("pause");
	system("cls");
	char aluno[50];
	char sexo;
	int idade;
	float peso, altura;
	printf("Cadastro de Aluno(a)\n\n");
	printf("Nome Do Aluno(a): ");
	gets(aluno);
	printf("Sexo(M/F): ");
	scanf("%c", &sexo);
	printf("Idade :");
	scanf("%d", &idade);
	printf("Peso: ");
	scanf("%f", &peso);
	printf("Altura: ");
	scanf("%f", &altura);
	system("pause");
	system("cls");
	printf("Ficha do Aluno(a): \n");
	printf("_________________________________\n");
	printf("Aluno: %s\n", aluno);
	printf("Sexo: %c\n", sexo);
	printf("Idade: %d\n", idade);
	printf("Peso(kg): %.f\n", peso);
	printf("Altura(m): %.2f\n", altura);
	printf("_________________________________\n");
	system("pause");
	return 0;
}
