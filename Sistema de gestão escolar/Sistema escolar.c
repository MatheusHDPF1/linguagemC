#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Sistema de Gestão Escolar
	@author Matheus Henrique De Paula Ferreira
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	system("color f0");
	printf(" #####                                      \n");
	printf("#     # #  ####  ##### ###### #    #   ##   \n");
	printf("#       #  #       #   #      ##  ##  #  #  \n");
	printf(" #####  #  ####    #   #####  # ## # #    # \n");
	printf("      # #     #    #   #      #    # ###### \n");
	printf("#     # # #   #    #   #      #    # #    # \n");
	printf(" #####  #  ####    #   ###### #    # #    # \n\n");
                                            
                                                 
	printf("######  ####   ####   ####  #        ##   #####  \n");
	printf("#      #      #    # #    # #       #  #  #    # \n");
	printf("#####   ####  #      #    # #      #    # #    # \n");
	printf("#           # #      #    # #      ###### #####  \n");
	printf("#      #    # #    # #    # #      #    # #   #  \n");
	printf("######  ####   ####   ####  ###### #    # #    # \n\n");
	char aluno[50];
	char sexo;
	int idade;
	system("pause");
	system("cls");
    printf("Cadastro do Aluno(a)\n\n");
	printf("Nome Do Aluno(a): ");
	gets(aluno);
    printf("Sexo(M/F): ");
    scanf("%c", &sexo);
	printf("Idade :");
	scanf("%d", &idade);
	system("pause");
	system ("cls");
	printf("Cálculo da média escolar\n\n");
	float nota1,nota2,nota3,nota4,media;
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	printf("Digite a nota 4: ");
	scanf("%f", &nota4);
	media = (nota1 + nota2 + nota3 + nota4) / 2;
	printf("Resultado: %.1f\n", media);
	system("pause");
	return 0;
}
