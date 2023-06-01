/*
4 - Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é positivo ou negativo.  
*/
#include<stdio.h>

int main()
{
	int Val1;
	
	printf("Digite um valor inteiro!");
	scanf("%d", &Val1);
	
	if(Val1 > 0)
	{
		printf("Valor '%d' e POSITIVO", Val1);
	}
	else if(Val1 < 0)
	{
		printf("Valor de '%d' e  NEGATIVO", Val1);
	}
	else
	{
		printf("ZERO e NEUTROOOOOOOOOOO \n");
	}
	
	
}
