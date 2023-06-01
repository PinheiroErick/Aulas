#include<stdio.h>
#include<stdlib.h>

int main()
{
	char nome[20];
	float sal_b;
	float sal_l;
	
	printf("Digite o nome: ");
	scanf("%s", &nome);
	system("CLS");
	
	printf("Digite o salario bruto do %s: ", nome);
	scanf("%f", &sal_b);
	system("CLS");
	
	sal_l = sal_b * 0.90;
	sal_l = sal_l * 0.95;
	
	printf("Funcionario nome: %s\n", nome);
	printf("Salario BRUTO: %f\n", sal_b);
	printf("Salario Liquido: %f", sal_l);
			
}

