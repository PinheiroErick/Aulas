#include<stdio.h>

int main()
{
	char nome[20];
	int ano_atual;
	int ano_nasc;
	int idade;
	float peso;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	
	printf("Digite o ano de nascimento: ");
	scanf("%d", &ano_nasc);
	
	idade = ano_atual - ano_nasc;
	
	printf("A idade do %s e: %d \n",nome,idade);
}	printf("O peso do %s e: %f",nome,peso);
