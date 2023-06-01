#include<stdio.h>

int main()
{
	int ano_atual;
	int ano_nasc;
	int idade;
	
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual); 
	
	printf("Digite o ano de nascimento: ");
	scanf("%d", &ano_nasc);
	
	idade = ano_atual - ano_nasc;
	
	printf("Sua idade: %d \n", idade);	
	
	if(idade >= 18)
	{
		printf("Maior de idade!");
	}
	else
	{
		printf("Menor de idade!");
	}
}
	
